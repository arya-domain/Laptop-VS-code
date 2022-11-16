#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s = "abcabcbbd";
    vector <int> v(26,0);
    for (auto i:s)
    {
        v[i] = v[i] + 1 ;
        cout << i << " " << v[i] << endl;
    }
    return 0 ;
}