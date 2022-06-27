#include<stdio.h>
int areaRectangle(int, int);
int main()
{
    int length, breadth, area;
    int (*fp)(int, int); //function pointer declaration
    printf("Enter length and breadth of a rectangle\n");
    scanf("%d%d", &length, &breadth);
    fp = areaRectangle;
    area = (*fp)(length, breadth); 
    printf("Area of rectangle = %d", area);
    return 0;
}
int areaRectangle(int l, int b) 
{
    int area_of_rectangle = l * b;
    return area_of_rectangle;
}

