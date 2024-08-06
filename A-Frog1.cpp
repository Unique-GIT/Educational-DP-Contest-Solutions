#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int inf = LLONG_MAX>>1;
const char nl = '\n';

void solve(){
  int n;cin>>n;
  int h[n];
  for(int i=0;i<n;i++) cin>>h[i];


  // state ==> dp[i] = min cost to get from i to n-1
  
  // transition ==> from ith , we can go to i+1 th or i+2 th 
  // hence , possible => abs(h[i] - h[i+1]) + minCost from(i+1 to n) or abs(h[i] - h[i+2]) + minCost from (i+2 to n)
  // flow ==> hence, I need solution for subproblem i+1 and i+2 first ! 


  // base case ==> dp[n-1] = 0; minCost to go from nth to nth is zero ! 
  // final subproblem ==> dp[0] ==> minCost to go from (0 to nthe)

  int dp[n];
  for(int i=0;i<n;i++) dp[i] = inf;
  dp[n-1] = 0; // base Case 
  
  for(int i=n-2;i>=0;i--){
    dp[i] = min(dp[i] , abs(h[i] - h[i+1]) + dp[i+1]);
    if(i+2<n) dp[i] = min(dp[i],abs(h[i] - h[i+2]) + dp[i+2]);
  }

  cout<<dp[0]<<nl;
}

signed main(){
  int t;t = 1;
  while(t--){
    solve();
  }
}