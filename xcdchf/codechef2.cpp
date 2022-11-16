#include <bits/stdc++.h>
using namespace std;
 // x shelves ; y books ; z cardboard max books ; 

int main ()
{
    int t;
    cin >> t;

    int x[t] ; //5
    int y[t] ; //9
    int z[t] ; //7
    int b[t];
    for (int k = 0 ; k<t ; k++)
    {
        cin >> x[k] >> y[k] >> z[k];
        b[k] =1;
    }
    int i = 0;
    while (true)
    {
        float d = y[i] / double (z[i]) ;
        d =  ceil(d);
        if (d > 1)
        {
                b[i] =  x[i]*d;
        }
        else 
        {
            b[i] =  x[i];
        }
        if ( i == (t-1))
        {
            break;
        }
        i++;
    }
    for (int j = 0; j<t ; j++)
    {
            cout << b[j] << endl ;
    }
    return 0;
}