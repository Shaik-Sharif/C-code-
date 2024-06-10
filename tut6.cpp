
// using namespace std;
// 1. System header files : It comes with the compiler
#include<iostream>
// 2. User defined header files : It is wriiten by the programmer
// #include"this.h";   ----> This will produce an error if this.h is no present in the current directory
using namespace std;
int main(){
    int  a=4, b = 5;
    // std::cout<<"This is the hello world program";
    std:: cout<<"Operator in c++"<<endl;
    std:: cout<<"Following are the type of operators in c++"<<endl;
    //Arithmetic operators
    cout<<"The value of a-b is"<<a-b<<endl;
    cout<<"The value of a+b is"<<a+b<<endl;
    cout<<"The value of a*b is"<<a*b<<endl;
    cout<<"The value of a/b is"<<a/b<<endl;
    cout<<"The value of a%b is"<<a%b<<endl;
    cout<<"The value of a++ is"<<a++<<endl;
    cout<<"The value of a-- is"<<a--<<endl;
    cout<<"The value of ++a is"<<++a<<endl;
    cout<<"The value of --a is"<<--a<<endl;

    //Assignment Opertors
    // int a =3; b=9;
    // char d='d';

    //Comparison Operators
    cout<<"The following are the types of operator in c++"<<endl;
    cout<<"The value of a ==b is "<<(a==b)<<endl;
    cout<<"The value of a !=b is "<<(a!=b)<<endl;
    cout<<"The value of a >b is "<<(a>b)<<endl;
    cout<<"The value of a <b is "<<(a<b)<<endl;
    cout<<"The value of a <=b is "<<(a<=b)<<endl;
    cout<<"The value of a >=b is "<<(a>=b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"The following are the logical operator in c++"<<endl;
    cout<<"The value of ((a==b) && (a<b)) logical operator is "    <<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a==b) ||(OR) (a<b)) logical operator is "    <<((a==b) || (a<b))<<endl;
    cout<<"The value of (!(a==b)) Not Operator  logical operator is "    <<(!(a==b) )<<endl;
    return 0;
}       