/* author :himanshu3198
 */
#include<bits/stdc++.h>


using namespace std;
#define E endl
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define ll long long
#define ULL unsigned long long
#define LD long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define  raftaar()    ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    
    int t=1,i,j;
    scanf("%d",&t);
    while(t--)
    {
   
  
      ll n,k;
      cin>>n>>k;
       string s;
       cin>>s;

   
        
        ll total=n-1;

        for(int i=1;i<n;i++){

            

                
                   total+=s[i]==s[i-1];

            
          
         
        }

        while(k--){

            ll q;
            cin>>q;

            q--;


           
            

               if(s[q]=='1'){
                   s[q]='0';
               }
               else{
                   s[q]='1';
               }

               if(q<n-1 ){

                  if(s[q]==s[q+1]){
                      total++;
                  }
                  else{
                      total--;
                  }
               }
                if (q>0){

                   if(s[q]==s[q-1]){
                      total++;
                  }
                  else{
                      total--;
                  }

               }

          
            

               
              cout<<total<<"\n";


        
        }

    

      
      
    


    
      
    }
   
    return 0;
}