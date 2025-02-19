#include <iostream>
using namespace std;
int main()
{
    cout << "The Multiplication Table" << endl;
    cout << "========================" << endl;
    int r = 1;
    int c = 1;
    while(r<=12)
    {
        cout << "Table of " << r << endl;
        cout << "===========" << endl;
        while(c<=12)
        {
            cout << r << " x " << c << " ==> " << (r * c) << endl;
            c++;
        }
        c = 1;
        r++;
    }
}

//generate multiplication table from 1 to 12 with r and c values in a nested loop using the above framework 