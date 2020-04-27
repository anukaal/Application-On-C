

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
    
}

