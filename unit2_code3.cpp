
#include <iostream>
using namespace std;
class Student {
private:
 string name;
 int age;
public:
 Student(string n, int a) {
  name = n;
  age = a;
  cout << "Constructor called for " << name << endl;
 }
 void display() {
  cout << "Name: " << name << ", Age: " << age << endl;
 }
 ~Student() {
  cout << "Destructor called for " << name << endl;
 }
};
int main() {
 Student s1("Rahul", 20);
 s1.display();
 {
  Student s2("Priya", 19);
  s2.display();
 } // Destructor for s2 is called here (end of scope)
 return 0;
}
