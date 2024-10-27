#include<bits/stdc++.h>
using namespace std;
main() {
	int a[10],n,num=0x3f3f3f,ber=-1;
	for(int i=0; i<10; i++)   cin>>a[i];
	cin>>n;
	for(int i=0; i<10; i++) {
		for(int j=1; j<10; j++) {
			if( abs(n-(a[i]+a[j]))<=num && n>a[i]+a[j] ) {
				num=abs(n-(a[i]+a[j]));
				ber=a[i]+a[j];
			}

		}
	}
	cout<<ber;
	return 0;
}

