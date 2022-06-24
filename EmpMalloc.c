#include <stdio.h>
#include <stdlib.h>
struct emp
{
  int eno;
  char ename[30];
  float esal;
};
 int main()
  {
  struct emp *ptr;
  int records,i;
  printf("Enter the number of records: ");
  scanf("%d", &records);
  // Memory allocation for noOfRecords structures
  ptr = (struct emp *)malloc(records * sizeof(struct emp));
  for (i = 0; i < records; i++)
   {
   	printf("Enter employee details:\n");
    scanf("%d %s %f", &(ptr+i)->eno,(ptr+i)->ename,&(ptr+i)->esal);
  }
  printf("Displaying Employee details:\n");
  for (i = 0; i < records; i++)
   {
    printf("%d\t%s\t%f\n", (ptr+i)->eno,(ptr+i)->ename,(ptr+i)->esal);
  }
  free(ptr);

  return 0;
}
