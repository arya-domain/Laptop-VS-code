#include <bits/stdc++.h>
using namespace std;

int fn(int a , int b)
{
    b = pow(2.0 , b);
    b = b/2;
    for (int i =2  ; i <= a ; i++)
    {
        b = b/2;
    }
    return b;
}
int main ()
{
    int c;
    cin >> c;
    for (int i= 0; i<c ; i++)
    {
        int a , b;
        cin  >> a >> b;
        cout << fn(a,b) << endl ;
    }
    return 0;
}