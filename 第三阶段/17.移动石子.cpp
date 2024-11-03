#include<bits/stdc++.h>
using namespace std;
int a[120], b[51];
main(){
	int n,sum1=0,avg=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum1+=a[i];
		a[i+n]=a[i];
	}
	avg=sum1/n;
	int maxc=0x3f3f3f;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[j]=a[i+j];
		}
		int cnt=0;
		for(int j=1;j<=n-1;j++){
			cnt+=abs(b[j]-avg);
			b[j+1]+=b[j]-avg;
			b[j]=avg;
		}
		maxc=min(maxc,cnt);
	}
	cout<<maxc;
	return 0;
}

