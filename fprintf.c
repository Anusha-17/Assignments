#include<stdio.h>  
main()
{  
   FILE *fp;  
   fp = fopen("file3.txt", "w");//opening file  
   fprintf(fp, "Hello file by fprintf...\n");//writing data into file  
   fclose(fp);//closing file  
}  
