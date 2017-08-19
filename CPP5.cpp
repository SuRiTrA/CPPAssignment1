#include <iostream>
using namespace std;

/*C++ program to accept length and breadth of a rectangle and find their area.*/

int main()
{ 
  float len=0, bre=0;
  float area=0;
  cout<<"****AREA CALCULATOR****";
  cout<<"\n \nEnter the LENGTH of rectangle: ";
  cin>>len;
  cout<<"\n \nEnter the BREADTH of rectangle: ";
  cin>>bre;
  area=len*bre;
  cout<<"\n \nThe required area is: "<<area;
  return 0;
}
