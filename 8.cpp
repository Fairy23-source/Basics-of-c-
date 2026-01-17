#include<iostream>
using namespace std;
int main () {
    int age;
    cout <<"enter your age ";
    cin>>age;
    if(age<18)
    cout<<"you cannot come to my party";
    else if(age==18)
    cout<<"you can come and will get a child pass";
    else
    cout<<"you can come directly";
    return 0;

}