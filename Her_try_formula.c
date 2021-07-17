#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s;
	float area;
	printf("Enter the values of the a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%f\n",area );
	 return 0;
}