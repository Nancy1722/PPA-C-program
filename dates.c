#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) {
  
    if (date1.year > date2.year)
        return 1;
    else if (date1.year < date2.year)
        return -1;

    if (date1.month > date2.month)
        return 1;
    else if (date1.month < date2.month)
        return -1;

    if (date1.day > date2.day)
        return 1;
    else if (date1.day < date2.day)
        return -1;

    return 0;
}

int main() {
    struct Date date1, date2;

    printf("Enter the first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int result = compareDates(date1, date2);

    if (result == 1)
        printf("The first date is greater.\n");
    else if (result == -1)
        printf("The second date is greater.\n");
    else
        printf("Both dates are equal.\n");

    return 0;
}
