#include <math.h>
#include <stdio.h>


int main()
{
	double a,b,c,x1,x2,d;
	printf("vvedite a = ");
	scanf("%lf",&a);
	printf("vvedite b = ");
	scanf("%lf",&b);
	printf("vvedite c = ");
	scanf("%lf",&c);
	
	d=b*b-4*a*c;
	if (d<0){
	printf("diskriminant < 0 \n");
	return 1;
	}
	
	if (d==0){
	x1=-b / (2*a);
	printf("x = %lf\n",x1);
	return 0;
	}
	
	x1=(-b + sqrt(d))/(2*a);
	x2=(-b - sqrt(d))/(2*a);
	printf("x1 = %lf \n",x1);
	printf("x2 = %lf \n",x2);
	return 0;
}
