#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Car{
        char brand[20];
        char colour[20];
        int model;
        int mileage;
        int price;
    };


    struct Car val;


    printf("Enter the car brand: ");
    scanf("\n%s",val.brand);
    printf("Enter the car colour: ");
    scanf("\n%s",val.colour);
    printf("Enter the car model: ");
    scanf("\n%d",&val.model);
    printf("Enter the car mileage: ");
    scanf("\n%d",&val.mileage);
    printf("Enter the car price: ");
    scanf("\n%d",&val.price);
    printf("\nThese are the brands you selected:\n ");
   // printf("%s \n",Josh.brand );
    printf("%s \n", val.brand );
    printf("%s \n", val.colour );
    printf("%d \n", val.model );
    printf("%d \n", val.mileage );
    printf("%d \n", val.price );

    return 0;
}


    