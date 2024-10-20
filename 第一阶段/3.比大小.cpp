#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a*a>b*c){
		cout<<"SQUARE";
	} else if(a*a<b*c){
		cout<<"RECTANGLE";
	}else if(a*a==b*c){
		cout<<"SAME";
	}
return 0;
}

