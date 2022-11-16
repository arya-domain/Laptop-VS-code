#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double x)
{
    
    if (x >= 0) {
 
        long long sr = sqrt(x);
        
        return (sr * sr == x);
    }

    return false;
}
void display (int a[], int s)
{
    int i = 0;
    while (true)
    {
        cout << a[i] << " ";
        i++;
        s--;
        if (s<1)
        {
            cout << endl;
            break;
        }

        
    }
}
bool check_display (int a[], int s)
{
    int m[s-1];
    for (int i= 0 ; i<s ; i++)
    {   
        m[i] = a[i] * a[i+1];
        if (isPerfectSquare(m[i]))
        {
            return false;
        }
    }
    return true;
    

}
void permutation(int a[], int s)
{   
   do
   {
    if (check_display(a,s)){
        display(a,s);
    }
   }while (next_permutation(a, a+s));

}
void array_crt(int p )
{
    int a[p];
    for (int i= 0 ; i<p ; i++)
    {   
        a[i]= i+1;
    }
    permutation(a,p);
}
int main ()
{
    int t ; 
    cin >>  t;
    int p[t];
    for (int i = 0 ; i<t ; i++)
    {
        cin >> p[i];
    }
    for (int i = 0 ; i<t ; i++)
    {
        array_crt(p[i]);
    }
    
    return 0;
}