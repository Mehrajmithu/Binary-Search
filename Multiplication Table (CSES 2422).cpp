/* Author: Maharaj Mithu
 Dept of CSE , HSTU */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll l=0,r=n*n,ans=-1;
    while(l<=r)
    {
        ll mid=(l+(r-l)/2);
        ll c=0;
        for(ll i=1;i<=n;i++)
        {
            c+=min(n,mid/i);
        }
        if(c>=((n*n)+1)/2)
        {
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    cout<<ans<<endl;
}
