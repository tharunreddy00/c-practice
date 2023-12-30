#include<stdio.h>
#include<math.h>

int main(){
	float temp,wind;
	printf("Temprature : ");
	scanf("%f",&temp);
	printf("Wind Speed : ");
	scanf("%f",&wind);
	float wcf = 35.74 + 0.6215*(temp) + (0.4275*temp - 35.75) * pow(wind,0.16);
	printf("%f",wcf);
	return 0;
}
