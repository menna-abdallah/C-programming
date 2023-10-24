#include <stdio.h>
#include <stdlib.h>

int holes_num(int number); //q.10
int power2(int n); //q.11
int time(int T);//q.12
int ADDfloat(float n1, float n2 ); //q.13
int Fibonacci(int num); //q.14

int main()
{
    int H_number; //q.10

    int P_number; // q.11

    int temprature; //q.12

    float F_number1,F_number2; //q.13

    int FIB_number, numb;
//q.10

 printf("Count the holes \n");
 printf("Enter a number: ");
 scanf("%d",&H_number);
 printf("%d \n",holes_num(H_number));

 printf("\n");
 printf("\n");



 //q.11
 printf("return 1 if the input number is a power of 2 \n");
 printf("Enter a number: ");
 scanf("%d",&P_number);
 if(power2(P_number)){
    printf("%d \n %d is not power of 2 \n",power2(P_number),P_number );
 }else{
    printf("%d \n %d is power of 2 \n",power2(P_number),P_number );

 }

 printf("\n");
 printf("\n");


// q.12

printf("calculates the required heater activation time \n");
do
    {
        printf("Enter the temperature: ");
        scanf("%d",&temprature);
    }
 while(temprature < 0);

 if (temprature>100)
 {
     printf(" 0 invalid");
 }else
 {
      printf("%d", time(temprature));
 }
printf("\n");
printf("\n");


//q.13
 printf("add two floating numbers \n");
 printf("Enter two numbers: ");
 scanf("%f %f",&F_number1, &F_number2);
 printf("%d",ADDfloat(F_number1,F_number2));

 printf("\n");
 printf("\n");


//q.14
 printf("Fibonacci \n");
 printf("Enter a number: ");
 scanf("%d",&FIB_number);
 printf("Fibonacci series : \n");
 for ( int c = 1 ; c <= FIB_number ; c++ )
    {
        printf("%d\n", Fibonacci(numb));
        numb++;
    }

    return 0;
}

/* q.10
  You are designing a poster which prints out numbers with a unique
style applied to each of them. The styling is based on the number of
closed paths or holes present in a giver number. The number of holes
that each of the digits from 0 to 9 have are equal to the number of closed
paths in the digit. Their values are:
 1, 2, 3, 5 and 7 = 0 holes.
 0, 4, 6, and 9 = 1 hole.
 8 = 2 holes.
Given a number, you must determine the sum of the number of holes for
all of its digits. For example, the number 819 has 3 holes.
Function Description
Complete the function countHoles. The function must return an integer
denoting the total number of holes in num.*/


int holes_num(int number){
    int i=0 , remind;
    if(0==number){
        return 1;
    }else if ( number < 0){
     number *= -1;
    }
while (number > 0)
    {
        remind = number % 10;
        number /= 10;
        switch (remind){
      case 1:
      case 2:
      case 3:
      case 7:
      case 5:
          i =i;
          break;
      case 0:
      case 4:
      case 6:
      case 9:
         i++;
         break;
      case 8:
          i+=2;
          break;
      default:
      break;
      }
    }
    return i;
}

/* q.11
   Write a C function that returns 1 if the input number is a power of 2
and return 0 if the input number is power of 2.
For example: 0, 2 and 16 are power of 2.
 1, 10 and 30 are not power of 2.*/

 int power2(int n){
    int i ,res=2;
    for(i=1; i<=n && res < n;i++){
            res *=2;
    }
    if (n == res ){
        return 1;
    }else{
        return 0;
    }
}

/* q.12
  Write a C function that calculates the required heater activation time
according to the input temperature of water.
- if input temperature is from 0 to 30, then required heating time = 7
mins.
- if input temperature is from 30 to 60, then required heating time = 5
mins.
- if input temperature is from 60 to 90, then required heating time = 3
mins.
- if input temperature is more than 90, then required heating time = 1
mins.
- if temperature is invalid (more than 100), return 0
Example:
Input = 10  output = 7
Input = 35  output = 5 */

int time(int T){

    if (T >= 0 && T <30)
    {
        return 7;
    }
    else if (T>= 30 && T<60 )
    {
        return 5;
    }
    else if (T>= 60 && T<=90 )
    {
        return 3;
    }
    else if (T> 90)
    {
        return 1;
    }
}

/* q.13
   In this challenge write a function to add two floating numbers.
Determine the integer floor of the sum. The floor is the truncated float
value, anything after the decimal point is dropped. For instance
floor(1.1+3.05)=floor(4.15)=4*/

int ADDfloat(float n1, float n2){
int sum =0;
sum = n1 + n2;
return (int)sum;
}


int Fibonacci(int num)
{
   if ( num == 0 )
      return 0;
   else if ( num == 1 )
      return 1;
   else
      return ( Fibonacci(num-1) + Fibonacci(num-2) );
}
