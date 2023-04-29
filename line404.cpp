#include <bits/stdc++.h>
using namespace std;

int fn(int n)
{
    int ct = 0;
    int x = 0;
    vector<int> v;
    while ((1 << x) <= n)
    {
        x++;
    }
    x = x - 1;
    int near = pow(2, x);
    float sum = (near * x) / 2; //near - 1
    
    return sum;
}

int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        int a;
        cin >> a;
        cout << fn(a);
    }
    return 0;
}