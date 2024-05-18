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
        ll a;
        cin>>a;
        ll l=upper_bound(v.begin(),v.end(),a)-v.begin();
        cout<<l<<endl;
    }

}
