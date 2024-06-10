#include<iostream>

using namespace std;

int main(){
    // cout<<"This is tutorial 9";
    int age;
    cout<<"Tell me your age";
    cin>>age;
    //Selection control structure: If-Else -If-Else ladder;
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my pary";
    // }else if(age == 18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }else{
    //     cout<<"you can come to the pary"<<endl;
    // }

    //Selection Control structure: Switch Case Statement
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl; 
        break;

    case 2:
    cout<<"you are 18"<<endl;
    break;

    default:
    cout<<"No Special cases"<<endl;
        break;
    }
    return 0;
}