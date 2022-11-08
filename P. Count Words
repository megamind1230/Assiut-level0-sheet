/* 
//WA on test 5
#include <bits/stdc++.h>
using namespace std;
#define sp <<' '<<
#define ln <<'\n';
int main()
{

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
    
    int words = 0;
    for (int i = 0; i < s.size() -1 ; ++i)
    {
        if(s[i]==' '&& s[i+1]!=' ')
            words++;
    }
    cout<<words+1;
}
*/
