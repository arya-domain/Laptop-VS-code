#include <bits/stdc++.h>
using namespace std;

int ret(int a[] , int l, int k)
{

    sort(a, a+l);
    vector<int> v;
    for (int i=l-1 ; i>=0 ; i--)
        if(a[i]!=a[i-1])
            v.push_back(a[i]);
    
    int value = v[k-1];
    return value;
}
int main()
{
    int a[] = {3,2,3,1,2,4,5,5,6};
    int k = 4;
    int l = sizeof(a)/sizeof(a[0]);

    cout << ret(a , l, k);
    return 0;
}