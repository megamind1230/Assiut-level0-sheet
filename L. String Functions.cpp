/*
don't follow your subconscious mind always ... who told you that L is entered then R?
the conditions with the queries sort / substr /reverse 
don't tell you that L = st is entered before R= en
that's why you should put in mind the probability of 
R=en entered then right after L=st 
*/
#include <bits/stdc++.h>
using namespace std;
#define ln << endl;
#define sp <<' '<<
int main()
{
    https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
    #ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    clock_t z = clock();
     int st, en, pos , n, q;
    cin>> n>> q;
   string s; cin>>s;
   string query;
   while(q--)
   {
     cin>> query ;
//working with queries
    if(query=="pop_back")
    {
        s.pop_back();
    }
    else if(query=="back")
    {
        cout<< s[s.size() - 1] ln 
    }
    else if(query=="front")
    {
        cout<<s[0] ln 
    }
    else if(query=="substr" )
    {
        cin>> st >>en;
        if(st>en)
            swap(st,en);
        cout<< s.substr(st - 1  , en - st +1 ) ln
    }
    else if(query=="sort")
    {
        cin>> st>>en;
        if(st>en)
            swap(st,en);
        sort(s.begin() + st -1  , s.begin() + en );     
    }
   else if(query=="push_back")
    {   char topush; cin>>topush;
        s.push_back(topush);
    }                                
     else if(query=="reverse")
    {
        cin>> st >>en;
        if(st>en)
            swap(st,en);
        reverse(s.begin() + st -1  , s.begin() + en ); 
    }
     else
    {
        cin>>pos; 
        cout<<s[pos - 1 ] ln
    }
}
cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);//to tell the run time
}
