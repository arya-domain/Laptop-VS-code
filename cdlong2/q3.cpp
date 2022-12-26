// Maximise XOR
#include <bits/stdc++.h>
using namespace std;

void cr(int one , int zero )
{
    for(int i=0; i<one ; i++)
    {
        cout << "1";
    }
    for(int i=0; i<zero; i++)
    {
        cout << "0";
    }
    cout << endl;
}
string fn(string x, string y, int n)
{

    int b11 = 0, b21 = 0;
    b11 = count(x.begin() , x.end(), '1');
    b21 = count(y.begin() , y.end(), '1');
    int b10 = n - b11;
    int b20 = n - b21;
    int one;
    int zero;
    if (b10 + b20 > n)
    {
        one = n - (b10 + b20 - n);
        zero = (b10 + b20 - n);
    }
    else
    {
        one = (b10 + b20);
        zero = n - (b10 + b20);
    }
    cr(one, zero);
    return "1";
}
int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        string x, y;
        cin >> x;
        cin >> y;
        int n = x.length();
        fn(x, y, n) ;
    }
}