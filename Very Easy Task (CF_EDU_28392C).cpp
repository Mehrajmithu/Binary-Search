/* Author: Maharaj Mithu
 Dept of CSE , HSTU */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll l=0,r=1e12,ans=0;
    while(l<=r)
    {
        ll mid=(l+(r-l)/2);
        ll c=0;
        ll mn=min(x,y);
        if(mid>=mn)
        {
            c=1;
            ll u=mid-mn;
            c+=(u)/x;
            c+=(u)/y;
            if(c>=n)
            {
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        else
       l=mid+1;
    }
    cout<<ans<<endl;
}
