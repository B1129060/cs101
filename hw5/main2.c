#include <stdio.h>

int main() {
    double x = 1;
    double sum = 0;
    while(sum < 3.14159){
        sum += ((4 / x) - (4 / (x + 2)));
        x += 4;
       
    }
    printf("the minimum value of x for the calculation of PI = 3.14159 is 4/%.0f", x);
    return 0;
}
