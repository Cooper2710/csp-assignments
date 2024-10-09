#include <stdio.h>

char wierdos[20][10] = {"cooper","sawyer","emma"};
int i;

int main(){
    for (i=0;i<3;i++){
        printf("%s hello\n",wierdos[i]);
    }
    return 0;
}