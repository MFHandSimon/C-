#include<bits/stdc++.h>
using namespace std;
int n,dp[10005];
main(){
	cin>>n;
	dp[1]=0;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+1;
		if(i%2==0){
			dp[i]=min(dp[i],dp[i/2]+1);
		}
	}
	cout<<dp[n];
	return 0;
}
