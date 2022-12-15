// write a program to add an integer variable having value 5
// and a double variable having value 6.2

#include<iostream>
using namespace std;
int main(){
    cout<<"Size of int :" <<sizeof(int)<<endl;
    cout<<"Size of float :" <<sizeof(float)<<endl;
    cout<<"Size of double :" <<sizeof(double)<<endl;
    cout<<"Size of char :" <<sizeof(char)<<endl;
    cout<<"Size of string :" <<sizeof(string)<<endl;
    int a = 5;
    double d = 6.5 ,r;
    r = a + d;
    cout<< r;
    return 0;
}
