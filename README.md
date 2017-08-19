#include <iostream>
using namespace std;

/*C++ program to perform input/output of all basic data types.*/

int main()
{ 
  int a=0;
  float c=0;
  double b=0;
  char ch='0';
  bool bl=true;
  cout<<"Hello there, Welcome"<<endl;
  cout<<"\nThis program accepts data types and PRINTS it"<<endl;
  cout<<"\nEnter an integer: ";
  cin>>a;
  cout<<"\nEnter a floating point number(for float data type): ";
  cin>>c;
  cout<<"\nEnter a floating point number(for double data type): ";
  cin>>b;
  cout<<"\nEnter a character: ";
  cin>>ch;
  cout<<"\n \nThe integer was: "<<a;
  cout<<"\n \nThe floating point float number was: "<<c;
  cout<<"\n \nThe floating point double was: "<<b;  
  cout<<"\n \nThe character was: "<<ch<<endl;
  return 0;
}

