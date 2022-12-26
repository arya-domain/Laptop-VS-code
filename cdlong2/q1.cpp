// Good Investment or Not
#include <bits/stdc++.h>
using namespace std;

string fn(int x, int y)
{
    y = y * 2;
    if (y <= x)
        return "YES";
    else
        return "NO";
}
int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        int x , y;
        cin >>x >> y;
        cout << fn(x,y) << endl;
    }
}