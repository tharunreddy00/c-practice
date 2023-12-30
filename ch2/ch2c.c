#include<stdio.h>
#include<math.h>

int main(){
	int sides[3];float s=0;
	for(int i=0;i<3;i++){
		printf("Side %d : ",i+1);
		scanf("%d",&sides[i]);
		s+=sides[i];
	}
	s/=2;
	float area=sqrt(s*(s-sides[0])*(s-sides[1])*(s-sides[2]));
	printf("Area : %f",area);
	return 0;
}
