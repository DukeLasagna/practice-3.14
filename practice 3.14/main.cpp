#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num; //Account number
    double bbl; //Beginning balance
    double tch; //Total charges
    double tcr; // Total credits
    double cdl; //Credit limit
    double nbl; // New balance
    cout << "Enter account number (or -1 to quit): " << endl;
    cin >> num;

    if( num == -1)
    {
        return 0;
    }

    while ( num != -1)
        {
    cout << "Enter beginning balance: " << endl;
    cin >> bbl;
    cout<< "Enter total charges: " << endl;
    cin >> tch;
    cout<< "Enter total credits: " << endl;
    cin >> tcr;
    cout << "Enter credit limit; " << endl;
    cin >> cdl;

    nbl = bbl + tch - tcr;

    cout << "New balance is: " << setprecision (2) << fixed << nbl << endl;
    cout << "Account: " << setprecision (2) << fixed << num << endl;
    cout << "Credit limit: " << setprecision (2) << fixed << cdl << endl;
    cout << "Balance: " << setprecision (2) << fixed << nbl << endl;

    if ( nbl > cdl )
    {
        cout << " Credit Limit Exceeded!! \n" << endl;
        cout << " " << endl;
    }
    cout << " " << endl;

    cout << "Enter account number (or -1 to quit): " << endl;
    cin >> num;

      if( num == -1)
    {
        return 0;
    }
         }
    return 0;
}
