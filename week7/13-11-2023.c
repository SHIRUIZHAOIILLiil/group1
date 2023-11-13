#include<stdio.h>

typedef struct {
    char date[20];
    float bloodIron;
} reading;

int main(){

    reading today = {"13-11-2023", 11.5};
    reading thisWeek[7] = {{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"},{"Sunday"}};
    printf("today: %s\n", today.date);
    printf("this week: %s\n", thisWeek[0].date);
    return 0;
}