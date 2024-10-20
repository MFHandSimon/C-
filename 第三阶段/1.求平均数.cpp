#include<bits/stdc++.h>
using namespace std;
main() {
	int a[10],number=0;
	for(int i=0; i<=9; i++)       {
		cin>>a[i];
	}
	sort(a,a+10);
	for(int i=0; i<=9; i++) {
		number+=a[i];
	}
	cout<<a[9]<<","<<a[0]<<","<<number/10.0;
	return 0;
}

