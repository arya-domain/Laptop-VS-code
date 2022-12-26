#include <bits/stdc++.h>
using namespace std;
#define M 64

int set_b(int n)
{
    bitset<4> b1(n);
    cout << b1.flip() << endl;
    return b1.count();
}
int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        int n;
        cin >> n;
        cout << set_b(n) << endl;
    }
}