/*
 * railfence.c


 *
 *  Created on: 15-Dec-2015
 *      Author: Meena
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*



The Rail Fence cipher is a form of transposition cipher that gets its name
from the way in which it is encoded. In the rail fence cipher, the plaintext
is written downwards on successive "rails" of an imaginary fence, then moving up
when we get to the bottom. The message is then read off in rows.

For example, using three "rails" and a message of 'WE ARE DISCOVERED. FLEE AT ONCE',
the cipherer writes out:

W . . . E . . . C . . . R . . . L . . . T . . . E
. E . R . D . S . O . E . E . F . E . A . O . C .
. . A . . . I . . . V . . . D . . . E . . . N . .
Then reads off:

WECRL TEERD SOEEF EAOCA IVDEN
(The cipherer has broken this ciphertext up into blocks of five to help avoid errors.)

*/

/*generic flow

x rows y columns
row is always incrementing

i   j
i+1 j+1
i+2 j+2
i+3 j+3
....j+x-1

......

i+y-1
*/

/*
logic/algorithm

two dimensional array

for the above example
i   j
i+1 j+1
i+2 j+2
i+3 j+1
i+4 j
i+5 j+1
i+6 j+2
i+7 j+1
......

The no of rows and columns specified by user is wrong approach
Instead no of rails(rows) should be taken as input and columns
should be dynamically determined based on strlen

*/

#define MAXDIM 50
main() {

    char pltxt[100];
    char test[10]={NULL};
    int i;
    int row;
    int col;
    int j;
    int lin;
    int ideal_len;
    int traverse;
    int dirfl; /*to help in determining whether to increment or decrement*/
    char matrix[MAXDIM][MAXDIM]; //how to declare a 2-d array?? :(


    printf("Enter a string under 100 chars, avoid special characters");
    fflush(stdout);
    gets(pltxt);

    printf("The input statement is %s", pltxt);
    printf("\n");

    ideal_len=strlen(pltxt)/4;
    printf("Input the no. of rails, let it be less than %d in length:", ideal_len);

    fflush(stdout);
    scanf("%d", &row);
    printf("no. of rows is %d\n", row);



   lin=0;

          printf("\n");
          puts(pltxt);

       for(i=0;i<row;i++)
    {
        for(j=0;j<strlen(pltxt);j++)
        {
        matrix[i][j]='^';
        }
    }

    printf("the num of rows and cols were %d and %d", i, j);

         printf("\n");

         puts(pltxt);



     i=0; j=0;
     dirfl=0;

     while(pltxt[lin]!='\0')
    {

            matrix[i][j] = pltxt[lin];    //is there a way to mark these positions of i and j?
            printf("matrix[%d][%d]=%c\n", i,j,matrix[i][j]);
        /*



     */
          if(!dirfl)
          i++;
          else
          i--;

          if(i==row)
          {
          dirfl=1;
          i--;
          i--;
          }
          if(i==0)
          dirfl=0;


          lin++;
      j++;
   //   printf("%d, %c", j, pltxt[lin]);
    }
 /*printf("the num of rows and cols were %d and %d", row, j);
    printf("\n");
    puts(pltxt);*/

       for(i=0;i<row;i++)
    {
        for(j=0;j<strlen(pltxt);j++)
        {

            printf("%4c",matrix[i][j]);

        }
        printf("\n");
    }

       printf("\n\n\n");


       /*
       for rail fence text
       and decipher rail fence text

       */



for(i=0;i<10;i++)
{
	printf("%4c",test[i]);
}
}


