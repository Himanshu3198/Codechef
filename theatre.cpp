//codechef - greedy problem
  //https://www.codechef.com/problems/THEATRE
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    ll total_profit = 0;
    ll per_day = 0;
    ll loss = 0;

    while (tt--)
    {

        int n;
        cin >> n;
        string m;
        int t;
         
        ll arr[4][4] = {0};
       vector<ll> profit;
        int index = 0;
         per_day = 0;
         loss = 0;

        ll max_val;

        for (int i = 0; i < n; i++)
        {

            cin >> m >> t;
            if (t == 3 && m == "A")
            {
                arr[0][1]++;
            }
            else if (t == 3 && m == "B")
            {
                arr[1][1]++;
            }
            else if (t == 3 && m == "C")
            {
                arr[2][1]++;
            }
            else if (t == 3 && m == "D")
            {
                arr[3][1]++;
            }

            if (t == 12 && m == "A")
            {
                arr[0][0]++;
            }
            else if (t == 12 && m == "B")
            {
                arr[1][0]++;
            }
            else if (t == 12 && m == "C")
            {
                arr[2][0]++;
            }
            else if (t == 12 && m == "D")
            {
                arr[3][0]++;
            }

            if (t == 6 && m == "A")
            {
                arr[0][2]++;
            }
            else if (t == 6 && m == "B")
            {
                arr[1][2]++;
            }
            else if (t == 6 && m == "C")
            {
                arr[2][2]++;
            }
            else if (t == 6 && m == "D")
            {
                arr[3][2]++;
            }

            if (t == 9 && m == "A")
            {
                arr[0][3]++;
            }
            else if (t == 9 && m == "B")
            {
                arr[1][3]++;
            }
            else if (t == 9 && m == "C")
            {
                arr[2][3]++;
            }
            else if (t == 9 && m == "D")
            {
                arr[3][3]++;
            }
        }

    

        int i, j;

        for (i = 0; i < 4; i++)
        {
            max_val = INT_MIN;
            for (j = 0; j < 4; j++)
            {
                if (arr[j][i] > max_val)
                {
                    max_val = arr[j][i];
                    index = j;
                }
            }

            if (max_val == 0)
            {
                loss += 100;
                profit.push_back(max_val);
            }
            else
            {

                profit.push_back(max_val);

                for (int o = 0; o < 4; o++)
                {
                    arr[index][o] = 0;
                }
            }
        }

        sort(profit.begin(), profit.end(), greater<ll>());

      

        per_day = profit[0] * 100 + profit[1] * 75 + profit[2] * 50 + profit[3] * 25;
        per_day=per_day-loss;
        loss=0;
        cout << per_day << "\n";
        total_profit += per_day;
    }

    cout << total_profit << "\n";
}
