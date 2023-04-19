#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int t,num,i,count,n,sum;
    scanf("%d",&t);
    while(t>0){ sum=0;
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
            sum=sum+num;
    }
  printf("%d\n",sum);
  t--;
    }
    return 0;
}
