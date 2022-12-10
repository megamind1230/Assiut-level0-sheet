#include <iostream>
#include <cmath>
using namespace std;
void prime(int n) {
    int flag = 0;
    if(n< 2) {goto label;}
    else if (n == 2) { flag = 1; goto label; }
    else {
        if (n % 2 == 0)
        {
            goto label;
        }
        else {
            for (int i = 3; i <= (int)floor(sqrt(n)); i += 2)
            {
                if (n % i == 0)
                {
                    goto label;
                }
            }
        }
    }
    flag = 1;
    label:
    if(flag)
    {
        cout << "YES\n"; return;
    }
    else
    {
        cout << "NO\n"; return;
    }
}
void setenvir()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main() {
    https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
    setenvir();
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        prime(n);

    }
}
