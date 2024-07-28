#include<iostream>
using namespace std;

int main() {
    // pointer is a data type which holds address of other data types
    int a = 3; 
    int* b ;
    b = &a;

    cout<<"address of a is : "<<&a<<endl;
    cout<<"address of a is : "<<b<<endl;

    // * --> (value at) is dereference operator
        cout<<"address of a is : "<<*b<<endl;

        // pointer to pointer 

        int **c = &b; 
        cout<<"The address of b is "<<&b<<endl;
        cout<<"The address of b is "<<c<<endl;
        cout<<"The value at address of c is "<<*c<<endl;
        cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}