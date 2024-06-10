#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter the vlaue of num1: \n ";
    // << This is called insertion operator --> Print the numbers in the screen
    cin>>num1;
    //This is nothing but scanner 
    // >> This called Extraction Operator take the input which is given to you 
    cout<<"Enter the value of num2 : \n";
    cin>>num2;

    cout<<"The sum is "<< num1+num2;
    return 0;
}