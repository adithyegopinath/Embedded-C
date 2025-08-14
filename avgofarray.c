#include<stdio.h>
void main(void)
{
int size;
printf("enter the size:\n");
scanf("%d",&size);
float arr[size];
int i;
printf("Enter the element\n");
for(i=0;i<size;i++)
{
        scanf("%f",&arr[i]);
}
float sum=0.0;
    for(i=0;i<size;i++)
        sum=sum+arr[i];
    printf("the avg is%f\n",sum/size);
}
