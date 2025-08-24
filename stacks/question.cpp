#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello";

    string ans = "";
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            reverse(temp.begin(), temp.end());
            ans += temp + '.';
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    cout << ans;
}