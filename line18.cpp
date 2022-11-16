#include<bits/stdc++.h>
using namespace std;

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
void permutation(int a[], int s)
{   
   do
   {
    display(a,s);
   }while (next_permutation(a, a+s));

}
int main ()
{

    int  a[] = {1,2,3};
    permutation(a,3);
    return 0;
}