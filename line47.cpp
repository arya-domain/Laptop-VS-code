#include <bits/stdc++.h>
using namespace std;

int segment(string s)
{
    int l = s.length();
    int len = 0;
    for (int i = 0 ; i<l ; i++)
    {
        string first = s.substr(0,i);
        string second = s.substr((l-i), i);
        if (first == second)
        {
            len = first.length();
            
        }
    }
    if (len == 0)
    {
        return l;
    }
    else
    {
        return len;
    }
    
}

string lgst_str(string s , int l)
{
    string temp; 
    int a=0;
    //If s is a the largest string
    for (int i = 0 ; i<l ; i++)
    {
        if (s[i+1]== s[i])
        {   
            a++;
        }
    }
    if (a == 0)
    {
        return s;
    }
    for (int i = 0 ; i<l ; i++)
    {
        if (s[i+1] != s[i])
        { 
            temp = temp + s[i];
            
        }
        else 
        {
            i++;
        }

    }

    return temp;

}

int main ()
{
    string s ;
    cin >>  s ;
    int l = s.length();
    string rtn = lgst_str(s, l);
    int length = segment(rtn);
    cout << length;
    return 0;
}