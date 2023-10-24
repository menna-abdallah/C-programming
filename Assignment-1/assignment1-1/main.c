#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i;
 int num1,num2,result; // q.1

 float C,F;// q.3

 float r,area,circumference; // q.4

 char letter; // q.5

 int x,y; // q.6

 int a,b,c; // q.7

 int positive; // q.8

 int degree; // q.9

 int number1,number2; // q.10
 char op;

 int sum=0; // q.11

 int number;
 long long int factorial=1; //q.12

 int positive2, prime; // q.13

 int base,power,res=1; // q.15



    /* q.1
    Write a program that take two integers from the user
and print the results of this equation:
Result = ((num1 + num2) * 3) – 10
*/

 printf("Result = ((num1 + num2) * 3) – 10 \n");
 printf("Enter two numbers: ");
 scanf("%d %d",&num1,&num2);

 result = ((num1 + num2)*3) - 10;
 printf("Result is %d\n", result);
 printf("\n");



 /*q.2
    Write a program that print your name and your grade
in a new line.*/


 printf("print my name and my grade in a new line \n");
 printf("My name is Menna \n I am graduated \n");
 printf("\n");



/*q.3
   Write a program for converting temperature from
degrees Celsius to degrees Fahrenheit,
given the formula:
F = C x (9/5)
+ 32*/

 printf("converting temperature \n");
 printf("Enter the Temperature In Degrees Celsius: ");
 scanf("%f",&C);

 F= C * (9/5)+ 32;

 printf("The Temperature In Degrees Fahrenheit is : %f \n",F);
 printf("\n");



/*q.4
   Write a program that reads the radius of a circle and
calculates the area and circumference then prints the
results*/

 printf("calculates the area and circumference --> 'r>0' \n");
 do
    {
        printf("Enter the circle radius: ");
        scanf("%f",&r);
    }
 while (r<=0);

 area = r*r*(22/7);
 circumference= 2*(22/7)*r;

 printf("The area of the circle is: %f \n",area);
 printf("The circumference of the circle is: %f \n",circumference);
 printf("\n");



/*q.5
  Write a program to print the ASCII value of a character
input by the user.*/

 printf("print the ASCII value of a character \n");
 printf("Enter a letter: ");
 scanf(" %c",&letter);
 printf("the ASCII code for the letter is : %d \n",letter);
 printf("\n");



/*q.6
   Write a program that print the relation between two
integer number if those numbers are equal, not equal and
which one contain the higher value.*/

 printf("the relation between two integer number \n");
 printf("Enter two numbers: ");
 scanf("%d %d",&x,&y);

 if(x==y)
    {
        printf("The two numbers is equal \n");
    }
 else if(x>y)
    {
        printf("The two numbers are not equal %d is higher than %d \n",x,y);
    }
 else
    {
        printf("The two numbers are not equal %d is higher than %d \n",y,x);
    }
 printf("\n");



/*q.7
   Write a program that takes three integers, and prints
out the smallest number.*/


 printf("prints out the smallest number \n");
 printf("Enter three numbers: ");
 scanf("%d %d %d",&a,&b,&c);
    if(a ==b && b==c){
        printf("the three numbers are same \n");
    }
  else if (a > b )
    {
        if (b > c)
            {
                printf("The smallest number is %d \n", c);
            }
        else
            {
                printf("The smallest number is %d \n", b);
            }
    }

 else if (a>c)
    {
        printf("The smallest number is %d \n", c);
    }
    else
    {
        printf("The smallest number is %d \n", a);

    }
 printf("\n");



/*q.8
  Write a program that reads a positive integer and
checks if it is a perfect square.*/


 printf("checks if the number is a perfect square \n");
 do
    {
        printf("Enter a positive number: ");
        scanf("%d",&positive);
    }
 while (positive <= 0);
 int num = 0;
 for(i=1; i<=positive;i++)
     {
        if(positive == i*i )
            {
                num = 1;
            }
     }
     if(num){
            printf ("%d is a perfect square \n",positive);
     }else{
    printf ("%d is not a perfect square \n",positive);
     }
 printf("\n");



