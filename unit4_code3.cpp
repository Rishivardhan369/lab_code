#include <iostream>
using namespace std;
template <class T1, class T2>
class Pair {
private:
 T1 first;
 T2 second;
public:
 Pair(T1 a, T2 b) : first(a), second(b) {}
 void display() {
  cout << "First: " << first << ", Second: " << second << "\n";
 }
};
int main() {
 Pair<int, float> p1(10, 5.5f);
 Pair<string, char> p2("Hello", 'A');
 p1.display();
 p2.display();
 return 0;
}
