#include<stdio.h>
int main()
{
int marks;
printf("Enter Your Marks");
scanf("%d",&marks);
if(marks<0 || marks>100)
{
printf("wrong entry");
}
else if(marks<45)
{
printf("Grade F");
}
else if(marks>=40 && marks<54)
{
printf("Grade D");
}
else if(marks>=55 && marks<69)
{
printf("Grade C");
}
else if(marks>=70 && marks<84)
{
printf("Grade B");
}
else if(marks>=85 && marks<100) 

{
printf("Grade A");
}
else 
{
printf("error");
}
return 0;
}
