// student not allowed
// if att < 75%
// user input:
//     number of classes
//     number of class attendend
// calculate:
// percent_attended

#include <iostream>
using namespace std;

int main()
{

    int noc, noca;
    float poca;

    cout << "enter number of classes held and \n number of classes attended \n";
    cin >> noc >> noca;
    poca = (noca * 100) / noc;

    cout << "your percentage of attendence is :" << poca << "\n";
    if (poca > 75)
    {
        cout << "you are allowed to sit in the examination hall\n";
    }
    else
    {
        cout << "you are not allowed to sit in the examination hall\n";
    }

    return 0;
}
