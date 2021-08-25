#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct People {
    char fname[20];
    char lname [20];
} People;

struct Event {
    char date[10];
    char start[7];
    char end[7];
    
} Event;

void addEvent(){
    struct Event event;
    char dateString[10];

    printf("What is the date of the new event? (In MM/DD/YYYY format)\n");
    scanf("%s", &dateString);

}

int main(){
    int decision;
    
    printf("What would you like to do?\n 1. View upcoming week\n 2. Add event\n 3. Remove event\n 4. Exit\n");
    scanf("%d", &decision);
    switch(decision){
        case 1:
            printf("They picked 1");
            break;
        case 2:
            addEvent();
            break;
        case 3:
            printf("They picked 3");
            break;
        case 4:
            exit(0);
            break;
        default:
            main();
    }
}