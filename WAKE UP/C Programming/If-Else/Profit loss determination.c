#include <stdio.h>
int main()
{
    float cost,sell;
    
    printf("Enter the cost price: ");  //COST PRICE INPUT
    scanf("%f",&cost);
    
    printf("Enter the selling price: "); //SELLING PRICE INPUT
    scanf("%f",&sell);  
    
    if(sell>cost)
    {
        printf("Seller made profit\n");
        float pro = sell-cost;
        printf("Total profit incurred = %f",pro);
    }
    
    else
    {
        printf("Seller incurred loss\n");
        float loss = cost-sell;
        printf("Total loss incurred = %f",loss);
    }

  return 0;
}