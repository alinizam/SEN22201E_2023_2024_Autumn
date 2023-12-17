#include <iostream>
#include <string>
#include <vector>// ArrayList'imsi
using namespace std;// Import package'msi

/*Create a simple class named Car with the following attributes:
brand, model, and year. Implement a default constructor and a parameterized
constructor to initialize the attributes.
*/

class Car
{
private:
    string brand;
    string model;
    int year;
    int price;

public:
    Car() {} // Default Constructor
    Car(string brand, string model, int year, int price)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->price = price;
    }

    /*
    Create a new member function within the class called setCarDetails()
    that allows the user to set the details of the car
    (brand, model, price, and year) interactively.
    */
    void setCarDetails(string brand, string model, int price, int year)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->price = price;
    }

    void displayInfo(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;
    }

    // ENCAPSULATIONS
    void setBrand(string brand)
    {
        this->brand = brand;
    }
    void setModel(string model)
    {
        this->model = model;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    void setPrice(int price)
    {
        this->price = price;
    }

    string getModel()
    {
        return this->model;
    }
    string getBrand()
    {
        return this->brand;
    }
    int getYear()
    {
        return this->year;
    }
    int getPrice()
    {
        return this->price;
    }
};

// Add a Seller object including cars vector, 
class Seller
{
private:
    vector<Car> cars;
public:
    //Add a add car method to add a car to vector
    void addCar(Car car){
        cars.push_back(car);
    }

    //Add a method to cell vector to calculate the total price of cars
    int totalPrice(){
        int totalPrice = 0;
        for(Car car : cars){// Like Java for-each
            totalPrice += car.getPrice();
        }

        return totalPrice;
    }
};

int main()
{
    /*Now, in the main() function, create two objects of the Car class, 
    one representing a Togg C1 of the year 2020 and the other representing 
    a Ford Mustang of the year 2019. Call the displayInfo() function for 
    each object to display their details.
    */
    Car ford; // Default constructor
    ford.setCarDetails("Ford", "Mustang", 2020, 20000);
    Car togg("TOGG", "T10X", 2020, 10000);
    togg.displayInfo();
    ford.displayInfo();

    // Test Seller
    Seller seller;
    seller.addCar(togg);
    seller.addCar(ford);
    cout << "Total Price = " << seller.totalPrice() << endl;
    

    return 0;
}