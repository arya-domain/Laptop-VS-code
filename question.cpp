#include <bits/stdc++.h>
using namespace std;
 

bool helper(int* arr, int n, int start, int lsum, int rsum)
{

    if (start == n)
        return lsum == rsum;

    if (arr[start] % 5 == 0)
        lsum += arr[start];

    else if (arr[start] % 3 == 0)
        rsum += arr[start];

    else
        return helper(arr, n, start + 1, lsum + arr[start], rsum)
           || helper(arr, n, start + 1, lsum, rsum + arr[start]);

    return helper(arr, n, start + 1, lsum, rsum);
}
 
bool splitArray(int* arr, int n)
{
    return helper(arr, n, 0, 0, 0);
}
 

int main()
{
    int arr[] = { 1, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    if (splitArray(arr, n))
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}