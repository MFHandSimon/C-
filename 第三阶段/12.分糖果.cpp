#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int a[n],sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	int num=0;
	for(int i=1;i<=n-1;i++){
		if(a[i]!=sum/n){
			a[i+1]=(a[i+1]+a[i]-(sum/n));
			a[i]=sum/n;
			num++;
		}
	}
	cout<<num;
	return 0;
}

