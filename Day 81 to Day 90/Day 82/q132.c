// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight light;
    int choice;

    printf("Enter 0 for RED\n");
    printf("Enter 1 for YELLOW\n");
    printf("Enter 2 for GREEN\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    light = choice;   // 0 -> RED, 1 -> YELLOW, 2 -> GREEN

    if (light == RED) {
        printf("Stop\n");
    } else if (light == YELLOW) {
        printf("Wait\n");
    } else if (light == GREEN) {
        printf("Go\n");
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}

