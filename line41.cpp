#include <bits/stdc++.h>
using namespace std;


bool isAnagram(string s1, string s2) 
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2)
        return true;
    else 
        return false;
}
int main()
{
    string s1 ="anagram";
    string s2 = "nagram";
    if (isAnagram(s1,s2) == true)
        cout<< "true\n";
    else 
        cout << "false\n";
    return 0;
}