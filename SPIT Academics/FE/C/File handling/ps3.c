#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 1000
#define MAX_ISBN_LENGTH 20

typedef struct {
    char isbn[MAX_ISBN_LENGTH];
    int count;
} Book;

void add_or_increment_book(Book books[], int *book_count, const char *isbn) {
    for (int i = 0; i < *book_count; i++) {
        if (strcmp(books[i].isbn, isbn) == 0) {
            books[i].count++;
            return;
        }
    }

    if (*book_count < MAX_BOOKS) {
        strcpy(books[*book_count].isbn, isbn);
        books[*book_count].count = 1;
        (*book_count)++;
    } else {
        fprintf(stderr, "Error: Too many unique books. Increase MAX_BOOKS.\n");
        exit(EXIT_FAILURE);
    }
}

int compare_books(const void *a, const void *b) {
    Book *book1 = (Book *)a;
    Book *book2 = (Book *)b;
    return book2->count - book1->count; // Descending order of count
}

void process_sales_file(const char *file_name, Book books[], int *book_count) {
    FILE *fp = fopen(file_name, "r");
    if (!fp) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char isbn[MAX_ISBN_LENGTH];
    while (fscanf(fp, "%s", isbn) != EOF) {
        add_or_increment_book(books, book_count, isbn);
    }

    fclose(fp);
}

void print_bestseller_list(Book books[], int book_count) {
    printf("Bestseller List:\n");
    printf("Rank\tISBN\t\tCopies Sold\n");
    for (int i = 0; i < book_count; i++) {
        printf("%d\t%s\t%d\n", i + 1, books[i].isbn, books[i].count);
    }
}

int main() {
    const char *file_name = "sales.txt";
    Book books[MAX_BOOKS];
    int book_count = 0;

    process_sales_file(file_name, books, &book_count);

    qsort(books, book_count, sizeof(Book), compare_books);

    print_bestseller_list(books, book_count);

    return 0;
}
