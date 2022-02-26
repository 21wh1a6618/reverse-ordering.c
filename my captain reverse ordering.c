#include<stdio.h>
int main()
{
    FILE*fp=NULL;
    int ft,i=0;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
{
   printf("MY CAPTAIN");
   return 0;
}
   fseek(fp,0,SEEK_END);
   ft=ftell(fp);
   while (i<ft)
{
   i++;
   fseek(fp,-i,SEEK_END);
   printf("%c",fgetc(fp));
}
fclose(fp); 
fp = NULL;  
}
