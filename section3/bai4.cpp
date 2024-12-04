#include<stdio.h>
using namespace std;
int main(){
	int n;
	char str[100];
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%c",&str[i]);
	}
	int l=0;
	int r=n-1;
	while(l<r){
		int temp=str[l];
		str[l]=str[r];
		str[r]=temp;
		l++;
		r--;
	}
	for(int i=0;i<n;i++){
		printf("%c",str[i]);
	}
} 
