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
	else gcd(b,a%b);
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int ans=gcd(a,b);
		cout<<ans<<endl;
	}
	return 0;
}