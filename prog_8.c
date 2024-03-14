
#include <stdio.h>

int main()
{
   for(int i=1;i<=5;i++){
       for(int j=1;j<=5;j++){
           if(i==1  || j==1 || i==3 ){
               printf("* ");
           }else{
               printf("  ");
           }
          
       }
        printf("\n");
   }

    return 0;
}
