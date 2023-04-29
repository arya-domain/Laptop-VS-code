#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int c;
    cin >> c;
    ll fact = 1;
    int m = 47;
    for (int i = 2; i <= c; i++)
    {
        fact = (fact * i) % m;
        cout << fact << endl;
    }
    cout << fact;
    return 0;
}