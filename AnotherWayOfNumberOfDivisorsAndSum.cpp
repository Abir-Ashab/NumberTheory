#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR for(int i=1;i<=n;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
const int N=1e5+123;
#define PQ priority_queue
 
int main()
{
Fast(input);
int n,x;
int test,sum=0;

vector<int>v[123];
cin>>test;
while(test--){
    cin>>n;
    FOR {x=sqrt(i);
    for(int j=1;j<=x;j++){
        if(i%j==0){v[i].push_back(j);
        if(i/j!=j)v[i].push_back(i/j);}
    }
  }
  FOR {cout<<"divisors of "<<i<<" "<<"is :";
  for(auto val:v[i])cout<<val<<" ";
  
  cout<<endl;}

  cout<<endl;
}
}