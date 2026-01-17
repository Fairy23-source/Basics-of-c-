#include<iostream>
#include<iomanip>
using namespace std;
//concept of manipulators is used
int main () { 
//setw is used to print nums in proper form by a width of 4 as given ,endl is also a manipulator
int a =3,b=34,c=456;
cout<<"the value of a is"<<setw(4)<<a<<endl;
cout<<"the value of b is"<<setw(4)<<b<<endl;
cout<<"the value of c is"<<setw(4)<<c<<endl;
return 0;
}