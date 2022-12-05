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
    string input; cin>> input;
    string holder= input;
    string part1 = "";
    string part2 = "";
    string output = input;
    for (int i = 0; i < input.size() - 1; ++i)
    {
        part1.push_back( input[i] );
        // bug(input[i]);
        holder.erase(0 ,1 );
        // bug(holder);
        part2 = holder;
        sort(part1.begin(), part1.end()); sort(part2.begin(), part2.end());
        output = (output <= (part1 + part2) )? output : (part1 + part2) ;
        // bug(part1 , part2);
        // bug(output);
        // bug((output <= (part1 + part2) ));
        // cout ln;
    }
    cout<< output;
}
