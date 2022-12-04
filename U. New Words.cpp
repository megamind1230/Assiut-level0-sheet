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
int main(){
    https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
set_evni();
    //freq arr
    string input; cin>> input;
    string key = "egypt";
    int freq[256] = {0};
    for (int i = 0; i < input.size(); ++i)
    {
         // bug((char)tolower(input[i]));
        freq[(char)tolower(input[i])]++;

    }
int output = freq[key[0]];
// bug(output);
    for (int i = 1; i < key.size(); ++i)
    {
        output = min(output , freq[key[i]]);

    }
cout<< output;
}
