#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    while(q--)
    {
        ll x;
        cin>>x;
        ll l=0,r=n-1,c=0;
        while(l<=r)
        {
            ll mid=(l+(r-l)/2);
            if(v[mid]==x)
            {
                c=1;
                break;
            }
            else if(v[mid]<x)
                l=mid+1;
            else
                r=mid-1;
        }
        if(c==1)
            cout<<"YES\n";
        else
            cout<<"No\n";
    }

}
