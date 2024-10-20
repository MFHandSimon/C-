#include<bits/stdc++.h>
using namespace std;
main() {
	int n,tmp;
	cin>>n;
	int a=n/3600;
	tmp=n%3600;
	int b=tmp/60;
	tmp=tmp%60;
	int c=tmp;
	printf("%02d:%02d:%02d",a,b,c);
	return 0;
}

