#include <iostream>
using namespace std;

/*C++ program to perform arithmatic operations with two numbers.*/

int main()
{ 
  float num1=0, num2=0;
  int ch=0;
  float result=0;
  cout<<"******MINI CALCULATOR******";
  cout<<"\n \nEnter the first number: ";
  cin>>num1;
  cout<<"\n \nEnter the second number: ";
  cin>>num2;
  cout<<"\n"<<"-----MENU-----"<<endl;
  cout<<"1.Addition"<<endl;
  cout<<"2.Subtraction"<<endl;
  cout<<"3.Multiplication"<<endl;
  cout<<"4.Division"<<endl;
  cout<<"Enter your choice(1-4): ";
  cin>>ch;
  switch(ch)
  {
    case 1: result=num1+num2;
            cout<<"\n \nYou asked for the sum of two numbers"<<endl;
            cout<<"The sum is: "<<result;
            break;
    case 2: result=num1-num2;
            cout<<"\n \nYou asked for the difference of two numbers"<<endl;
            cout<<"The difference is: "<<result;
            break;
    case 3: result=num1*num2;
            cout<<"\n \nYou asked for the product of two numbers"<<endl;
            cout<<"The product is: "<<result;
            break;
    case 4: if(num2!=0)
             {
              result=num1/num2;
              cout<<"\n \nYou asked for the division of two numbers"<<endl;
              cout<<"The quotient is: "<<result;
              break;
             }
             else
              cout<<"\n \nDIVISION BY ZERO !!!!! ERROR"<<endl;
             break;
    default:cout<<"\nNot A Valid Choice !!!"<<endl;
  }
  return 0;
}

