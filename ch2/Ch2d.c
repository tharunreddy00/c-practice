#include<stdio.h>
#include<math.h>

int main(){
	float r,pi;
	float cartCood[2],polCood[2];
	printf("Enter the cartesian coordinates : ");
	for(int i=0;i<2;i++) scanf("%f",&cartCood[i]);
	polCood[0]=sqrt(pow(cartCood[0],2)+pow(cartCood[1],2));
	polCood[1]=atan(cartCood[1]/cartCood[0]);
	printf("Polar Coordinates : %f, %f",polCood[0],polCood[1]);
	return 0;	
}
