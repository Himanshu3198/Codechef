#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {

        string str;
        cin >> str;

        int n = str.size();
          map<char,int>m1;

          for(char ch:str){

              m1[ch]++;
          }

        int even = 0, odd = 0;

         for(auto it:m1){
    
           int total=it.second;

           if(total%2==0){

               even+=total/2;
           }
           else{

               odd++;
               even+=total/2;
           }
             
         }

        (even > odd) ? cout << "YES\n" : cout << "NO\n";
    }
}