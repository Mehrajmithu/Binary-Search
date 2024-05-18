/* Author: Maharaj Mithu
 Dept of CSE, HSTU */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 ll n,k;
 cin>>n>>k;
 ll l=0,r=1e18,ans=0;
 vector<ll>v(n);
 for(int i=0;i<n;i++)
 cin>>v[i];

 while(l<=r){
     ll mid=(l+(r-l)/2);
     ll c=0;
     for(int i=0;i<n;i++){
         c+=(mid/v[i]);
         if(c>=k)
         break;
     }
     if(c>=k){
         ans=mid;
         r=mid-1;
     }

     else
     l=mid+1;
 }
 cout<<ans<<endl;
}
