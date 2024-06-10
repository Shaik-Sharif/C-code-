#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 34;
    // cout<<"The value of a was:"<<a;
    // a = 45;
    // c = 4;
    // cout<<"The value of a is :"<<a;
    //Constants in c++   ---------->
    // const int a = 3;
    // cout<<"The value of a was:"<<a;
    // a = 45;// You will get an error because  is a constant
    // cout<<"The value of a is :"<<a;
    // int a =3,b=78, c=1233;
    // cout<<"The value of a is :"<<a<<endl;
    // cout<<"The value of b is :"<<b<<endl;
    // cout<<"The value of c  is :"<<c<<endl;

    //Maipulator in C++;
    // cout<<"The value of a is :"<<setw(4)<<a<<endl;
    // cout<<"The value of b is :"<<setw(4)<<b<<endl;
    // cout<<"The value of c  is :"<<setw(4)<<c<<endl;
    
    //Operators Precedence

    int a = 3, b= 4;
    // int c = (a*5)+b;
    // int c = (a*5)-45+87;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    //https://en.cppreference.com/w/cpp/language/operator_precedence
    //  is the website it will be usefull for operator precedence

    return 0;
     
}