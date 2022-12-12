#include <bits/stdc++.h>
using namespace std;
#define sp <<' '<<
#define ln <<'\n';
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1) x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
void set_evni()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int Distinct_Numbers()
{
  
    return 0;
}
int main()
{
set_evni();
    // cout<<Distinct_Numbers();

https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
      int t, val; cin>>t;
    set<int> S;
    for (int i = 0; i < t; ++i)
    {
        cin>> val;
        S.insert(val);
    }
    int cntr = 0;
    for(auto it=S.begin(); it != S.end();it++)
        cntr++;
    cout<< cntr;
}
