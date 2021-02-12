
#include <iostream>
#include <map>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    map<string,int> mp;

    for(int i=0; i<str.size(); i++)
    {
        string curr = "";

        while( str[i] != ' ' && i != str.size())
        {
            curr.push_back(str[i]);
            i++;
        }
        mp[curr]++;
    }

    int count = 0;

    for(auto it : mp)
    {
        if(it.second == 1)
        count++;
    }

    cout<<count<<endl;

    return 0;
}
