#include <bits/stdc++.h>
using namespace std;

int profit(vector<int>& v)
{
    int minv= v[0];
    int maxv = 0;
    int pos;
    if (v.size() == 1)
    return 0;
    for(int i=0; i< v.size(); i++)
    {
        minv = min(minv, v[i]);
        if(minv == v[i])
            pos = i;
    }
    for(int i=0; i< v.size(); i++)
    {   
        if(v[i]>v[i+1] and i<=pos )
            v[i] = 0;
        
    }

    maxv = *max_element(v.begin(), v.end());
    if ((maxv-minv) > 0)
    return (maxv-minv);
    else 
    return 0;
}
int main()
{
    int a[] = {8,7,1,5,3,6,4};
    vector <int> v;
    for (int i = 0 ; i< sizeof(a)/sizeof(a[0]); i++)
        v.push_back(a[i]);
    cout << profit(v);
    return 0;
}