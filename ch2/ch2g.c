#include<stdio.h>
#include<math.h>

int main(){
	float degree, rad,pi=3.14159;
	printf("Enter the angle : ");
	scanf("%f",&degree);
	rad=(degree*pi)/180;
	printf("sin(%f) : %f",degree,sin(rad));
	printf("\ncos(%f) : %f",degree,cos(rad));
	printf("\ntan(%f) : %f",degree,tan(rad));
	printf("\ncosec(%f) : %f",degree,1/sin(rad));
	printf("\nsec(%f) : %f",degree,1/cos(rad));
	printf("\ncot(%f) : %f",degree,1/tan(rad));
	return 0;
}
