#include<bits/stdc++.h>
using namespace std;
int n,a[1005][1005],dp[1005][1005],ans=-0x3f3f3f;
main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
		}
	}
	dp[1][1]=a[1][1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=dp[i-1][j]+a[i][j];
			if(j>=2){
				dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i][j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		ans=max(ans,dp[n][i]);
	}
	cout<<ans;
	return 0;
}

