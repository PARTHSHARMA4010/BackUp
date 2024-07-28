
//there are two types of header file:
// 1. System header file- it comes with the compiler 
#include<iostream>
// 2. user definrd header files- it is written by 
// the programmer
//#include "this.h"----> this will produce an error if 
//this.h is not present in current directory.
// use cpp reference for header files to know header files of c++.
using namespace std;

int main() {
    int a=4, b=5;
    // <<endl can also be used instead of \n for changing line
cout<<"Operators in C++: "<<endl;
cout<<"The value of a+b is :"<<a+b <<endl;
cout<<"The value of a-b is :"<<a-b <<endl;
cout<<"The value of a*b is :"<<a*b <<endl;
cout<<"The value of a/b is :"<<a/b <<endl;
cout<<"The value of a%b is :"<<a%b <<endl;
cout<<"The value of a++ is :"<<a++ <<endl;
cout<<"The value of a-- is :"<<a-- <<endl;
cout<<"The value of ++a is :"<<++a <<endl;
cout<<"The value of --a is :"<<--a <<endl;
cout<<endl;
cout<<endl;

//comparion operator
cout<<"The value a==b "<<(a==b)<<endl;
cout<<"The value a!=b "<<(a!=b)<<endl;
cout<<"The value a<=b "<<(a<=b)<<endl;
cout<<"The value a>=b "<<(a>=b)<<endl;
cout<<"The value a>b "<<(a>b)<<endl;
cout<<"The value a<b "<<(a<b)<<endl;

//logical operator

return 0;
}
 