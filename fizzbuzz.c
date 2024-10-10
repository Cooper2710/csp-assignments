#include <stdio.h>
#include <string.h>
int i;
int usr;
char one[50];
char two[50];
char three[50];
int main(){
    printf("Give me a number\n");
    scanf("%d", &usr);
    printf("give me a short word:\n");
    scanf("%s", &one); 
    printf("give me another short word:\n");
    scanf("%s", &two);
    strcat(three,one);
    strcat(three,two);
    //loop that count to 50
    for(i=0;i<=usr;i++){
        
        //replace numbers divisible by 3 and 5 with "FizzBuzz"
        if(i%3==0 && i%5==0){
            strcat(one,two);
            printf("%s\n", three);
        
        

        //replace numbers divisible by 3 with "Fizz"
        }else if (i%3==0){
            printf("%s\n", two);
        
        
        //replace numbers divisible by 5 with "buzz"
        }else if(i%5==0){
        printf("%s\n", two);
        
        }else{
        //print the number
    
        printf("%d\n", i);
        }
    }
     return 0;
    }
