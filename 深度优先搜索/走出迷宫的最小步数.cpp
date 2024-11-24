#include<bits/stdc++.h>
using namespace std;

int r,c;
char num[105][105];
int dp[105][105];

int dx[]={0,0,1,0,-1};
int dy[]={0,1,0,-1,0};

void dfs(int x,int y,int dep){
	dp[x][y]=dep;
	for(int i=1;i<=4;i++){
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(num[tx][ty]=='.'&&dep+1<dp[tx][ty]){
			dfs(tx,ty,dep+1);
		}
	}
}

main(){
	cin>>r>>c;
	for(int i=1;i<=r;i++){
	 	for(int j=1;j<=c;j++){
			cin>>num[i][j];
			dp[i][j]=0x3f3f3f;
		}
	}
	dfs(1,1,1);
	cout<<dp[r][c];
	return 0;
}
/*
5 5
..###
#....
#.#.#
#.#.#
#.#..



*/
