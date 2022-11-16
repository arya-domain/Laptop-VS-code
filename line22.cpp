#include <bits/stdc++.h>
using namespace std;


int rt(vector<int>& h)
{
    int len = h.size();
    int value = 0;
    int ls = 0 ;
    int rs = 1;
    int maxe= h[0] ;
    for (int i = 0 ; i<len ; i++)
    {
        if (maxe > h[i+1])
        {
            value = value + (maxe = h)
        }
    }
    
   

    return value;
}
int main()
{
    int a[]= {0,1,0,2,1,0,1,3,2,1,2,1};
    int l = sizeof(a)/sizeof(a[0]);
    vector<int> h ;
    for (int i=0; i<l ; i++)
    {
        h.push_back(a[i]);
    }
    cout << rt(h);
    return 0;
}