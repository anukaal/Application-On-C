

#include<stdio.h>
#include<string.h>

void DisplayOrder(struct PizzaTypes pizzaCart[100], struct PizzaCost CostonSize[12] , char itemNames[12][100] , int sidesCost[4]);

struct PizzaTypes
{
    int smallQuantity , mediumQuantity , largeQuantity , others , freshPan , chesseBurst , whaetThinCrust;
};

struct PizzaCost
{
    int smallCost , mediumCost , largeCost , freshPanCost , chesseBurstCost , wheatThinCrustCost;
};

int main()
{
    int i=0,c=1,j=0,mainChoice,cost[20]={99,195,395,155,295,445,155,295,445,195,365,545,155,295,445,225,425,635,235,455,685,235,455,685} , totalCost=0 , a[10];
    char name[20];
    char itemNames[12][100]={
        "Margherita(Veg)",
        "Spicy Triple Tango(Veg)",
        "Double Cheese Margerita(Veg)",
        "Farm House(Veg)",
        "Cheese and Barbeque Chicken(Non Veg)",
        "Chicken Fiesta(Non Veg)",
        "Chicken Mexican(Non Veg)",
        "Chicken Golden Delight(Non Veg)",
        "Zingy Parcel Veg",
        "Zingy Parcel Non Veg",
        "Taco Mexicana Veg",
        "Taco Mexicana Non Veg"
    };
    int sidesCost[4]={29,35,119,129};
    // int zingyParcelVeg=29,zingyParcelNonVeg=35,tacoMexicanaVeg=119,tacoMexicanaNonVeg=129;
    struct PizzaTypes pizzaCart[100];
    struct PizzaCost CostonSize[12];
    for ( i = 0; i < 12; i++)
    {
        pizzaCart[i].smallQuantity=0;
        pizzaCart[i].mediumQuantity=0;
        pizzaCart[i].largeQuantity=0;
        pizzaCart[i].freshPan=0;
        pizzaCart[i].whaetThinCrust=0;
        pizzaCart[i].chesseBurst=0;
        pizzaCart[i].others=0;
    }
    i=0;
    while (i<24)
    {
        CostonSize[j].smallCost=cost[i++];
        CostonSize[j].mediumCost=cost[i++];
        CostonSize[j].largeCost=cost[i++];
        CostonSize[j].freshPanCost=30;
        CostonSize[j].chesseBurstCost=95;
        CostonSize[j].wheatThinCrustCost=40;
        j++;
    }
    do{
        if(c==1){
            printf("Enter\n1 - Veg Pizza\n2 - Chicken Pizza\n3 - Sides\n4 - Exit\n");
            scanf("%d",&mainChoice);
        }
    }
    
    
    
}

