#include<stdio.h>
#define PI 3.142
#define circle(r) (PI*r*r) // Function like macro
void main()
{
	float radius, area;
	printf("Enter the radius : ");
	scanf("%f", &radius);
	area = circle(radius);
	printf("Area = %.2f", area);
}
