#include<bits/stdc++.h>
using namespace std;
long long n,dp[10005],a[10005],ans=0x3f3f3f;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(dp[i-1]<0){
			dp[i]=a[i];
		}else{
			dp[i]=dp[i-1]+a[i];
		}
		ans=max(ans,dp[i]);
	}
	cout<<ans;
	return 0;
}

