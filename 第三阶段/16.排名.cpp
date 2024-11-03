#include<bits/stdc++.h>
using namespace std;
struct node{
	int score;
	int number;
}a[55];

bool cmp(node a,node b){
	if(a.score==b.score){
		if(a.number<b.number){
			return 1;
		}
		else {
			return 0;
		}
	} else {
		return a.score>b.score;
	}
}

main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].number>>a[i].score;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<a[i].number<<" "<<a[i].score<<"\n";
	}


	return 0;
}

