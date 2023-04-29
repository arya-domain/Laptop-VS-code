#include <bits/stdc++.h>
using namespace std;

int countBitsFlip(int a, int b)
{
    int count;
    count = a^b;
    count = __builtin_popcount(count);
    return count;
}

int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << countBitsFlip(a, b);
    }
    return 0;
}