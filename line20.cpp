#include <bits/stdc++.h>
using namespace std;

vector<int> ret(vector<int>& v)
{
    vector<int> store((v.size()),0);
    vector<int> value;
    // int maxv = *max_element(v.begin() , v.end());
    for( int i = 0; i<v.size() ; i++)
    {
        store[v[i]] += 1;
    for( int i = 1; i<=v.size() ; i++)
        if(store[i]== 2)
            value.push_back(i);
    for( int i = 1; i<=v.size() ; i++)
    {
        if(store[i]== 0)
            value.push_back(i);
    }
    for( int i = 0; i<=value.size() ; i++)
        cout<< value[i] << " "; 
    // for( int i = 0; i<=v.size() ; i++)
    //     cout <<  store[i] << endl ;
    return value;
}
int main()
{
    vector <int> v;
    int a[] ={7,7,5,4,3,2,1};
    for (int i = 0 ; i< sizeof(a)/sizeof(a[0]) ; i++)
        v.push_back(a[i]);
    ret(v);
    return 0;
}