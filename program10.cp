#include<iostream>
using namespace std;

int main(){

    int age;

    cout<<"Enter your age \n";
    cin>>age;

    if( age >= 18 )
    {
        cout<<"You are allowed to vote \n";
    }
    else
    {
        cout<<"You are not allowed to vote \n";
    }


    return 0;
}
