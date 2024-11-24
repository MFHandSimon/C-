#include<bits/stdc++.h>
using namespace std;

char num[105][105];
int N,M,ans;

int dx[]={0,0,1,0,-1};
int dy[]={0,1,0,-1,0};

void dfs(int x,int y){
	num[x][y]='.';
	for(int i=1;i<=4;i++){
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(num[tx][ty]=='W'){
			dfs(tx,ty);
		}
	}
}

main(){
	cin>>N>>M;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			cin>>num[i][j];
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			if(num[i][j]=='W'){
				ans++;
				dfs(i,j);
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
10 12
W........WW.
.WWW.....WWW
....WW...WW.
.........WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W.....W.
.W.W......W.
..W.......W.
*/
