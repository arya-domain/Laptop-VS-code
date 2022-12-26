#include <bits/stdc++.h>
using namespace std;
#define ll long long

string fn(ll arr[], int k, int n)
{
    if (k == 0)
        return "NO";
    ll mul = 1;
    for (int i = 0; i < n; i++)
    {   
        if(arr[i]!=0)
        {    mul *= arr[i];
            if (mul % k == 0)
                return "YES";
        }
        else 
            return "YES";
    }
    return "NO";
}
int main()
{
    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int n, k;
        cin >> n >> k;
        ll arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cout << fn(arr, k, n) << endl;
    }
}