#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR for(int i=1;i<=x;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
const int N=1e5+123;
#define PQ priority_queue
 
int main()
{
Fast(input);
int test,x;
cin>>test;
x=sqrt(test);
PQ<int>v;

FOR {if(test%i==0){v.push(i);

if(test/i!=i)v.push(test/i);}
}
while(!v.empty()){
    cout<<v.top()<<" ";
    v.pop();
}
}