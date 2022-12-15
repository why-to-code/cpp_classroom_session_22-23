// A shop will give discount of 10% if the cost of purchased 
// quantity is more than 1000.
// one unit cost = 100.
// Take quantity as input.

#include<iostream>
using namespace std;

int main(){

    int unit_price =100;
    int qt , total_price , discounted_price , discounted_amount;

    cout<<"Enter quantity purchased \n"; //7
    cin>>qt;

    total_price = qt * unit_price;

    if(total_price >  1000)
    {
        discounted_amount = (total_price*0.1);
        discounted_price  = total_price - discounted_amount;
        cout<<"discounted price :"<<discounted_price<<"\n";
    }
    else
    {
        cout<<"Total price :"<<total_price<<"\n";
    }

    return 0;
}
