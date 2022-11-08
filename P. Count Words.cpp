/* 
//WA on test 5
#include <bits/stdc++.h>
using namespace std;
#define sp <<' '<<
#define ln <<'\n';
int main()
{
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s; getline(cin, s);
    string wantedToBeDeleted = "!.,?";
    
    for (int i = 0; i < 5; ++i)
    {
        replace( s.begin(), s.end(), wantedToBeDeleted[i], '0'); // replace all 'x' to 'y'
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
    }
    //-----------------
    
    int words = 0;
    for (int i = 0; i < s.size() -1 ; ++i)
    {
        if(s[i]==' '&& s[i+1]!=' ')
            words++;
    }
    cout<<words+1;
}
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt",  "r",  stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string TheWholeLine; getline(cin, TheWholeLine);
    string wantedToBeDeleted = "!.,?";

    for(int i = 0; i < 5; ++i){
        replace( TheWholeLine.begin(), TheWholeLine.end(), wantedToBeDeleted[i], ' '); // replace unwanted with a {space}
        //TheWholeLine.erase(remove(TheWholeLine.begin(), TheWholeLine.end(), '0'), TheWholeLine.end()); // no erasing necessary
    }
    int new_size = TheWholeLine.size() + 1;//increase the size by 1... to displace the \0 for a one more char to the right
    TheWholeLine.resize(new_size);
    TheWholeLine[new_size-1] = ' '; // and put a {space} at the end { this means that the last char can be changed to a space with no errors }

    int words = 0;
    for(int i = 0; i < TheWholeLine.size() ; ++i) //(new_size-1) =  TheWholeLine.size()
    {
        if(TheWholeLine[i] != ' ' && TheWholeLine[i+1] == ' ')// {like this} >> lik{e}{ }this // 
        {
            words++;
        }
    }
    cout<<words;
}
