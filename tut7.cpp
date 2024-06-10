#include<iostream>

using namespace std;
int c = 23;
int main(){
    //************Build in Data Types *********** 
    // int a, b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c= a+b;
    // cout<<"The is sum is"<<c<<endl;
    // cout<<"The gloabl c is "<<::c;
    //:: scope requolation operator

    //************Float, double and long doubleLiterals in Data Types *********** 
    // float d = 34.4f;
    // long double e = 34.4l;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

    //************Reference Variables *********** 
    // Rohan  -->Monty  ---> Rohu   ---> Dangerous Coder
    // float x = 455;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //************TypeCasting *********** 
    //Changing the data type -->One data type to another data type is called typecasting
    int a = 45;
    float b = 45.56;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int (b);
    cout<<"The Expression is "<<a+b<<endl;
    cout<<"The Expression is "<<a+int(b)<<endl;
    cout<<"The Expression is "<<a+(int)b<<endl;
    return 0;
}