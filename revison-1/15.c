#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int compare_dates(Date date1, Date date2) {
    if (date1.year < date2.year)
        return -1;
    else if (date1.year > date2.year)
        return 1;
    else {
        if (date1.month < date2.month)
            return -1;
        else if (date1.month > date2.month)
            return 1;
        else {
            if (date1.day < date2.day)
                return -1;
            else if (date1.day > date2.day)
                return 1;
            else
                return 0; 
        }
    }
}

int main() {
    Date date1 = {15, 4, 2024};
    Date date2 = {20, 4, 2024};
    int result = compare_dates(date1, date2);

    if (result < 0)
        printf("Date 1 comes first\n");
    else if (result > 0)
        printf("Date 2 comes first\n");
    else
        printf("Both dates are the same\n");

    return 0;
}
