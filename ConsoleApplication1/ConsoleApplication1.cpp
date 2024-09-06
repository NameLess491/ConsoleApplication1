#include <iostream>

struct Car {
    std::string name;
    std::string model;
    double price;
    std::string country;
};

int main() {
    Car myCar;
    myCar.name = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.country = "Japan";

    std::cout << "Car name: " << myCar.name << "\n";
    std::cout << "Car model: " << myCar.model << "\n";
    std::cout << "Car price: $" << myCar.price << "\n";
    std::cout << "Made in: " << myCar.country << "\n";

    return 0;
}
