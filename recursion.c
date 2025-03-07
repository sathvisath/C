//to calculate the sum of n natural numbers
int sum(int n);

#include  <stdio.h>
int main(){
    int number,result;
    
    printf("Enter a positive value:\n");

    scanf("%d",&number);

    result = sum(number); //calling the sum() function with number as param
    printf("Sum = %d ",result);
    return 0;
}

int sum(int n){ //takes n as param
    //we use if else statements to prevent the infinite call

    if(n!=0){
        return n+sum(n-1); //---> here return n is used to return the value of n after one iteration 
    }else{
        return n;
    }
}