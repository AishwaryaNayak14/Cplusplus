#include <iostream>
using namespace std;

class Calc {
  public:

    int add(int x, int y);
    int sub(int x, int y);
    int div(int x, int y);
    int mul(int x, int y);


};

int Calc::add(int x, int y) {
  return x + y;
}

int Calc::sub(int x, int y)
{
    return(x-y);
}

int Calc::div(int x, int y)
{
    return (x/y);

}

int Calc::mul(int x, int y)
{
    return(x*y);
}


int main() {
  Calc myObj;
  int num1;
  int num2;
  int sum=0;

      cout<<"Enter first number: ";
      cin>>num1;
      cout<<"Enter second number: ";
      cin>>num2;

 cout << myObj.add(num1,num2) <<  "\n";
 cout << myObj.sub(num1,num2)<<  "\n";
 cout << myObj.div(num1,num2)<<  "\n";
 cout << myObj.mul(num1,num2)<<  "\n";
}


