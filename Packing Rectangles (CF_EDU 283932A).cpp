/* Author: Maharaj Mithu
 Dept of CSE, HSTU */
 #include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a,b,c;
ll good(ll x)
{
    ll u=(x/a)*(x/b);
    if(u>=c)
        return 1;
    else
        return 0;
}
int main()
{

    cin>>a>>b>>c;
    ll l=0,r=1,ans=-1;
    while(!good(r))
        r*=2;
    while(l<=r)
    {
        ll mid=(l+(r-l)/2);
        if(good(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    cout<<ans<<endl;


}
