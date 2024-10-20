//那我问你
/*
  21.奇妙数
样例输入:
10 20
样例输出:
10 11 12 15 20
*/
#include<bits/stdc++.h>
using namespace std;
bool qm(int x) {
	int y=x;
	while(y) {
		if(y%10!=0&&(x%(y%10))!=0) {
			return false;
		}
		y/=10;
	}
	return true;
}
main() {
	int n,m,flag=0;
	cin>>n>>m;
	for(int i=n; i<=m; i++) {
		if(qm(i)==true) {
			cout<<i<<" ";
			flag=1;
		}
	}
	if(!flag) {
		cout<<"-1";
	}
	return 0;
}

