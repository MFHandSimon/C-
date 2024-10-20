#include<bits/stdc++.h>
using namespace std;
main() {
	int n,m,arr[1005],num=0,count=1;
	cin>>n;
	for(int i=1; i<=n; i++) {
		arr[i]=i;
	}
	while(m<n-1) {
		if(arr[count]!=0) {
			num++;
		}
		if(num==3) {
			arr[count]=0;
			num=0;
			m++;
		}
		count++;
		if(count==n+1) {
			count=1;
		}
	}
	for(int j=1;j<=n;j++){
		if(arr!=0){
			cout<<arr[j];
		}
	}
	return 0;
}

