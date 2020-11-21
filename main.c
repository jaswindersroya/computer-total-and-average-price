#include <stdio.h>
//WAP to calculate total and average of laptop,mobile and book price            ....1

//formula: total_price = laptop_price + mobile_price + book_price               ....2
// average_price = total_price

//declare variables                                                             ....3
int main(){
    
    float laptop_price, mobile_price, book_price, total_price,average_price;

    //think about variables in memory                                           ....4

    //get user input for variables                                              ....5
    
    printf("calculate total and average for given prices:-\n");
    printf("***********************************************\n");
    printf("enter laptop price: ");
    scanf("%f",&laptop_price);
    printf("enter mobile price: ");
    scanf("%f",&mobile_price);
    printf("enter book price: ");
    scanf("%f",&book_price);
    printf("**********************************************\n");
    
    //calculate total_price and average_price                                   ....6
    
    total_price = laptop_price + mobile_price + book_price;
    average_price = total_price / 3;
    
    //display output                                                            ....7
    printf("total price for all items is %f and average price is %f ", total_price, average_price);
    
}
    






