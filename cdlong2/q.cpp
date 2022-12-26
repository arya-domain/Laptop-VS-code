#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
string fn(int arr[], int n, int K)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) 
        {
            ll p = 1;
            for (int x = i; x <= j; x++)
                p *= arr[x];

            if (p % K == 0)
               return "YES";
        }
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
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cout << fn(arr, n, k) << endl;
    }
}
