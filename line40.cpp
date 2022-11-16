#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) 
    {   
        string temp;
        for(int i = 0 ; i< s.size() ; i++)
            if (isalnum(s[i])) 
                temp = temp + s[i];
        transform(temp.begin(), temp.end(),temp.begin(),  ::tolower);
        if(temp.size() <= 1)
            return true;
        int j = temp.length()-1;
        for (int i=0 ; i<=j ;i++)
        {
            if (temp[i]!=temp[j])
                return false;
            j--;
        }
        return true;
    }
int main ()
{
    string s = "0p";
    if (palindrome(s))
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}