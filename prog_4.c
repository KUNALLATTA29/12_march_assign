
#include <stdio.h>

int main()
{
   for(int i=1;i<=6;i++){
       for(int j=1;j<=6;j++){
           if(i==1 || i == 3 || j==1 || j==6 || i==6 ){
               printf("*");
           }else{
               printf(" ");
           }
          
       }
        printf("\n");
   }

    return 0;
}
