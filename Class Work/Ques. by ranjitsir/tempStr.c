#include <stdio.h>
#include <time.h>

int calculate_days_difference_from_current(const char* date) {
    struct tm tm_given = {0}, tm_current = {0};
    time_t time_given, time_current;

    // Parse the given date
    sscanf(date, "%d %d %d", &tm_given.tm_mday, &tm_given.tm_mon, &tm_given.tm_year);

    // Adjust the month and year
    tm_given.tm_mon -= 1;        // tm_mon is 0-based
    tm_given.tm_year -= 1900;    // tm_year is years since 1900

    // Get the current date
    time(&time_current);
    tm_current = *localtime(&time_current);

    // Convert both dates to time_t
    time_given = mktime(&tm_given);

    // Calculate the difference in seconds and convert to days
    double difference = difftime(time_current, time_given);
    return (int)(difference / (60 * 60 * 24));
}

int main() {
    const char* date = "30 12 2024";  // Example date

    int days_difference = calculate_days_difference_from_current(date);
    printf("Difference in days from current date: %d\n", days_difference);

    return 0;
}
