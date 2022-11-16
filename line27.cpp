#include <bits/stdc++.h>
using namespace std;

bool rt(vector<int>& v)
{
    bool val;
    int l= 0; 
    int r = v.size()-1;
    int m = v.size()/2;
    int s = 0;
    vector <pair<int,int>> v1;

    for (int i = 0 ; i< v.size() ; i++)
        v1.push_back(make_pair(v[i],i));
    
    sort(v1.begin(), v1.end());

    for(int i = 0 ; i< v1.size() ; i++)   
    {
        s = v1[l]+v1[m]+ v1[r];
        if()

    }
    return val;
}
int main ()
{
    int a[]= {-1,0,1,2,-1,-4};
    vector <int> v;
    for(int i = 0 ; i<sizeof(a)/sizeof(a[0]); i++)
        v.push_back(a[i]);
    cout << rt(v );
}
 // for (int i = 0 ; i< v1.size() ; i++)
    //     cout << v1[i].second << " " ;