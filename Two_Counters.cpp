#include <bits/stdc++.h>
using namespace std;

int fn(int n, int t[], int E)
{
    int a = 0, b = 0, score;
    int j = 0;
    int type;
    for (int i = 0; i < n; i++)
    {
        type = t[j];
        j++;
        if (type == 1)
        {
            if (b > a)
                a += 1;
        }
        else
        {
            if (b < a)
                b += 1;
        }

        if (type == 1)
        {
            if (a > b)
                score = score + 1;
            else
            {
                a = 0;
                b = 0;
            }
        }
        else
        {
            if (a < b)
                score = score + 1;
            else
            {
                a = 0;
                b = 0;
            }
        }
    }
    return score;
}
int main()
{
    int n, e;
    cin >> n >> e;
    int t[] = {1, 2, 1};
    cout << fn(n,t,e)  << endl;

}