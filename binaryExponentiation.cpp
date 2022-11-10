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
int base,power,result=1;
cin>>base>>power;

while(power!=0){
    if(power%2==1){result*=base;power--;}
    else {base*=base;power/=2;}
}
cout<<result;
}