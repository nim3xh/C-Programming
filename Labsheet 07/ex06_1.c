 #include<stdio.h>
 int main()
 {
     int number, count=0;

     printf("Enter a number:");
     scanf("%d",&number);

     while (number!=0)
     {
       count++;
       number /= 10;
     }

     printf("Number of digits are %d.\n",count);

     return 0;
 }
