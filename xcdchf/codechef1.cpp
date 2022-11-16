#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    int x[t];
    int y[t];
    for (int i =0 ; i<t ; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i =0 ; i<t ; i++)
    {
        x[i] = x[i] * 2;
        y[i] = y[i] * 5;
        if (x[i]== y[i])
        {
            cout << "Either\n";

        }
        else if (x[i] > y[i])
        {
            cout << "Chocolate\n";

        }
        else 
        {
            cout << "Candy\n";
        }
    }

    return 0;
}