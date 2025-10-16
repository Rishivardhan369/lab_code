#include <iostream>
using namespace std;
// Single Inheritance
class Vehicle {
public:
 void start() { cout << "Vehicle started\n"; }
};
class Car : public Vehicle { // Car inherits from Vehicle (Single Inheritance)
public:
 void drive() { cout << "Car is driving\n"; }
};
// Multiple Inheritance
class LandVehicle {
public:
 void landInfo() { cout << "Can drive on land\n"; }
};
class WaterVehicle {
public:
 void waterInfo() { cout << "Can drive on water\n"; }
};
class AmphibiousVehicle : public LandVehicle, public WaterVehicle { // Inherits from LandVehicle and WaterVehicle (Multiple Inheritance)
public:
 void info() { cout << "Amphibious Vehicle\n"; }
};
// Multilevel Inheritance
class Animal {
public:
 void eat() { cout << "Animal eats\n"; }
};
class Mammal : public Animal { // Mammal inherits from Animal (Multilevel Inheritance)
public:
 void hasFur() { cout << "Mammal has fur\n"; }
};
class Dog : public Mammal { // Dog inherits from Mammal (Multilevel Inheritance continuation)
public:
 void bark() { cout << "Dog barks\n"; }
};
// Hierarchical Inheritance
class Bird {
public:
 void fly() { cout << "Bird can fly\n"; }
};
class Sparrow : public Bird { // Sparrow inherits from Bird (Hierarchical Inheritance)
public:
 void sing() { cout << "Sparrow sings\n"; }
};
class Pigeon : public Bird { // Pigeon inherits from Bird (Hierarchical Inheritance)
public:
 void coo() { cout << "Pigeon coos\n"; }
};
// Hybrid Inheritance
class Engine {
public:
 void enginePower() { cout << "Engine power\n"; }
};
class Wheel {
public:
 void wheelCount() { cout << "Number of wheels\n"; }
};
class Bike : public Engine, public Wheel { // Bike inherits from Engine and Wheel (Hybrid Inheritance)
public:
 void bikeInfo() { cout << "Bike info\n"; }
};
int main() {
 Car c; c.start(); c.drive();
 AmphibiousVehicle av; av.info(); av.landInfo(); av.waterInfo();
 Dog d; d.eat(); d.hasFur(); d.bark();
 Sparrow s; s.fly(); s.sing();
 Pigeon p; p.fly(); p.coo();
 Bike b; b.enginePower(); b.wheelCount(); b.bikeInfo();
 return 0;
}
