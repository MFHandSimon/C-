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
main() {
	int n,m;
	cin>>n>>m;
	int ans=0;
	for(int i=n; i<=m; i++) {
		int j=i;
		bool flag=true;
		while(j) {
			if(j%2==0) {
				flag=false;
				break;
			}
			j/=10;
		}
		if(flag==true) {
			ans++;
		}
	}
	cout<<ans;
	return 0;
}

