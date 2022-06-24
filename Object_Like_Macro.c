#include<stdio.h>
#define PI 3.142 // Object like macro
void main()
{
	float radius, area;
	printf("Enter the radius : ");
	scanf("%f", &radius);
	area = PI*radius*radius;
	printf("Area = %.2f", area);
}
