
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> nums, int target)
{
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]] = i;
    }
    if((m[target] == 0 and target == nums[0] ) or m[target]>0)
        return m[target];
    else 
        return -1;
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
        cout << search(v,n);
    }
    return 0;
}