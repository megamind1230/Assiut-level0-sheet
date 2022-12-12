#include <bits/stdc++.h>
using namespace std;
#define ln <<'\n';
#define ll long long
ll power(ll a, ll b)
{
    ll x = 1;
    while (b)
    {
        if (b & 1) x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}
ll eq(ll x, ll n)
{
    ll s = 0;
    for (int i = 2; i <= n; i+=2)
    {
        s= s+ power(x, i);
    }
    return s;
}
void setenvir()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main() {

setenvir();
  https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
    ll x, n;
    cin >> x >> n;
    cout<<eq(x, n) ln
}
