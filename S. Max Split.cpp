#include <bits/stdc++.h>
#include <string>
using namespace std;
#define sp <<' '<<
#define ln <<'\n';
void set_evni()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
set_evni();
    string s; cin>>s;
    string ouput[1000];
    int L , R ; R = L = 0;
    int cntr = 0;
    int row = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='R') 
        {
            R++;
            ouput[row].push_back('R');
        }
        else
        {
         L++;
         ouput[row].push_back('L');
        }
        if(L == R && R + L != 0) // when they balance ... but not when R = L = 0 that's the begining , we don't need that case
        {
            cntr++;//balance alarm
            L = R = 0; // be ready to count another balance bruh
            row++;
        }

    }

    cout<< cntr ln
    for (int j = 0; j < row; ++j)
    {
        cout<< ouput[j] ln
    }

}
/*
الغريب إن دول كمان بيعتبروا مجموعات برضو زي ما قلت
----------------------------------------------------------------------------------
RRLRLL

1
RRLRLL
----------------------------------------------------------------------------------
RRRLLLRLRRRLLL

3
RRRLLL
RL
RRRLLL

----------------------------------------------------------------------------------
كنت بحسب لازم يكون كل مجموعة بتدأ بحرف L
*/
