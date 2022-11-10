//ekta array te given values er given range of numbers baad diye bakigular gcd nirnoy
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR for(int i=0;i<x;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
const int N=1e5+123;
#define PQ priority_queue
 
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
        int n,query;
        cin>>n>>query;
        int ar[n+3];
        for(int i=1;i<=n;i++)cin>>ar[i];
        int pre[n+2];
        int pos[n+3];
 
        pre[0]=0;
        for(int i=1;i<=n;i++)pre[i]=gcd(pre[i-1],ar[i]);
 
        pos[n+1]=0;
        for(int i=n;i>=1;i--)
        {
            pos[i]=gcd(pos[i+1],ar[i]);
        }
        while(query--)
        {
            int l,r;
            cin>>l>>r;
            int ans=gcd(pre[l-1],pos[r+1]);
            cout<<ans<<endl;
        }
}