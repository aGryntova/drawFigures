#include <stdio.h>
#include <stdlib.h>

int main()
{
   int height;
   int i;
   int j;
    printf("Enter your height :");
    scanf( "%i", &height);
        if(height <= 0)
        printf("You entered a value less than or equal to 0! try again\n");
    else{

//Draws an triangle of height x and a
//maximum width of x, where each new line is
//longer by one character

       for ( i = 1; i<= height; i++){

            for ( j = 1; j <= i; j++)
            printf("%c",'*');
            printf("\n");
        }
        printf("\n");

//Draws an inverted triangle of height x and a
//maximum width of x, where each new line is
//shorter by one character

        for ( i=1;i<=height;i++){

            for( j=0;j<=(height-i);j++)
            printf("%c",'*');
            printf("\n");
        }
        printf("\n");

//Draws a Christmas tree inverted  of height x and a
//maximum width of x

        for ( i = 1; i <= height; i++){

            for ( j = 1; j <= (height+i); j++){

                if( j<=(height-i+1)){
                    printf("%c",' ');
                }else{
                    printf("%c",'*');
                }
            }
            printf("\n");
            }

//Draws a "*" stump, depending on the entered height

         for ( i = 0; i<= height; i++){
                if( i == height){
                    printf("%c",'*');
                }else{
                    printf("%c",' ');
                }
        }
         printf("\n");
    }
    return 0;
}
