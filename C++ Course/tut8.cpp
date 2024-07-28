#include<iostream>
#include<iomanip>
using namespace std;

int main()
{   //***********Contants***********
    // int a = 20;
    // cout<<"value of a is "<<a<<endl;
    // a =520;
    // cout<<"new value of a is "<<a<<endl;

    // const int a=5;
    // a=6(this will show error as value of a is constant)

    //**************Manipulators******************
    // include iomanip
    int a=3,b=78,c=4569;
    cout <<"value of a without setw is"<<a<<endl;
    cout <<"value of b without setw is"<<b<<endl;
    cout <<"value of c without setw is"<<c<<endl;

    cout <<"value of a is"<<setw(4)<<a<<endl;
    cout <<"value of b is"<<setw(4)<<b<<endl;
    cout <<"value of c is"<<setw(4)<<c<<endl;

    // setw(4) means it will occupy width of 4



    // **********OPERATORS PRECEDENCE**********
    return 0;
}