#include<bits/stdc++.h>
using namespace std;

int n,ha,la,hb,lb;
int num[105][105];

int dx[]={0,0,1,0,-1};
int dy[]={0,1,0,-1,0};
bool flag=false;

void dfs(int x,int y){
	num[x][y]=1;
	for(int i=1;i<=4;i++){
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&num[tx][ty]==0&&flag==false){
			if(tx==hb&&ty==lb){
				flag=true;
			} else {
				dfs(tx,ty);
			}
		}
	}
}

main(){
    cin>>n;
    for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>num[i][j];
		}
	}
	cin>>ha>>la>>hb>>lb;
	if(num[ha][la]==1||num[hb][lb]==1){
		cout<<"NO";
	} else {
		dfs(ha,la);
	}
	if(flag==true){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	return 0;
}
/*
3
0 1 1
0 0 1
1 0 0
1 1 3 3

*/
