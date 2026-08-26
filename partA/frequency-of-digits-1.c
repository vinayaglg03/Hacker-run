#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1000];
    int count[10]={0};
    scanf("%s",str);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            int digit=str[i]-'0';
            count[digit]++;
        }
    }
    for(int i=0; i<10; i++){
        printf("%d ",count[i]);
    }
    
    return 0;
}

