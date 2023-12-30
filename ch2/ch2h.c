#include<stdio.h>
#include<math.h>

void swap(int *a,int*b){
	int *temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int c,d;
	printf("Enter c and d : ");
	scanf("%d %d",&c,&d);
	swap(&c,&d);
	printf("%d %d",c,d);
	return 0;
}
