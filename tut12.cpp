#include<iostream>
using namespace std;
int main(){
     //What is a pointer? -----> data type which holds the address of other data types

     int a =3;
     int* b = &a;
     b=&a;
     //&   --->(Address of ) Operator
     // cout<<"The unknown value of b is"<<b<<endl;
     cout<<"The address of a is "<<&a<<endl;
     cout<<"The address of a is "<<b<<endl;

     // *  ------> (Value at ) Deference operator
     cout<<"The value at address b is "<<*b<<endl;
     int** c = &b;
     cout<<"The address of b is "<<&b<<endl;
     cout<<"The address of b is "<<c<<endl;
     cout<<"The value at addres c is "<<*c<<endl;
     cout<<"The value at addres value_at(value_at(c)) is "<<**c<<endl;
     return 0;
}