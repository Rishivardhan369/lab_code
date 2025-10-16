#include <iostream>
using namespace std;
class Example{
private:
int privateVar=10;
protected:
int protectedVar=20;
public:
int publicVar=30;
void display(){
cout<<"Private Variable: "<<privateVar<<"\n";
cout<<"Protected Variable: "<<protectedVar<<"\n";
cout<<"Public Variable: "<<publicVar<<"\n";
}
};
void greet(string name="Guest",int times=1){
for(int i=0;i<times;++i)
cout<<"Hello, "<<name<<"!\n";
}
int main(){
greet();
greet("Alice",3);
Example obj;
obj.display();
return 0;
}
