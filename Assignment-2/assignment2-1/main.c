#include <stdio.h>
#include <stdlib.h>

int cube(int number); //q.1
void isChar(char c);//q.2
void isPositive(int n);//q.3
int cal(int n1,int n2,char op);//q.4
int isOdd(num);//q.5
char toUpper(char low);//q.6
int isMultiple(int integer1,int integer2); //q.7
int prime (int num1 , int num2);


int main()
{
   int c_number; //q.1

   char ch; //q.2

   int p_number; //q.3

   int number1,number2; //q.4
   char operate;

   int O_number;//q.5

   char LOW_char;//q.6

   int M_number1,M_number2; //q.7

   int i_number1,i_number2; //q.8

   int S_number1,S_number2;

//Q.1
  printf("prints the cube of any number \n");
  printf("Enter a number: ");
  scanf("%d",&c_number);
  printf("The cube of %d is %d \n", c_number,cube(c_number));

  printf("\n");

  //Q.2
  printf("checks if the character is alphabet \n");
  printf("Enter a character: ");
  scanf(" %c",&ch);
  isChar(ch);

  printf("\n");
  printf("\n");


   //Q.3
  printf("check if the number is positive or negative \n");
  printf("Enter a number: ");
  scanf("%d",&p_number);
  isPositive(p_number);

  printf("\n");
  printf("\n");

 //Q.4
 printf("simple calculator \n");
 printf("Enter number 1: ");
 scanf("%d",&number1);
 printf("Enter number 2: ");
 scanf("%d",&number2);
 printf("Enter the operator: ");
 scanf(" %c",&operate);
 cal(number1,number2,operate);

 printf("\n");
 printf("\n");

 //Q.5
 printf("check if the input is an even number or an odd \n 1 --> odd \n 0 --> even \n \n");
 printf("Enter a number: ");
 scanf("%d",&O_number);
 printf("%d",isOdd(O_number));

 printf("\n");
 printf("\n");

 //Q.6
 printf("converts the any letter from lowercase to uppercase \n");
 printf("Enter a character: ");
 scanf(" %c",&LOW_char);
 printf("%c \n",toUpper(LOW_char));

 printf("\n");
 printf("\n");

 //Q.7
 printf("checks if the first number is multiple of the second. \n");
 printf("Enter two numbers: ");
 scanf("%d %d",&M_number1,&M_number2);
 if (isMultiple(M_number1,M_number2)){
     printf( "%d is not a multiple of %d.\n",M_number1 , M_number2 );
 } else {
     printf( "%d is a multiple of %d.\n",M_number1 , M_number2 );
 }

 printf("\n");
 printf("\n");

//Q.8
 printf("display Prime Numbers between Intervals \n");
 printf("Enter two numbers: ");
 scanf("%d %d", &i_number1,&i_number2);
 prime(i_number1,i_number2);

 printf("\n");
 printf("\n");

//Q.9
 printf("swaps the value \n");
 printf("Enter two numbers: ");
 scanf("%d %d", &S_number1,&S_number2);
 swap(S_number1,S_number2);
 printf("\n");

    return 0;
}


/*q.1
  Write a C Function that prints the cube of any number.
  */


int cube(int number)
{
    return number*number*number;
}



/* q.2
 Write a C Function that takes one character and checks if it alphabet
or not.*/


void isChar(char c)
{
    if (c >= 65 && c <= 90)
    {
        printf("%c is an upper case alphabet", c);
    }
    else if( c >=97 && c <=122)
    {
        printf("%c is a lower case alphabet" ,c);

    }
    else
    {
        printf("%c is not an alphabet");
    }

}


/* Q.3
 Write a C Function that check if the number if positive or negative.*/


void isPositive(n)
{
    if (n>0)
    {
        printf("%d is positive",n);
    }
    else if (0==n)
    {
        printf("0 is not positive or negative");
    }
    else
    {
        printf("%d is negative",n);
    }
}


/* q.4
 Write a C Function that return the addition or subtraction or
multiplication or division for two numbers. The function should take the
required operation and two numbers as arguments. It also should check
that the input operation is one of those operation that mentioned before
and if not it should return error. The function should be implemented
using switch case.*/


int cal(int n1,int n2,char op)
{
    if (op == '+' || op == '-'|| op =='*'|| op =='/')
        {
            switch (op){
                case '+' :
                    printf ("%d \n", n1+n2);
                break;
                case '-' :
                    printf ("%d \n", n1-n2);
                break;
                case '*' :
                    printf ("%d \n", n1*n2);
                break;
                case '/' :
                    if (n2 == 0){
                            printf("undifined");
                        }
                    else{
                    printf ("%f \n", (float)n1/(float)n2);
                    }
                break;
                default:
                break;
            }}
        else{
            printf("ERROR");
        }
}


/* q.5
  Write a C function to check if the input is an even number or an odd
number, if even number return 0 if odd number return 1.
Example:
Input 7, Output = 1 (Odd)
Input 6, Output = 0 (Even)*/


int isOdd(num){
 if(num %2 ==0)
 {
     return 0;
 }else{
     return 1;
 }
}



/*q.6
 Write C Function that converts the any letter from lowercase to
uppercase.*/



char toUpper(char low){

    if( low >=97 && low <=122){
        low = low - 32;
        return low;
    }else if( low >=65 && low <=90)
    {
        printf("%c is already an upper alphabet",low);
    }else{
        printf("please enter a character");
    }
}


/*q.7
  Write a C Function that reads two integers and checks if the first is
multiple of the second.*/



int isMultiple(int integer1,int integer2){
 return integer1 % integer2;
}


/*q.8
   Write a C Function that display Prime Numbers between Intervals (two
numbers) by Making Function.*/


int prime (int num1 , int num2){
    int i,j;
for(i=num1; i<= num2; i++){

        for(j =1; j <= i && i%j ==0 && i!= 1 ;)
            {
                j++;
            }
            if (2 == j)
                {
                  printf("%d \n" , i);
                }
    }
}


/* q.9
  Write a C Function that swaps the value of two integer numbers.
*/


void swap(int a ,int b){
int temp = a;
a =b;
b =temp;
printf("%d %d", a,b);
}



