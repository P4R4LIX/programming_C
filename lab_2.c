#include <stdio.h>

int main()
{
 double mas[3][3];
 int i=0,j;

 while (i<3)
{
	j=0;
	while (j<3)
	{
		printf("Enter element ");
		printf("%d%d%c", i+1, j+1,':');
		scanf("%lf",&mas[i][j]);
		j++;
	 }
	 i++;
}

i=0;

while (i<3)
{
	j=0;
	while (j<3)
	{
		printf("%lf%c",mas[i][j],' ');
		if (j==2){printf("\n");}
		j++;
	 }
	 
	 i++;
}

printf("%s%lf","\nsumm main diagonal: ", mas[0][0]+mas[1][1]+mas[2][2]);
printf("%s%lf","\nsumm side diagonal: ", mas[0][2]+mas[1][1]+mas[2][0]);
printf("\n");
int mas2[2][2];
i=0;
 while (i<2)
{
	j=0;
	while (j<2)
	{
		printf("Enter element ");
		printf("%d%d%c", i+1, j+1,':');
		scanf("%d",&mas2[i][j]);
		j++;
	 }
	 i++;
}
i=0;
while (i<2)
{
	j=0;
	while (j<2)
	{
		printf("%d%c",mas2[i][j],' ');
		if (j==1){printf("\n");}
		j++;
	 }
	 
	 i++;
}
printf("%s%d%s","\n",mas2[0][0]*mas2[0][0]+mas2[0][1]*mas2[1][0],"  ");
printf("%d%s",mas2[0][0]*mas2[0][1]+mas2[0][1]*mas2[1][1],"\n");
printf("%d%s",mas2[0][0]*mas2[1][0]+mas2[1][1]*mas2[1][0],"  ");
printf("%d%s",mas2[1][0]*mas2[0][1]+mas2[1][1]*mas2[1][1],"  ");
return 0;
}
