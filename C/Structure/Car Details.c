#include <stdio.h>

struct Car {
    char brand[20];
    char color[20];
    char type[10];
    int sc_number;
};

int main() {
    struct Car car1, car2;

    // CAR 1 DETAILS
    printf("\t\tEnter details below for car 1\n");
    printf("Brand: ");
    scanf("%s", car1.brand);
    printf("Color: ");
    scanf("%s", car1.color);
    printf("SC Number: ");
    scanf("%d", &car1.sc_number);
    printf("Type: ");
    scanf(" %[^\n]", car1.type);

    // CAR 2 DETAILS
    printf("\nEnter Details Below for car 2\n");
    printf("Brand: ");
    scanf("%s", car2.brand);
    printf("Color: ");
    scanf("%s", car2.color);
    printf("SC Number: ");
    scanf("%d", &car2.sc_number);
    printf("Type: ");
    scanf(" %[^\n]", car2.type);

    printf("\t\tCar 1 details is:\n");
    printf("Brand: %s\n", car1.brand);
    printf("Color: %s\n", car1.color);
    printf("SC Number: %d\n", car1.sc_number);
    printf("Type: %s\n", car1.type);

    printf("\t\tCar 2 details is:\n");
    printf("Brand: %s\n", car2.brand);
    printf("Color: %s\n", car2.color);
    printf("SC Number: %d\n", car2.sc_number);
    printf("Type: %s\n", car2.type);

    return 0;
}
