#include<iostream>
using namespace std;
int c= 45;
int main(){

// **************Build in data types************

// int a,b,c ;
// cout<<"enter the value of a "<<endl;
// cin>>a;
// cout<<"enter the value of b "<<endl;
// cin>>b;
// c = a+b;
// cout<<"the sum is "<<c<<endl;
// cout << "The sum is "<<::c;
// // output will be 45;
// :: is scope resolution operator.
// To access a global variable when there is a local variable with same name. 

//**************Literals**************

float d = 34.4;
long double e = 34.4;
// by default 34.4 ko compiler double hi consider karta hai lakin agar 34.4f ya 34.4F likhne se specify hoga hum number ko as a float bhejna chahte hai 
 
//  cout<<"The size of 34.4 is"<<sizeof(34.4)<<endl;
//  cout<<"The size of 34.4f is"<<sizeof(34.4f)<<endl;
//  cout<<"The size of 34.4F is"<<sizeof(34.4F)<<endl;
//  cout<<"The size of 34.4l is"<<sizeof(34.4l)<<endl;
//  cout<<"The size of 34.4L is"<<sizeof(34.4L)<<endl;

//  size of float = 4; double = 8 long double = 12


//******************Refernce variable**********************
float x = 489;
float & y = x;
// here y is refernce variable
cout<<x<<endl;
cout<<y<<endl;

//******************Typrcasting********************
int a =45;
float b = 45.23;
cout<<"The value of a is "<<float(a)<<endl;
cout<<"The value of a is "<<(float)a<<endl;
// above two lines are same 
cout<<"The value of b is "<<int(a)<<endl;

int c = int(b);


}