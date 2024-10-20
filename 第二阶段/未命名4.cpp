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
	int n,number=0;
	cin>>n;
	for(int i=100;i<=n;i++){
		if((i%10!=3)&&(i/10%10!=5)&&(i/100!=7)){
			number++;
		}
	}
	cout<<number;
}
