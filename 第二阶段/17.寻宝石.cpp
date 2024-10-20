//那我问你
/*
  你的头为什么尖尖的 .
					/\
			    ___/__\___
			   |         |
               |         |
			   |         |
			   ——————











*/
#include<bits/stdc++.h>
using namespace std;
main(){
	int n,max=-114514;
	cin>>n;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-2;i++){
		if((a[i]+a[i+1]+a[i+2])>max){
			max=(a[i]+a[i+1]+a[i+2]);
		}
	}
	cout<<max;
	return 0;
}

