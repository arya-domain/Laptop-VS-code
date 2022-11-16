#include <bits/stdc++.h>
using namespace std;

int merge(int a[], int ls, int mid, int rs)
{
    // int mid_ = mid +1;
    int a1[rs+1];
    while (ls < mid and mid < rs)
    {
        if(a[ls]<a)

    }
}
int mergesort(int a[], int ls, int rs)
{
    int mid = (ls + rs) / 2;
    mergesort(a, ls, mid);
    mergesort(a, mid + 1, rs);
    merge(a, ls, mid, rs)
}
int main()
{
    int a[] = {};
    int n = ;
    mergesort(a, 0, n - 1);
    return 0;
}