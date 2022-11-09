#include <bits/stdc++.h>
using namespace std;
#define sp <<' '<<
#define ln <<'\n';
int main()
{
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif

    string TheWholeLine; getline(cin, TheWholeLine);
    int starting_index_forClip =0, firstTime = 1 ;
    string clip;
    for (int i = 0; i < TheWholeLine.size(); )
    {
        if(TheWholeLine[i] ==' ')
        {
            clip = TheWholeLine.substr(0, i);
            TheWholeLine.erase(TheWholeLine.begin(), TheWholeLine.begin() + i + 1);
            i=0;
            reverse(clip.begin(), clip.end());
            cout<< clip << ' ' ;
        }
        i++;
    }
    reverse(TheWholeLine.begin(), TheWholeLine.end());
    cout<< TheWholeLine ln;
}
