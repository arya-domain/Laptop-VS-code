#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int compare(int n, int k, int l)
{
    float value;
    int common = k + l - n;

    if (common = 0)
    {
        value = n *(n - 1)/2;
    }
    else if (common > 0)
    {
        value = (n - common) * (n - common - 1) / 2;
    }
    else
    {
        int k_com = nCr(n, k);
        int l_com = nCr(n, l);
        int s = k + l;
        value = 1 / s * (k_com + l_com);
    }
    cout<<  value;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    int n, k, l;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> k >> l;
        cout << compare(n, k, l) << endl;
    }
    return 0;
}