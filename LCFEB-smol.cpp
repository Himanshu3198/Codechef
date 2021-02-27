#include<bits/stdc++.h>
using namespace std;


int findSmallest(int n,int k){

 if(k==1){
     return 1;
 }
 else{
     return (n%k);
 }
    
}

int main(){
   
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;

          cout<<findSmallest(n,k)<<"\n";
      


    }




}
