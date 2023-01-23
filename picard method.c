#include<stdio.h>
#define Y1(x) (1+(x*x*x)/3-x)
#define Y2(x) (1+(x*x*x)/3-x-(x*x*x*x*x*x*x)/63+(x*x*x)/3+(x*x*x*x)/6-(2*x*x*x*x*x)/15-(x*x))

void main()
{
   float s=0,e=2,h,temp;
   float Y1[10],Y2[10],Y3[10],Y4[10];
   int count;
  /* printf("\ninitial value: ");
   scanf("%f",&s);
   printf("\nfinal value: ");
   scanf("%f",&e);*/
   printf("\nenter the size of interval: ");
   scanf("%f",&h);
   for(temp=s,count=0;temp<=e;temp=temp+h,count++)
   {
       Y1[count]=Y1(temp);
       Y2[count]=Y2(temp);

   }
   printf("\nX\n");
    for(temp=s;temp<=e;temp=temp+h)
    {
        printf("%f",temp);
    }
   printf("\nY(1)\n");
   for(temp=s,count=0;temp<=e;temp=temp+h,count++)
   {
       printf("%f",Y1[count]);
   }
   for(temp=s,count=0;temp<=e;temp=temp+h,count++)
   {
        printf("\t%f",Y2[count]);
   }
   /*for(temp=s,count=0;temp<=e;temp=temp+h,count++)
   {
        printf("%f",Y3[count]);
   }
   for(temp=s,count=0;temp<=e;temp=temp+h,count++)
   {
        printf("%f",Y4[count]);
   }*/
}
