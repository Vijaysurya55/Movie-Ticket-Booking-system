#include<stdio.h>
#include<string.h>
int main()
{
int n,i,ch,amount,price;
char movie[20];
printf("\n\t\tMovie ticket booking system\n");
printf("Enter Movie name:");
scanf("%[^\n]s",movie);
printf("Enter number of tickets:");
scanf("%d",&n);
if(n>100)
printf("House full");
else
{
printf("Select 1 for Balcony");
printf("\nSelect 2 for first class");
printf("\nSelect 3 for second class");
printf("\nSelect 4 for third class");
printf("\nEnter your choice:");
scanf("%d",&ch);
if(ch<1||ch>4)
printf("Invalid choice!");
else
{
switch(ch)
{
case 1:
printf("\nThe amount for first class is 120");
price=120*n;
printf("\nMovie name:%s",movie);
printf("\nNumber of seats:%d",n);
printf("\nTotal Amount:%d",price);
break;

case 2:
printf("\nThe amount for first class is 100");
price=100*n;
printf("\nMovie name:%s",movie);
printf("\nNumber of seats:%d",n);
printf("\nTotal Amount:%d",price);
break;

case 3:
printf("\nThe amount for Second class is 80");
price=80*n;
printf("\nMovie name:%s",movie);
printf("\nNumber of seats:%d",n);
printf("\nTotal Amount:%d",price);
break;

case 4:
printf("\nThe amount for Third class is 50");
price=50*n;
printf("\nMovie name:%s",movie);
printf("\nNumber of seats:%d",n);
printf("\nTotal Amount:%d",price);
break;
}
}
}
return 0;
}