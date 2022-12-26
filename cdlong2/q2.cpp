// Reach fast
#include <bits/stdc++.h>
using namespace std;
int fn(int x, int y, int k)
{
    int steps;
    int diff = (y > x) ? y - x : x - y;
    if (diff % k == 0)
        steps = diff / k;
    else
        steps = (diff/k) + 1;
    return steps;
}
int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        int x, y, k;
        cin >> x >> y >> k;
        cout << fn(x, y, k) << endl;
    }
}