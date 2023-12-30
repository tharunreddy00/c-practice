#include<stdio.h>
#include<math.h>

int main(){
	float distance,lat[2],lon[2],pi=3.141592;
	for(int i=0;i<2;i++){
		printf("Enter the coordinate %d : ",i+1);
		scanf("%f %f",&lat[i],&lon[i]);
		lat[i]=(lat[i]*pi)/180;
		lon[i]=lon[i]*pi/180;
	}
	distance = 3963*acos((sin(lat[0])*sin(lat[1]))+(cos(lat[0])*cos(lat[1]))*cos(lon[1]-lon[0]));
	printf("%f",distance);
	return 0;
}
