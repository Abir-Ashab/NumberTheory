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
 
int main()
{
Fast(input);
int x;
cin>>x;
int prime[x];
memset(prime,0,sizeof(prime));//assigned zero to the each index of prime

for(int i=2;i*i<=x;i++){
    if(prime[i]==0){
        for(int j=i*i;j<=x;j+=i){
            prime[j]=1;
        }
    }
}
for(int i=2;i<=x;i++){
    if(prime[i]==0)cout<<i<<" ";
}
cout<<endl;
}