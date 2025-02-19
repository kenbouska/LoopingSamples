#include <iostream>
using namespace std;
int main()
{
    cout << "The Multiplication Table" << endl;
    cout << "========================" << endl;
    for (int r=1; r<=12; r++)
    {
        cout << "Table of " << r << endl;
        cout << "===========" << endl;
        for (int c=1; c<=12; c++)
        {
            cout << r << " x " << c << " ==> " << (r * c) << endl;
        }
    }
}

//generate multiplication table from 1 to 12 with r and c values in a nested loop using the above framework 