#include<iostream>
using namespace std;
int c=45;
int main () {
    int a,b,c;
    cout<<"enter value of a";
    cin>>a;
    cout<<"enter value of b";
    cin>>b;
    c=a+b;
    cout<<"the value of c is"<<::c;
    return 0;

}
//45 because we used global variable