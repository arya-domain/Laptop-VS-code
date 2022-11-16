#include <bits/stdc++.h>
using namespace std;

bool rt(vector<int>& v , int x)
{
    bool val;
    int l= (v.size())/2 -1; 
    int r = l+1;
    sort(v.begin(), v.end());
    // for (auto i :v)
    //     cout << i << " " ;
    for(int i = 0 ; i< v.size() ; i++)   
    {
        int s = v[l]+v[r];
        if (s == x)
        {
            val = true;
            break;
        }
        else if (s >x)
            l--;
        else
            r++;
    }
    return val;
}
int main ()
{
    int a[]= {11, 15, 6, 8, 9, 10};
    vector <int> v;
    int x = 16;
    for(int i = 0 ; i<sizeof(a)/sizeof(a[0]); i++)
        v.push_back(a[i]);
    cout << rt(v , x);
}