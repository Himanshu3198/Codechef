/*
    author: himanshu3198
*/

/* *********************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
using namespace std;
#define E endl
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define ll long long
#define ULL unsigned long long
#define LD long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define sl(n) scanf("%lld",&n)
#define slu(n) scanf("%llu",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define pnl printf("\n")
#define fr(i,n) for(int i=0;i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)
#define DB(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define CL(a,b) memset(a,b,sizeof(a))
#define GOLD ((1+sqrt(5))/2)
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
void swaps (char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
void swapi(int *a,int *b){int temp;temp=*a;*a=*b;*b=temp;}
ULL gcd(ULL a,ULL b){if(a==0)return b;if(b==0)return a;if(a==1||b==1)return 1;
if(a==b)return a;if(a>b)return gcd(b,a%b);else return gcd(a,b%a);}

/* *************************************************************************************************** */
#define SIZE 1000001

int main()
{
    #ifdef himanshu3198
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    freopen("log.txt", "w", stderr);
    #endif
    int t=1,i,j;
    scanf("%d",&t);
    while(t--)
    {
       int n,W,rod;
       si(n);
       cin>>W>>rod;

        int a[n];

        map<int,int>mp;

        fr(i,n){
            cin>>a[i];
            mp[a[i]]++;
        }

         ll sum=0;
         if(rod>=W){
             puts("YES");
             continue;
         }
         W-=rod;
        
         for(auto it:mp){

             if(W<=0){
                 break;
             }

             while(it.second>=2){
                 W-=2*it.first;
                 it.second=it.second-2;
             }
         }

       if(W<=0){

           puts("YES");
       }
       else{
           puts("NO");
       }



         


        // for(auto it:mp){
        //     cout<<it.first<<" "<<it.second<<E;
        // }


    
      
    }//end while
    #ifdef himanshu3198
    fprintf(stdout,"\nTIME: %.3lf sec\n", (double)clock()/(CLOCKS_PER_SEC));
    #endif
    return 0;
}