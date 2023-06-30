#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        } else
            return 1;
    } else
        return 0;
}

int isValidDate(Date date) {
    if (date.year < 0 || date.month < 1 || date.month > 12 || date.day < 1)
        return 0;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(date.year))
        daysInMonth[1] = 29;

    if (date.day > daysInMonth[date.month - 1])
        return 0;

    return 1;
}

int main() {
    Date date;

    printf("Enter date (day month year): ");
    scanf("%d %d %d", &date.day, &date.month, &date.year);

    if (isValidDate(date))
        printf("Valid date.\n");
    else
        printf("Invalid date.\n");

    return 0;
}
