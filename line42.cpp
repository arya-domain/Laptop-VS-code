#include <bits/stdc++.h>
using namespace std;

bool valid(string s )
{
    stack <int> stk;

    for (auto i:s)
    {
        if (i == '(' or i== '{' or i == '[') 
            stk.push(i);
        else 
        {
            if (stk.empty() or 
            ((stk.top() == '(') and i!=')') or 
            ((stk.top() == '{') and i!='}') or
            ((stk.top() == '[') and i!=']'))
                return false;
            stk.pop();
        }
    }
    return stk.empty();
}
int main ()
{
    string s;
    cin >> s;
    if(valid(s))
        cout << "true";
    else 
        cout << "false";
    return 0 ;
}