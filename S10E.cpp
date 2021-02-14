// https://www.codechef.com/problems/S10E
#include<bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j,count,count1=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {  
        count=0;
        
        for(j=i-1;j>=max(0,i-5);j--)
        {
           
            if(a[i]<a[j])
            {
                count++;
            }
            else
            {
                count=0;
                break;
            }
        }
        if(count>0)
        {
            count1++;
        }
    }
    cout<<count1<<endl;
    }
 
}
