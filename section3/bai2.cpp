#include<stdio.h>
using namespace std;
int tong (int m,int n){
	if(n==m){
		return m; 
	} 
	return m+tong(m-1,n); 
}
int main(){
	int n; 
	int m; 
   scanf("%d",&n);
   scanf("%d",&m);
   printf("tong:%d",tong(m,n)) ;
} 
