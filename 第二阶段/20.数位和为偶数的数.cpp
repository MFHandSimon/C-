/*
  20.��λ��Ϊż������
��������:
15
�������:
2 4 6 8 11 13 15



21.������
��������:
10 20
�������:
10 11 12 15 20
*/
#include<bits/stdc++.h>
using namespace std;
main(){
	int n,number,x;
	cin>>n;
	for(int i=2;i<=n;i++){
		x=i;
		number=0;
		while(x){
			number+=x%10;
			x/=10;
		}
		if(number%2==0)     cout<<i<<" ";
	}
	return 0;
}

