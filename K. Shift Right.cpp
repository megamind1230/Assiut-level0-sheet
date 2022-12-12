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
void left_shifting(int arr[],int n,int x) // <--
{
    //easier
   int newInd;
    for (int i = 0; i < n; ++i)
    {
        newInd = (i + x) % n;
        cout<<arr[newInd] <<' ';
    }
}
void right_shifting(int arr[],int n,int x) // -->
{
   int newInd;
   int NewIndx[n];// for mapping -> new index : the corresponding i

    for (int i = 0; i < n; ++i)
    {
        newInd = (i + x) % n;
        NewIndx[newInd] = i;
    }
    for (int k = 0; k < n; ++k)
    {
        cout<<arr[NewIndx[k]] <<' ';
    }
}
int main()
{
set_evni();
https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
    int n, x; cin>> n>>x;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>> arr[i];
    }
    right_shifting(arr,n,x);
    // left_shifting(arr,n,x);
}
