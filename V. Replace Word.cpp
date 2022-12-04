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
int main()
{
set_evni();
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

    string input ; cin>> input;
    struct EG{
        string name = "EGYPT"; int length = 5;
    }eg;
    int st , en ; 
    for (int i = 0; input[i] && input.find(eg.name)!= string::npos; ++i)
    {

        st = input.find(eg.name) ; en = st + eg.length;
        input.replace(st, en-st , " ");
    }
    cout<< input ln ;

}
