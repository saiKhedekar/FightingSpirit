#include <stdio.h>
#include <stdlib.h>

#define MAX_EVENTS 1000
#define MAX_SELECT 1000

typedef struct {
    int day;
    int count;
} Event;

void read_events_file(const char *file_name, Event events[], int *event_count) {
    FILE *fp = fopen(file_name, "r");
    if (!fp) {
        perror("Error opening EVENTS file");
        exit(EXIT_FAILURE);
    }

    *event_count = 0;
    int current_day = -1;

    while (fscanf(fp, "%d", &current_day) != EOF) {
        if (*event_count > 0 && events[*event_count - 1].day == current_day) {
            events[*event_count - 1].count++;
        } else {
            events[*event_count].day = current_day;
            events[*event_count].count = 1;
            (*event_count)++;
        }
    }

    fclose(fp);
}

void read_select_file(const char *file_name, int select_days[], int *select_count) {
    FILE *fp = fopen(file_name, "r");
    if (!fp) {
        perror("Error opening SELECT file");
        exit(EXIT_FAILURE);
    }

    *select_count = 0;
    while (fscanf(fp, "%d", &select_days[*select_count]) != EOF) {
        (*select_count)++;
    }

    fclose(fp);
}

void generate_report(Event events[], int event_count, int select_days[], int select_count) {
    printf("Report of Events for Selected Days:\n");
    printf("Day\tEvent Count\n");

    int event_index = 0;
    for (int i = 0; i < select_count; i++) {
        int current_day = select_days[i];
        int count = 0;

        while (event_index < event_count && events[event_index].day < current_day) {
            event_index++;
        }

        if (event_index < event_count && events[event_index].day == current_day) {
            count = events[event_index].count;
        }

        printf("%d\t%d\n", current_day, count);
    }
}

int main() {
    const char *events_file = "events.txt";
    const char *select_file = "select.txt";

    Event events[MAX_EVENTS];
    int select_days[MAX_SELECT];
    int event_count, select_count;

    read_events_file(events_file, events, &event_count);
    read_select_file(select_file, select_days, &select_count);

    generate_report(events, event_count, select_days, select_count);

    return 0;
}
