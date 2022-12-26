#include <bits/stdc++.h>
using namespace std;

void bs (int arr , int s , int t )
{
    int l = 0;
    int u = s-1;
    int m = 0;
    int p;
    m = (l+u)/2 ;
    while ( l<m && u>m )
    {
        if ( arr[m] == t)
        {
            p = m;
            break;  
        }
        else if (arr[m+1]>arr[m-1] )
        {
            if(arr[m]> t)
            {
                l = m;
                m = (l+u)/2 ;
            }
            else 
            {
                u = m
            }
            
        }
        else 
        {

        }
    }

}
int pivot(int arr , int l , int u , int s)
{
    if ( s == 0)
    {
        return -1 ;
    }
    if ( size == 1 )
    {
        return 1 ;
    }
     
    int mid = (l+u)/2;
    if (mid < u && arr[mid] < arr[mid +1])
    
}
int main 
{   
    cout << "Enter the size of the array :\n";
    cin >> s;

    int arr[s];

    cout << "Enter the Elements of the array \n";
    for (int i = 0 , i< s ; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Target Element \n";
    int target;
    cin >> target
    // int size = sizeof(arr)/sizeof(arr[0]);

    bs(arr , s , target)
    
}