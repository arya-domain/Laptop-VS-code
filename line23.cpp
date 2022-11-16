#include <bits/stdc++.h>
using namespace std;

vector <int> rt(vector <int> a)
{
    vector <int> val;
    int mul = 1;
    int mul2 = 0;
    int count = 0;
    for( auto i : a)
        if(i!=0)
            mul = mul * i;
        else 
        {
            count++;
        }
        
    for (int i = 0 ; i<a.size() ; i++)
    {   
        if (count == 0)
            val.push_back(mul/a[i]);
        else
        {
            if (a[i]== 0)
                val.push_back(mul);
            else 
                val.push_back(0);
        }
    }
    for(auto i: val)
        cout << i << " ";

    return val;
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