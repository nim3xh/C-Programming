#include<stdio.h>
double diameter(double radius); //Function prototype for diameter
double circumference(double radius); //Function prototype for circumference
double area(double radius); //Function prototype for area
int main()
{
	double radius,d,c,a; 
	
	printf("Enter Radius:");
	scanf("%lf",&radius);	//get value for radius
	
	d=diameter(radius); //Calls the diameter function
	c=circumference(radius); //Calls the circumference function
	a=area(radius); //Calls the area function
	
	printf("\nDiameter = %.2lf\nCircumference = %.2lf\nArea = %.2lf\n",d,c,a);
	
	return 0;
}
//Define functions
double diameter(double radius)
{
	double d;
	d=2*radius;
	return d;
}
double circumference(double radius)
{
	double c;
	c=2*3.14*radius;
	return c;
}
double area(double radius)
{
	double a;
	a=3.14*radius*radius;
	return a;
}
	
