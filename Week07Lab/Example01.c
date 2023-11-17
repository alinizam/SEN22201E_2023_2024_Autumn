#include <stdio.h>
#include <stdlib.h>

/*
Create a car struct including price model attributes
Create union holding a car or stop bit as int
unit( struct Car, int stop)
Create another struct (carHolder) to hold union and a 
flag field to address holding attribute
Create a memory area to hold 5 carHolders.
Calculate total price of cars until reaching stop 
*/

typedef struct car {
    int price;
    char model[20];
    char attributes[20];
} car;

typedef union unit {
    car car_;
    int stop;
} unit;

typedef struct carHolder {
    unit u;
    int flag;
} carHolder;

int main() {
    // Create a memory area to hold 5 carHolders
    carHolder* holderArray = calloc(5, sizeof(carHolder)); // contigious allocation

    car c1 = {.price=40000, .model="City", .attributes=""};
    car c2 = {.price=55000, .model="City", .attributes=""};
    car c3 = {.price=100000, .model="City", .attributes=""};
    car c4 = {.price=700000, .model="City", .attributes=""};

    unit u1 = {.car_ = c1};
    unit u2 = {.car_ = c2};
    unit u3 = {.car_ = c3};
    unit u4 = {.car_ = c4};
    unit u5 = {.stop = 0};

    carHolder ch1 = {.u = u1, .flag = 0};
    carHolder ch2 = {.u = u2, .flag = 0};
    carHolder ch3 = {.u = u3, .flag = 0};
    carHolder ch4 = {.u = u4, .flag = 0};
    carHolder ch5 = {.u = u5, .flag = 1};

    holderArray[0] = ch1;
    holderArray[1] = ch2;
    holderArray[2] = ch3;
    holderArray[3] = ch4;
    holderArray[4] = ch5;

    int sum = 0;
    while(holderArray->flag == 0) {
        sum += holderArray->u.car_.price;
        holderArray++;
    }
    printf("%d", sum);
}

