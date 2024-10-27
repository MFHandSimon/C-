#include<bits/stdc++.h>
using namespace std;


int z[11],a[6],b[6],x=1,d=1;

main() {

	for(int i=1; i<=10; i++) 				cin>>z[i];

	for(int i=1; i<=10; i++) {
		int n;
		cin>>n;
		if(x==1) {
			a[x]=z[i];
			x++;
		}
		if(x==2) {
			b[d]=z[i];
			d++;
		}
	}

	sort(a,a+5);
	sort(b,b+5);

	for(int i=0; i<=5; i++) 			printf("%.2lf",a[i]);
	for(int i=0; i>=1; i--) 			printf("%.2lf",b[i]);
	return 0;
}

