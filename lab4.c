#include <stdio.h>
#include <math.h>


double perimiter(double a, double b, double c)
{
	double per;
	per=a+b+c;
	return per;
}

double area(double a, double b, double c)
{
	double ar,p;
	p=(a+b+c)/2;
	ar=sqrt(p*(p-a)*(p-b)*(p-c));
	return ar;
}

int main()
{
	double ab,bc,ac;
	printf("enter a side ab: ");
	scanf("%lf",&ab);
	printf("enter a side bc: ");
	scanf("%lf",&bc);
	printf("enter a side ac: ");
	scanf("%lf",&ac);
	printf("%lf %lf %lf",ab,bc,ac);
	
	
	if (ab+bc>ac && ab+ac>bc && bc+ac>ab)
	{
		printf("\nenter correct");
		printf("\n%s%lf\n%s%lf","perimiter=",perimiter(ab,bc,ac),"area of trangle=",area(ab,bc,ac));
	} 
	else{printf("\nincorrect enter"); return 1;}
	return 0;
}
