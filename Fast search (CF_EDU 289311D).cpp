//Author: Maharaj Mithu
//Dept of CSE , HSTU

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,q;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    cin>>q;
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        ll u=upper_bound(v.begin(),v.end(),b)-v.begin();
        ll l=lower_bound(v.begin(),v.end(),a)-v.begin();
        cout<<u-l<<" ";
    }
}
