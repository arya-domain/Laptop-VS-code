#include <bits/stdc++.h>
using namespace std;

vector <int> rt(vector <int> a)
{
    vector<int> pre(a), suf(a), ans(size(a));
    partial_sum(begin(pre), end(pre), begin(pre), multiplies<int>());       
    partial_sum(rbegin(suf), rend(suf), rbegin(suf), multiplies<int>()); 
    for(int i = 0; i < size(a); i++)  
        ans[i] = (i ? pre[i-1] : 1) * (i+1 < size(a) ? suf[i+1] : 1);   
    // for(auto i: ans)
    //     cout << i << " ";    
    return ans;
}
int main()
{
    int a[]= {1,2,3,4};
    vector <int> v;
    for(int i = 0 ; i<sizeof(a)/sizeof(a[0]); i++)
        v.push_back(a[i]);
    rt(v);
    return 0;
}   