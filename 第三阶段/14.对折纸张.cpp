#include<bits/stdc++.h>
using namespace std;
main() {
	double n,number=0.2;
	int cnt=0;
	cin>>n;
	while(number<n) {
		number=number*2;
		cnt++;
	}
	cout<<cnt;
	return 0;
}
