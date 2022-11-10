//mane kon kon number gular odd number of divisors achhe,logic khatay
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,ct=0;
  cin >> n;
  for (int i = 1; i<= 1e6; i++) {
    if (n == i*i)ct++;
  }
  if(ct==0)cout<<"EVEN NUMBERS OF DIVISORS"<<endl;
  else cout<<"ODD NUMBERS OF DIVISORS"<<endl;
}