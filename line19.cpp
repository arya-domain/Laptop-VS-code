#include <bits/stdc++.h>
using namespace std;

int max_diff(int a[], int s)
{
    int d= 0;
    int curr_min = INT_MAX;
    int pos_min;
    for (int i = 0; i<s ; i++)
    {
        if (a[i]< curr_min)
        {
            curr_min = a[i];
            pos_min = i; 
        }

    }
    //cout << pos_min << endl;
    int curr_max = INT_MIN;
    int pos_max;
    if(pos_min == (s-1))
    {
        return 0;
    }
    else
    {
        for (int i = pos_min; i<s ; i++)
        {
            if (a[i]> curr_max)
            {
                curr_max = a[i];
                pos_max = i;
            }

        }
    }

    d = a[pos_max] - a[pos_min];
    return d;
}
int main ()
{
    int a[]= {7,6,4,3,1};
    int s = sizeof(a)/sizeof(a[0]);
    cout << max_diff(a,s);
    return 0;
}