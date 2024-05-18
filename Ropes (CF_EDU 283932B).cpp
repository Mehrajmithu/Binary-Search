/* Author: Maharaj Mithu
 Dept of CSE , HSTU */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    double l=0,r=1000000000.000,ans=0;
    while(r-l>=0.000001)
    {
        double mid=(l+(r-l)/2.00);
        ll c=0;
        for(int i=0;i<n;i++)
        {
            c+=((double)(v[i])/(double)mid);
        }
        if(c>=k)
        {
            ans=mid;
           l=mid;
        }
        else
        r=mid;
    }
    printf("%.6lf\n",ans);

}
