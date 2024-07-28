#include<iostream>
using namespace std;

int main() {
    int marks[] = {23,335,6,6,4};
    int*p = marks;
    // int *p = &marks is wrong 
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}