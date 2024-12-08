#include<bits/stdc++.h>
using namespace std;
int n,dp[10005];
main(){
	cin>>n;
	dp[1]=1;
	for(int i=1;i<=n;i++){
		dp[i]=dp[i-1]+1;
		if(i>=5){
			dp[i]=min(dp[i],dp[i-5]+1);
		}
		if(i>=11){
			dp[i]=min(dp[i],dp[i-11]+1);
		}
	}
	cout<<dp[n];
	return 0;
}

