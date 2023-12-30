#include<stdio.h>
#include<math.h>

int main(){
	int n,count=0;
	printf("Enter the amount : ");
	scanf("%d",&n);
	while(n>0){
		if(n/100){
			count+=n/100;
			n%=100;	
		}
		else if(n/50){
			count+=n/50;
			n%=50;	
		}
		else if(n/10){
			count+=n/10;
			n%=10;	
		}
		else if(n/5){
			count+=n/5;
			n%=5;	
		}
		else if(n/2){
			count+=n/2;
			n%=2;	
		}
		else if(n/1){
			count+=n/1;
			n%=1;	
		}
	}
	printf("%d",count);
	return 0;
}
