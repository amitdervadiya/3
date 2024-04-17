#include <stdio.h>

struct Car {
    int car_id;
    char car_make[50];
    char car_model[50];
    int car_year;
    char car_color[50];
    float car_price;
    int car_mileage;
};

int main() {
    int N;


    printf("Enter the number of cars: ");
    scanf("%d", &N);

 
    struct Car cars[N];

    for (int i = 0; i < N; i++) {
        printf("Enter the details of car %d:\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].car_id);
        printf("Car Make: ");
        scanf("%s", cars[i].car_make);
        printf("Car Model: ");
        scanf("%s", cars[i].car_model);
        printf("Car Year: ");
        scanf("%d", &cars[i].car_year);
        printf("Car Color: ");
        scanf("%s", cars[i].car_color);
        printf("Car Price: ");
        scanf("%f", &cars[i].car_price);
        printf("Car Mileage: ");
        scanf("%d", &cars[i].car_mileage);
    }

  
    for (int i = 0; i < N; i++) {
        printf("\nCar %d Details:\n", i + 1);
        printf("Car ID: %d\n", cars[i].car_id);
        printf("Car Make: %s\n", cars[i].car_make);
        printf("Car Model: %s\n", cars[i].car_model);
        printf("Car Year: %d\n", cars[i].car_year);
        printf("Car Color: %s\n", cars[i].car_color);
        printf("Car Price: %.2f\n", cars[i].car_price);
        printf("Car Mileage: %d\n", cars[i].car_mileage);
    }

    return 0;
}