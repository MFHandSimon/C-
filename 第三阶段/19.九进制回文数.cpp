#include<bits/stdc++.h>
using namespace std;


main(){
	int ns=9,cnt=0;
	int n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		int x=i;
		int a9=0,b9=0,pos=1;
		bool flag=true;
		while(x){
			if(x%ns%x==0){
				flag=0;
				break;
			}
			a9=a9*10+x%10;
			b9=b9+x%ns*pos;
			pos*=10;
			x/=ns;
		}
		if(a9==b9&&flag){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

