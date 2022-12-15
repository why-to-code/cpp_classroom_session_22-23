// A company decided to give bonus of 5% to employee if his/her year of service
// is more than 5 years.
// Ask user for their salary and year of service.

#include<iostream>
using namespace std;

int main(){

    int bonus_percent = 5 , yos;
    float salary , bonus_amt , total_salary;
    cout<<"Enter your salary and year of service \n";
    cin>>salary>>yos;
    if(yos > 5)
    {
        bonus_amt = salary * 0.05;
        total_salary = salary + bonus_amt;
        cout<<"Total Salary :"<<total_salary<<"\n";
        cout<<"Bonus mil raha hai .\n";
    }
    else
    {
        cout<<"Kuch bonus nahi milega \n";
        cout<<"Jo salary hai vohi milega salary : "<<salary<<"\n";
    }
    return 0;
}
