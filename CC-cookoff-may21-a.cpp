#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)
#define E endl

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {  

     int G,p;
     cin>>G>>p;
      
      int a[11];

      for(int i=10;i>=1;i--){

          cin>>a[i];
      }


     int mind,maxd;

      

     int sum=0,count1=0,count2=1;
     for(int i=10;i>G;i--){

         if(a[G]<p){
             continue;
         }
         int sum=a[i]-p;
         if(sum>0){
             a[i+1]=a[i+1]+sum;
         }
     }

     mind=maxd=count1+1;

     while(a[G]>=p){
         count2++;
         a[G]-=p;
     }
     maxd+=count2;

  
     
      cout<<mind<<" "<<maxd<<"\n";


    }
}
