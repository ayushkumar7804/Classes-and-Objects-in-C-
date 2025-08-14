/*Ayush Yadav 
 24070123028*/


#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;


class Car {
public:
    string brand;
    string car_name;
    int engine_power;
    int year;

    void displayDetails() {

        
        cout << "Car Brand: " << brand << endl;
        cout << "Car Name: " << car_name << endl;
        cout << "Car Power: "<< engine_power<< endl;
        cout << "Car Year: " << year << endl;
    }
};



int main() {
   
    Car car1;
    cout << "Enter car brand: ";
    cin >> car1.brand;
    cout << "Enter car name: ";
    cin >> car1.car_name;
    cout << "Write engine specification: ";
    cin >> car1.engine_power;
    cout << "Enter car year: ";
    cin >> car1.year;
    cout << " *-------Car Details--------*" << endl;
    car1.displayDetails();
    cout<< "----------------"<<endl;


  
    return 0;
}

/*OUTPUT
  Enter car brand: Toyota 
Enter car name: Fortuner 
Write engine specification: 204
Enter car year: 2025
 *-------Car Details--------*
Car Brand: Toyota
Car Name: Fortuner
Car Power: 204
Car Year: 2025
----------------*/
