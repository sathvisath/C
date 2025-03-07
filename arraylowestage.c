#include <stdio.h>
int main(){
    int ages[]={20, 22, 18, 35, 48, 26, 87, 70};
    int length=sizeof(ages)/sizeof(ages[0]);
    int i;
    int lowestage=ages[0];

    for (i=0;i<length;i++){
        if(lowestage>ages[i]){
            lowestage=ages[i];
        }
    }
    printf("The lowest age is: %d",lowestage);
}