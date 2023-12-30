#include<stdio.h>

int main(){
	int n,sum=0,rev=0;
	printf("Enter a five digit number : ");
	scanf("%d",&n);
	while(n>0){
		rev=(rev*10)+n%10;
		n/=10;
	}
	printf("Reverse of the number : %d",rev);
	return 0;
}
