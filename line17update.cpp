#include <bits/stdc++.h>
using namespace std;

int search(vector <int>& v )
{   
    int len = v.size();
    vector <int> left(len) , right(len);
    for(int i = 1 ; i<len; i++)  
        left[i]= max(v[i-1], left[i-1]);
    for (int i = len-2 ; i>=0 ; i--)
        right[i] = max(v[i+1], right[i+1]);
    int val = 0;
    for(int i = 0; i<len ; ++i)
    {
        int wlevel = min(left[i], right[i]);
        if(wlevel>=v[i])
            val += wlevel-v[i];
    }
    return val;
}
int main()
{
    int a[] ={0,1,0,2,1,0,1,3,2,1,2,1};
    vector <int> v;
    for(int i = 0 ; i< sizeof(a)/sizeof(a[0]) ; i++)
        v.push_back(a[i]);
    cout << search(v);
    return 0;
}