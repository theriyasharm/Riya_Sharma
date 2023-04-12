#include<stdio.h>
int main()
{
int a[10],search,i,num;
printf("Enter the number of elements");
scanf("%d", &num);
printf("Enter element");
for(i=0;i<num;i++)
{
 scanf("%d", &a[i]);
 }
 printf("Enter the element to be searched");
 scanf("%d", &search);
 for(i=0;i<num;i++)
 {
   if(a[i]== search)
   {
   printf("Element is at index is %d",i++);
   break;
   }
   }
   if(i==num)
   printf("Element is not found");
   return 0;
   }
