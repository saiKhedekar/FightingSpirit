#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

void split_books(const char *input_file, const char *paperback_file, const char *hardback_file) {
    FILE *input_fp = fopen(input_file, "r");
    FILE *paperback_fp = fopen(paperback_file, "w");
    FILE *hardback_fp = fopen(hardback_file, "w");

    if (!input_fp || !paperback_fp || !hardback_fp) {
        perror("Error opening files");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE_LENGTH];

    while (fgets(line, sizeof(line), input_fp)) {
        // Ensure the line ends with a null terminator
        line[strcspn(line, "\n")] = '\0';

        if (line[0] == 'p' || line[0] == 'b') {
            fprintf(paperback_fp, "%s\n", line);
        }
        if (line[0] == 'h' || line[0] == 'b') {
            fprintf(hardback_fp, "%s\n", line);
        }
    }

    fclose(input_fp);
    fclose(paperback_fp);
    fclose(hardback_fp);
}

int main() {
    printf("UID no - 2024800059");
    const char *input_file = "books.txt";
    const char *paperback_file = "paperbacks.txt";
    const char *hardback_file = "hardbacks.txt";

    split_books(input_file, paperback_file, hardback_file);

    printf("\n\nBooks have been successfully separated into '%s' and '%s'.\n\n", paperback_file, hardback_file);

    return 0;
}
