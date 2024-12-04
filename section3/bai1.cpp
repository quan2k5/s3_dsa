#include<stdio.h>
using namespace std;
int tong(int n){
	if(n==0){
		return 1; 
	} 
	return  n*tong(n-1); 
} 
int main(){
	int n;
	scanf("%d",&n);
	printf("tich:%d",tong(n));
} 
