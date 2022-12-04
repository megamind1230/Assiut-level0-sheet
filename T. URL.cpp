#include <bits/stdc++.h>
using namespace std;
#define sp <<' '<<
#define ln <<'\n';
#define lln <<"\n\n";
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
struct Paras
{
    string name;
    int length;
};
int main()
{
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
set_evni();
    string input; cin>> input;
    string separator = ": ";
    Paras paras[5] = {

        "username", 9,
        "pwd", 4,
        "profile", 8,
        "role", 5,
        "key", 4
    };
    string values[5];
    int st, en; //used with the substr func
      for (int para_index = 0; para_index < 5; ++para_index)
      {
            st = (int)input.find(paras[para_index].name)+ paras[para_index].length; 
            for (int i = st; input[i]!='&' && input[i]!='\0'; ++i)//!=& -> is for what's before {key} , meanwhile !=\0 is for {key}
            {
                values[para_index].push_back(input[i]);
            }
            cout<< paras[para_index].name + separator + values[para_index] ln;
      }
}
