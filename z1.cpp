#include <bits/stdc++.h>
using namespace std;

int search(vector<int> nums, int target)
{
    int l = 0, r = nums.size() - 1, m = (l + r) / 2;
    if (nums.size() == 1 and nums[0] == target)
        return 0;
    while (l < r)
    {
        if (nums[l] == target)
            return l;
        if (nums[r] == target)
            return r;
        if (nums[m] == target)
            return m;
        if (target > nums[m])
            l = m + 1;
        else
            r = m - 1;
        m = (l + r) / 2;
    }
    return -1;
}

int main()
{
    int c;
    int s;
    cin >> c;
    vector<int> num;
    for (int i = 0; i < c; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int var;
            cin >> var;
            num.push_back(var);
        }

        cin >> s;
    }
    cout << (search(num, s));
    return 0;
}