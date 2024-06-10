#include<iostream>

using namespace std;
int glo = 6;
// This is global variabe
void sum(){
    int a;
    cout<< glo;
}


int main(){
    int glo = 9;
    //Precedence first goes to the local variable
    glo = 78;
    // int a = 4;
    // int b = 5;
    int a = 23, b = 32;
    //We can also write in this way
    float pi = 3.15;
    char c = 's';
    bool shs= true  ;
    sum();
    // string sh = "sharif ";
    cout<<shs;
    // cout<<"This is tutorial 4. Here the value of a is "<<a     <<".The value of b is "<<b;
    // cout<<"The value of pi is   :"<<pi;
    // cout<<"The char is "<<c;
    // cout<<"The string of the given is "<<sh;
    cout<<glo;
    return 0;
}