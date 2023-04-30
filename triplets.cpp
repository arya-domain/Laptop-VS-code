#include <bits/stdc++.h>
using namespace std;

void trip_check(vector<int> ord, int n)
{
    int l, r, mid, count = 0;
    for (int i = 0; i < n; i++)
    {
        l = 0;
        r = n - 1;
        if (l + i < r)
            mid = l + i;
        else
            break;
        for (int j = 0; j < n; j++)
        {
            if ((ord[l] + ord[r] + ord[mid]) == 0)
                count++;
            if ((ord[l] + ord[r] + ord[mid]) > 0 and mid < r and l < mid)
                r--;
            if ((ord[l] + ord[r] + ord[mid]) < 0 and mid < r and l < mid)
                l++;
        }
    }
    cout << count << endl;
}
int main()
{
    int c, n;
    cin >> c;
    vector<int> ord;
    for (int i = 0; i < c; i++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            ord.push_back(inp);
        }
    }
    sort(ord.begin(), ord.end());
    trip_check(ord, n);
    return 0;
}