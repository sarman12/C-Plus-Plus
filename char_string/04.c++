#include <bits/stdc++.h>
using namespace std;
string replace(string &str)
{
    string temp = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('$');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main()
{
    string str;
    cin >> str;
    string i = replace(str);
    cout << i;
}