#include <stdio.h>
void calculatesum(int x, int y){
    int sum = x+y;
    printf("The sum of %d and %d is: %d" ,x,y,sum);
}
int main(){
    calculatesum(50,35);
    return 0;
}