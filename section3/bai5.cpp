#include<stdio.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	char s[100];
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	int l=0;
	int r=n-1;
	int check=1;
	while(l<r){
		if(s[l]!=s[r]){
			check=0;		
		}
		l++;
		r--;
	}
	if(check){
		printf("palindrome valid");
	}else{
		printf("palindrome invalid");
	}
	
}
