
#include<stdio.h>
#define max_size 256

int main()
{
    char str[max_size];
    printf("Enter a String: ");
    scanf("%s",str);

   int i ,j =0 ; int freq =0;
      while (str[i] !='\0'){

        for(j=0 , freq =0; str[j]!= '\0';j++){
            if (str[i]==str[j]){
                freq++;
            }
        }

        printf("The frequency of %c is %d \n",str[i],freq);
        i++;
    }
    return 0;
}



   /* int i;
    int freq[max_size] = {0};

    for(i = 0; str[i] != '\0'; i++) //m
    {
        freq[str[i]]++; //freq[m]++
    }
    for(i = 0; i < max_size; i++)
    {
        if(freq[i] != 0)
        {
            printf("The frequency of %c is %d\n", i, freq[i]);
        }
    }*/




















