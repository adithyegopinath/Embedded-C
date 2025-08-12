#include<stdio.h>
void swap(int*,int*);
void main(void)
{

    int a,b;
        printf("Enter the values of A and B\n");
        scanf("%d %d",&a,&b);
        printf("Before swapping values are a=%d,b=%d\n",a,b);
           swap(&a,&b);
            printf("After swapping values are a=%d,b=%d\n", a,b);
          ;
}

            void swap(int*m,int*n)
            {
                int temp;
                temp=*m;
                *m=*n;
                *n=temp;
            }
