#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;

        float result = k1 * k2 * k3 * v;
        result = 100 / result;
        result = floor((result * 100) + .5) / 100;
        //   cout<<result<<" ";
        if ( result<= 9.57)
        {
          
            cout << "YES\n"; 
        }
        else
        {
                 cout << "NO\n";
        }
    }
}