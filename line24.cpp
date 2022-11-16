#include <bits/stdc++.h>
using namespace std;

int rt(vector<int>& v)
{
    int val=1;
    int maxi = INT_MIN;
    for (int i = 0 ; i<v.size() ; i++)
    {
        val = val * v[i];
        // cout << val << " " ;
        maxi = max(maxi , val);
        // cout << maxi << endl;
        if (val <0)
            val= 1;
        
    }
    return maxi ;
}
int main()
{
    int a[]= {-2,0,-1};
    vector <int> v;
    for(int i = 0 ; i<sizeof(a)/sizeof(a[0]); i++)
        v.push_back(a[i]);
    cout << rt(v);
    return 0;
}