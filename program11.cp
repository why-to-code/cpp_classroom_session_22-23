// Take values of length and breadth of a rectangle 
// from user and check
// if it is square or not

#include<iostream>
using namespace std;

int main(){

    int length , breadth ;

    cout<<"Enter length and breadth \n";
    cin>>length>>breadth;

    if( length == breadth )
    {
        cout<<" It is a square \n";
    }
    else
    {
        cout<< " It is not square \n";
    }

    return 0;
}
