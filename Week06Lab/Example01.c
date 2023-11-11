#include <stdio.h>
#include <stdlib.h>
#define NUMBEROFCARS 2

typedef struct {
    char type; // license type -> 'B' for cars 'A' for bikes, 'E' for trucks
    int unitSalary;
    int duration;
} Driver;

typedef struct CarType
{
    int speed;
    int price;
    char* model;
    Driver* driver;
    void (*addDriver)(struct CarType*, Driver*);
} Car;

void add_driver(Car* self, Driver* driver) {
    self->driver = driver;
}

int calculate_salary(Car cars[], int len) {
    int total = 0;
    for (int i = 0; i < len; i++) {
        if (cars[i].driver->type == 'B')
            total += cars[i].driver->unitSalary;
    }
    return total;
}

int main(void)
{
    Driver d1 = {'B', 10000, 10};
    Driver d2 = {'C', 20000, 15};
    Driver d3 = {'B', 5000, 3};

    Driver* driversB[] = {&d1, &d3};
    Driver* driversC[] = {&d2};

    Car c1={100, 10,"Togg", driversB, add_driver};
    Car c2={200, 20,"Togg", driversC, add_driver};

    printf("speed = %d model=%s price %d\n", c1.speed,c1.model,c1.price);
    Car cars[]={c1, c2};
    /*
    int sum=0;
    for (size_t i = 0; i < NUMBEROFCARS; i++)
    {
         sum+=cars[i].price;
    }
    printf("Total price =%d\n",sum);
    */

    printf("\nTotal salary is %d", calculate_salary(cars, NUMBEROFCARS));

    return 0;
}