/*q.9
  Write a program that reads a student grade percentage
and prints "Excellent" if his grade is greater than or equal
85, "Very Good" for 75 or greater; "Good" for 65, "Pass"
for 50, "Fail" for less than 50.*/


 printf("reads a student grade \n");
 do
    {
        printf("Enter the student's degree [0-100]: ");
        scanf("%d",&degree);
    }
 while(degree < 0 || degree >100);

    if (degree < 50)
    {
        printf("fail \n");
    }
    else if (50 == degree )
    {
        printf("pass \n");
    }
    else if (65 == degree)
    {
        printf("good \n");
    }
    else if (degree >= 75 && degree < 85)
    {
        printf("very good \n");
    }
    else if (degree >= 85 && degree <= 100)
    {
        printf("excellent \n");
    }
 printf("\n");



/* q.10
Write a program to make a simple calculator using
switch-case. The calculator takes the operation
(+ or – or * or /) and takes the two input arguments and
print the results.*/


 printf("simple calculator \n");
 printf("Enter number 1: ");
 scanf("%d",&number1);
 printf("Enter number 2: ");
 scanf("%d",&number2);
 printf("Enter the operator: ");
 scanf(" %c",&op);

 switch (op)
    {
        case '+' :
            printf ("%d \n", number1+number2);
        break;
        case '-' :
            printf ("%d \n", number1-number2);
        break;
        case '*' :
            printf ("%d \n", number1*number2);
        break;
        case '/' :
            if (number2 == 0)
                {
                    printf("undifined \n");
                }
            else
            {
            printf ("%f \n", (float)number1/(float)number2);
            }
        break;
        default:
        break;
    }
 printf("\n");



/* q.11
   Print sum of first 100 integers. (With data validation)*/


 for(i=1;i<=100;i++)
    {
		sum+=i;
	}
 printf("The sum of first 100 integers is %d\n",sum);

 printf("\n");



/* q.12
   Write a program that reads a positive integer and
computes the factorial.*/

 printf("computes the factorial \n");
 do
    {
        printf("Enter a number: ");
        scanf("%d",&number);
    }
 while(number < 0);

 for(i=number;i>=1;i--)
    {
        factorial = factorial*i;
    }
 printf("The factorial of %d is %lld \n",number,factorial);
 printf("\n");



/*q.13
  Write a program that reads a positive integer and
checks if it is a prime*/


 printf("checks if the number is a prime \n");
 do
    {
        printf("Enter a positive number: ");
        scanf("%d",&positive2);
    }
 while (positive2 <= 0);

 if (1 == positive2)
    {
        printf(" 1 is not prime \n");
    }
 else
    {
        for(i =2; i < positive2 && positive2%i ==0 ;)
            {
                i++;
            }
            if (i>2)
                {
                    printf("%d is not prime \n", positive2);
                }
            else
                {
                    printf("%d is prime \n", positive2);
                }
    }
 printf("\n");



/* q.14
   Write a program to display English alphabets from A to Z*/

 printf("display English alphabets from A to Z \n");
 for (i= 65 ; i<=90 ; i++)
    {
        printf("%c   ",i);
    }
 printf("\n");



/* q.15
   Write a program to calculate the power of a number.
The number and its power are input from user.*/


 printf("calculate the power of a number \n");
 printf("Enter the number: ");
 scanf("%d",&base);
 printf("Enter the power: ");
 scanf("%d",&power);

 if (0 == power)
    {
        printf("%d power %d = 1", base, power);
    }
 else
    {
        for(i=1; i<= power; i++)
            {
                res *= base;
            }
 printf("%d power %d is %lld",base,power,res);
 printf("\n");

}
return(0);
}
