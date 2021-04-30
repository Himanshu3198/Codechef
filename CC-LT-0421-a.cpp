
#include <bits/stdc++.h>
#define ll long long int 

using namespace std;
const int mod 1e9+7;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {

         ll n,res=0;
        cin >> n;

        for(int i=0;i<n;i++){
            int ans;
            cin>>ans;
            res=(res+ans+mod)%mod;
        }
        ll q;
        cin>>q;
        while(q--){
            res=(2*ans)%mod;
            cout<<res<<"\n";
        }

     
    }


    return 0;
}
