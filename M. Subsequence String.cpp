#include <bits/stdc++.h>
using namespace std;
#define sp <<' '<<
#define ln <<'\n';
int main()
{
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    string str; cin>> str;
    string hello = "hello";
    int flag = 1;
    int index = 0;
    int position[5]= {-1,-1,-1,-1,-1 };
    for (int i = 0; i < str.size(); )
    {
        if(str[i]==hello[index] && index < 5)
        {
            position[index]= i; 
            str[i] = '#';
            if(index > 0)
            {

                if( !( position[index] > position[index - 1] ) )
                {
                    flag = 0;                    
                    break;
                }
                index++;
            }
            else
            {
                index++;
            }

            i++;
        }
        else if(index >=5)
        {
            break;
        }
        else
        {
            i++;
        }
    }

    for (int i = 1; i < 5; ++i)
    {
        if(!(position[i]> position[i - 1]))
            flag = 0;
    }
    cout<<(!flag? "NO": "YES");

}
/*
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    string Hello="hello";

    string Entered;
    cin>> Entered;

    int cntrForEntered=0,cntrForHello=0;

    int x=0;

    int y=Hello.size(); // 5
    int t=Entered.size(); //size of the entered string = 5 in this case

    while(true)
    {
        if(Entered[cntrForEntered] == Hello[cntrForHello])
        {
            cntrForEntered++;
            cntrForHello++;
        }
        else
        {
            cntrForEntered++;
        }

        //-----------------------------------

        if(cntrForHello==y)
        {
            x=1;
            break;
        }
        if(cntrForEntered==t)
            break;
    }
    if(x)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

*/
