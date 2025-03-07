#include <stdio.h>
int main(){
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    printf("Number of items: %i\n",items);
    printf("Cost of each item: %.2f %c\n", cost_per_item , currency);
    printf("Total cost : %.2f %c\n",total_cost,currency);

    return 0;

}