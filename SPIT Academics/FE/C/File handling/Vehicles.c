#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char name[100];
    char address[200];
} OwnerInfo;


typedef struct 
{
    char registration[20];
    OwnerInfo owner;
} VehicleRecord;

#define FILE_NAME "vehicle_records.txt"


void load_records(VehicleRecord** records, size_t* count) 
{
    FILE* file = fopen(FILE_NAME, "r");
    if (!file) 
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fscanf(file, "%zu\n", count); // Read the number of records
    *records = malloc((*count) * sizeof(VehicleRecord));

    for (size_t i = 0; i < *count; i++)
     {
        fscanf(file, "%19s\n", (*records)[i].registration);
        fgets((*records)[i].owner.name, 100, file);
        (*records)[i].owner.name[strcspn((*records)[i].owner.name, "\n")] = '\0'; // Remove newline
        fgets((*records)[i].owner.address, 200, file);
        (*records)[i].owner.address[strcspn((*records)[i].owner.address, "\n")] = '\0'; // Remove newline
    }

    fclose(file);
}

OwnerInfo* retrieve_owner_info(const char* registration_number, VehicleRecord* records, size_t count) 
{
    for (size_t i = 0; i < count; i++)
     {
        if (strcmp(records[i].registration, registration_number) == 0) 
        {
            return &records[i].owner;
        }
    }
    return NULL;
}

int main() 
{   
    printf("UID no:- 2024800059\n");
    VehicleRecord* records = NULL;
    size_t record_count = 0;

    load_records(&records, &record_count);

    char registration_number[20];

    printf("Enter the vehicle's registration number: ");
    scanf("%19s", registration_number);

    OwnerInfo* owner_info = retrieve_owner_info(registration_number, records, record_count);

    if (owner_info) 
    {
        printf("Owner Information:\nName: %s\nAddress: %s\n", owner_info->name, owner_info->address);
    } 
    else
    {
        printf("No record found for the given registration number.\n");
    }

    free(records);
    return 0;
}
