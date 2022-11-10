/*TLE on test 11
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
        // cout<< i <<' ';
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
                // cout<< "i" sp i ln
                // cout<< "points" sp points ln
                break;
            }
        case 'Y':
            {
                
                    char temp = entered[i+1];
                    // cout<< "temp" sp temp ln;
                    for (int j =  i + 1; j <= entered.size() - 2; ++j)
                    {
                        // cout<< "entered[" sp j sp "] = " sp entered[j] sp ", entered[" sp j+1 sp "]" sp entered[j+1] ln
                        entered[j] = entered[j+1] ;
                    }
                    // cout<< "entered[" sp (entered.size()-1) sp "]" sp entered[entered.size() - 1] ln;
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
                if(entered[i+i]=='V')
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
    // cout<< entered;


}
*/
