#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int inf = LLONG_MAX>>1;

void solve(){
  int n;cin>>n;
  int h[n];
  for(int i=0;i<n;i++) cin>>h[i];

  int dp[n];
  for(int i=0;i<n;i++) dp[i] = inf;
  dp[n-1] = 0;

  // state ==> dp[i] = min cost to get from i to n-1
  // transition ==> 
}

signed main(){
  int t;t = 1;
  while(t--){
    solve();
  }
}