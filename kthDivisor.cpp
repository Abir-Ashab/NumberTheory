#include<bits/stdc++.h>
using  namespace  std; 
#define all(x) x.begin(),x.end()
#define nl      '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;
  
int main()
{
    ll n,k;
    cin>>n>>k;
    set<ll>s;//just to sort
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
                ll x=i;
                ll y=n/i;
                s.insert(x);
                s.insert(y);
        }
    }
 
    vector<ll>v;
    v.assign(s.begin(),s.end());
    if(k>v.size())cout<<-1<<endl;
    else cout<<v[k-1]<<endl;
}
 
 