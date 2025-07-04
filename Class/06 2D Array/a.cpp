#include <bits/stdc++.h>
using namespace std;
void lowerCase(string s, vector<char> &str)
{
    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            str.push_back(s[i] - 'A' + 'a');

        else if (s[i] >= 'a' && s[i] <= 'z')
            str.push_back(s[i]);
    }
}
bool isPalindrome(string s)
{
    vector<char> str;

    lowerCase(s,str);

    int i = 0;
    int j = str.size() - 1;
    while (i <= j)
    {

        if (str[i] != str[j])
            return false;

        i++;
        j--;
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);
}