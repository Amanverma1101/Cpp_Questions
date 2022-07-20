#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
bool wordPattern(string pattern, string s)
{
    cout<<"hello\n";
    int pc = pattern.size(), swc = 1, j = 0;
    string words[pc];
    unordered_map<char, string> m;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            swc++;
            j++;
            cout<<"swc : "<<swc<<" & pc : "<<pc<<endl;
        }
        else
        {
            words[j] += s[i];
        }
    }
cout<<"swc : "<<swc<<"pc : "<<pc<<endl;
    if (pc != swc)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < pattern.length(); i++)
        {
            auto it = m.find(pattern[i]);
            if (it == m.end())
            {
                m[pattern[i]] = words[i];
            }
            else
            {
                if ((*it).second == words[i])
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
    }

    unordered_map<string, int> d;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        d[it->second]++;
        if (d[it->second] > 1)
        {
            return false;
        }
    }

    return true;
}
int main()
{

    if (wordPattern("aba","cat cat cat dog"))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
