#include <iostream>
using namespace std;

/*C++ program to accept length and breadth of a rectangle and find their perimeter.*/

int main()
{ 
  float len=0, bre=0;
  float perimeter=0;
  cout<<"****PERIMETER CALCULATOR****";
  cout<<"\n \nEnter the LENGTH of rectangle: ";
  cin>>len;
  cout<<"\n \nEnter the BREADTH of rectangle: ";
  cin>>bre;
  perimeter=2*(len+bre);
  cout<<"\n \nThe required perimeter is: "<<perimeter;
  return 0;
}

