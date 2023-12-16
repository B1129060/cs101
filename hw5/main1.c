#include <stdio.h>

int main(){
    int n = 7;
    int a = 1;
    char c;
    for(int i = 1; i <= n; i++){
        if(i <= n - a){
            printf(" ");
        }
        else{
            for(int j = 1; j <= a; j++){
                printf("%d ", a);
            }
            a++;
            if(a > n){
                break;
            }
            printf("\n");
            i = 0;
        }
        
    }
    return 0;
}
