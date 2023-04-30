#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> nums, int target)
{
    int l = 0, r = nums.size() - 1, mid=0;
    vector<int> count;
    if (nums.size() == 0)
        return {-1, -1};
    if (nums.size() == 1)
        if (nums[0] == target)
            return {0, 0};

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            count.push_back(mid);
            if (nums[mid + 1] == target)
                count.push_back(mid + 1);
            if (nums[mid - 1] == target)
            {
                count.push_back(mid - 1);
                reverse(count.begin(), count.end());
            }
            if (count.size() == 2)
                return count;
        }
        if (target > nums[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (count.empty())
        return {-1, -1};
    else
        return {count[0], count[0]};
}

int main()
{
    int c;
    int n;
    cin >> c;
    vector<int> v;
    for (int i = 0; i < c; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int var;
            cin >> var;
            v.push_back(var);
        }
        cin >> n;
    }
    vector<int> v2 = searchRange(v, n);
    for (auto i : v2)
        cout << i;
    return 0;
}