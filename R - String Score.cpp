//TLE on test 11
#include <bits/stdc++.h>
using namespace std;
#define sp <<' '<<
#define ln <<'\n';
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
// cout<<"klsdfjsdlf";
    int n, points = 0; cin>>n;
    string entered; cin >> entered;
    for (int i = 0; i < entered.size() - 1 ; ++i)
    {
        switch(entered[i])
        {
        case 'V':
            {
                points +=5; break;
            }
        case 'W':
            {
                points +=2; break;
            }
        case 'X':
            {
                entered.erase( entered.begin()+(1+i), entered.begin()+(2+i) )  ;
                break;
            }
        case 'Y':
            {
                
                    char temp = entered[i+1];
                    for (int j =  i + 1; j <= entered.size() - 2; ++j)
                    {
                        entered[j] = entered[j+1] ;
                    }
                    entered[entered.size()-1] = temp;
                    break;
            }
        case 'Z':
            {
//this commented part is wrong because he said just remove when the following is V / W not with any
//                 if(entered[i+i]=='V')
//                     {points/=5;}
//                 else if(entered[i+1] =='W')
//                     {points /=2;}
//                 entered.erase( entered.begin()+(1+i), entered.begin()+(2+i) )  ;break;
//this correction .. but the code still gives TLE on test 11
                if(entered[i+1]=='V')
                    {
                    points/=5;
                    entered.erase( entered.begin()+(1+i), entered.begin()+(2+i) )  ;break;
                    }
                else if(entered[i+1] =='W')
                    {
                    points /=2;
                    entered.erase( entered.begin()+(1+i), entered.begin()+(2+i) )  ;break;
                    }
            }
        }
    }
    switch(entered[entered.size() - 1 ])
    {
    case 'V':
        {points+=5; break;}
    case 'W':
        {points+=2; break;}
    }
cout<< points;
}

//AC
#include <bits/stdc++.h>
using namespace std;
#define sp <<' '<<
#define ln <<'\n';
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, points = 0; cin>>n;//useless almost
    string entered; cin >> entered;
    for (int i = 0; i < entered.size() ; ++i)
    {
        char ch =  entered[i];
        switch(ch)
        {
        case 'V'://add 5
            {
                points +=5; break;
            }
        case 'W'://add 2
            {
                points +=2; break;
            }
        case 'X'://remove next
            {
                if(i<=entered.size() - 1 - 1)// 'cause of the +1 right below... just not to access what's beyond we need
                    entered[i + 1] = '0';// next char .. turn it off
                break;
            }
        case 'Y'://move next to end
            {
                    if(i<=entered.size() - 1 - 1)
                    {
                        entered.push_back(entered[i+1]);
                        i++; // to skip the next coming 'cause we sent it to the end
                        // as if we move it to the end ... but increased the entered size by 1
                    }
                    break;
            }
        case 'Z'://pretty long way // break; here is fine to written or not as this case it the final one
            {
                if(i<=entered.size() - 1 - 1)
                {
                    if(entered[i+1]=='V')
                        {
                            points/=5;
                            i++;
                             break;
                        }
                    else if(entered[i+1] =='W')
                        {
                            points /=2;
                            i++;// to skip the next coming as if we deleted it already
                            break;
                        }
                }
                
            }

        }
    }
    
cout<< points;
}
//another sol
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int long long score = 0 , sz , n;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    sz = s.size();
    for(int long i = 0 ; i < sz ; i++){
        if(s[i] == 'V'){
            score = score + 5;
        }
        else if(s[i] == 'W'){
            score = score + 2;
        }
        else if(s[i] == 'X'){
            if((i+1) != sz){
                s[i+1] = '0';
            }
            else{break;}
        }
        else if(s[i] == 'Y'){
            if((i+1) != sz){
                s.resize(sz + 1);
                sz++;
                s[sz - 1] = s[i + 1];
                s[i + 1] = '0';
            }
            else{break;}
        }
        else if(s[i] == 'Z'){
            if((i+1) != sz){
                if(s[i+1] == 'V'){
                    score /= 5;
                    s[i+1] = '0';
                }
                else if(s[i+1] == 'W'){
                    score /= 2;
                    s[i+1] = '0';
                }
            }
            else{break;}
        }
    }
    cout<<score<<endl;
    return 0;
}
