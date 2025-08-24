#include <bits/stdc++.h>
using namespace std;
bool palindorme(string &s, int i, int j)
{
    if (s.length() == 1)
    {
        return true;
    }
    else
    {
        if (s[i] == s[j])
        {
            return true;
            i++;
            j--;
            palindorme(s, i, j);
        }
    }
}
int main()
{
    string s = "hannah";
    int i = 0;
    int j = s.length() - 1;
    bool ans = palindorme(s, i, j);
    if (ans)
    {
        cout << "it's a palindrome" << endl;
    }
    else
    {
        cout << "it's not a palindrome" << endl;
    }
}