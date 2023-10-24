#include <stdio.h>

int main() {

 int number,remaind , reverse = 0; // q.16

 int i,num; // q.17

 int j,k, height; // q.18, q.19

 int width; // q.20

 /* q.16
 Write a program to reverse a number.*/

  printf("reverse a number \n");
  printf("Enter an number: ");
  scanf("%d", &number);

  while (number != 0)
    {
        remaind = number % 10;
        reverse = reverse * 10 + remaind;
        number /= 10;
    }

  printf("Reversed number = %d \n", reverse);
  printf("\n");



 printf("Count the digits \n");
 printf("Enter a number: ");
 scanf("%d",&num);
 i=0;
 do
    {
        num /= 10;
        ++i;
    }
 while (num != 0);

  printf("Number of digits: %d", i);
  printf("\n");




/* q.18
  Write a program to display half pyramid using stars
pattern.
*
* *
* * *
* * * *
* * * * *
*/


 printf(" print half pyramid \n");
 printf("Enter the height of the pyramid: ");
 scanf("%d", &height);
 for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
        printf("\n");
   }
 printf("\n");




 /* q.19
  Write a program to display inverted half pyramid using
stars pattern.
* * * * *
* * * *
* * *
* *
*
*/

 printf(" print half pyramid (reversed) \n");
 printf("Enter the height of the pyramid: ");
 scanf("%d", &height);
 for (i = height; i >=1; i--)
    {
        for (j = i; j >=1 ; j--)
            {
                printf("* ");
            }
        printf("\n");
   }
 printf("\n");




/* q.20
  Write a program to display a full pyramid using stars
pattern.
  *
 ***
 *****
*******
*********
*/

 printf(" print a pyramid \n");
 printf("Enter the height of the pyramid: ");
 scanf("%d", &height);
 k = 0;
 for (i = 1; i <= height; i++,k=0)
    {
        for (j= 1; j <= height - i; j ++)
            {
                printf("  ");
            }
        while (k != 2 * i - 1)
            {
                printf("* ");
                k++;
            }
        printf("\n");
   }
  printf("\n");




/* q.20
 Write a program to display cross or X-shape using stars
pattern.
 *      *
   *  *
     *
    * *
  *     *
*/


    printf(" print x  \n");
    printf("Enter the height: ");
    scanf("%d", &height);

    width = height * 2 - 1;

    for(i=1; i<=width; i++)
        {
            for(j=1; j<=width; j++)
                {
                    if(j==i || (j==width - i + 1))
                        {
                            printf("*");
                        }
                    else
                        {
                            printf(" ");
                        }
                }

            printf("\n");
        }

     return 0;
}

