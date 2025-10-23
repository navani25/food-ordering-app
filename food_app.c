#include<stdio.h>

int main()
{
    int hotel, price = 0, total = 0;

    printf(" \n \t \t WELCOME TO FOOD APPLICATION ");
    printf(" \n \n \t SELECT YOUR HOTEL ");
    printf(" \n \n \t \t 1.VEG HOTEL \n \t \t 2.NON-VEG HOTEL \t");
    scanf("%d", &hotel);

    switch (hotel)
    {
        case 1: // VEG HOTEL
        {
            int veg, food, qty, rep;
            printf(" \n \t THANK YOU FOR SELECTING VEG HOTEL \n");
            printf(" \n \t SELECT YOUR FAVORITE HOTEL \n ");
            printf(" \n 1.HOTEL MADHARAS \n 2.VEGETARIAN HOT \n 3.VEG RICE \n 4.CAFE SOUL \n 5.ONLY NATURE \t");
            scanf("%d", &veg);

            switch (veg)
            {
                case 1:
                {
                    printf(" \n \t \t THANK YOU FOR SELECTING HOTEL MADHARAS \n");
dishes:
                    printf(" \n \t \t SELECT YOUR FOOD \n");
                    printf(" 1.IDLI \n 2.DHOSA \n 3.PONGAL \n 4.POORI \n 5.PANEER TIKKA \t");
                    scanf("%d", &food);

                    switch (food)
                    {
                        case 1: price = 10; break;
                        case 2: price = 30; break;
                        case 3: price = 50; break;
                        case 4: price = 20; break;
                        case 5: price = 120; break;
                        default: printf(" Invalid food selection"); price = 0; break;
                    }

                    printf(" \n \t ENTER THE QUANTITY:- ");
                    scanf("%d", &qty);
                    price *= qty;
                    total += price;
                    printf(" \n TOTAL AMOUNT :-%d", price);
                    printf("\n Select \n 0.Continue\n 1.Billing");
                    scanf("%d", &rep);
                    if(rep == 0) goto dishes;
                    break;
                }

                case 2: // VEGETARIAN HOT
                {
                    printf(" \n \t \t THANK YOU FOR SELECTING VEGETARIAN HOT \n");
dishes_veg2:
                    printf(" \n \t SELECT YOUR FOOD \n");
                    printf(" 1.PANEER MASALA \n 2.VEG FRIED RICE\n 3.PANEER FRIED RICE \n 4.VEG BIRIYANI \n 5.SAMOSA  \t");
                    scanf("%d", &food);

                    printf(" \n \t ENTER THE QUANTITY:- ");
                    scanf("%d", &qty);

                    switch(food)
                    {
                        case 1: price = 80 * qty; break;
                        case 2: price = 120 * qty; break;
                        case 3: price = 180 * qty; break;
                        case 4: price = 150 * qty; break;
                        case 5: price = 50 * qty; break;
                        default: printf(" Invalid food selection"); price = 0; break;
                    }
                    total += price;
                    break;
                }

                case 3: // VEG RICE
                {
                    printf(" \n \t \t THANK YOU FOR SELECTING VEG RICE \n");
dishes_veg3:
                    printf(" \n \t SELECT YOUR FOOD \n");
                    printf(" 1.VEG CURRY \n 2.VEG KHICHDI\n 3.VEG GOBI \n 4.VEG ALOO \n 5.VEG KORMA  \t");
                    scanf("%d", &food);
                    printf(" \n \t ENTER THE QUANTITY:- ");
                    scanf("%d", &qty);

                    switch(food)
                    {
                        case 1: price = 60 * qty; break;
                        case 2: price = 100 * qty; break;
                        case 3: price = 90 * qty; break;
                        case 4: price = 160 * qty; break;
                        case 5: price = 90 * qty; break;
                        default: printf(" Invalid food selection"); price = 0; break;
                    }
                    total += price;
                    break;
                }

                case 4: // CAFE SOUL
                {
                    printf(" \n \t \t THANK YOU FOR SELECTING CAFE SOUL \n");
dishes_veg4:
                    printf(" \n \t SELECT YOUR FOOD \n");
                    printf(" 1.THE COLD COFFEE \n 2.COLD MOCCA \n 3.KITKAT SHAKE \n 4.COLD CHOCOLATE \n 5.HOT TEA  \t");
                    scanf("%d", &food);
                    printf(" \n \t ENTER THE QUANTITY:- ");
                    scanf("%d", &qty);

                    switch(food)
                    {
                        case 1: price = 60 * qty; break;
                        case 2: price = 110 * qty; break;
                        case 3: price = 140 * qty; break;
                        case 4: price = 130 * qty; break;
                        case 5: price = 65 * qty; break;
                        default: printf(" Invalid food selection"); price = 0; break;
                    }
                    total += price;
                    break;
                }

                case 5: // ONLY NATURE
                {
                    printf(" \n \t \t THANK YOU FOR SELECTING ONLY NATURE \n");
dishes_veg5:
                    printf(" \n \t SELECT YOUR FOOD \n");
                    printf(" 1.PANEER MOMOS \n 2.VEG SPRING ROLL \n 3.VEG CHILLI \n 4.VEG MOMOS \n 5.FRENCH FRIES  \t");
                    scanf("%d", &food);
                    printf(" \n \t ENTER THE QUANTITY:- ");
                    scanf("%d", &qty);

                    switch(food)
                    {
                        case 1: price = 85 * qty; break;
                        case 2: price = 90 * qty; break;
                        case 3: price = 180 * qty; break;
                        case 4: price = 150 * qty; break;
                        case 5: price = 70 * qty; break;
                        default: printf(" Invalid food selection"); price = 0; break;
                    }
                    total += price;
                    break;
                }

                default:
                    printf(" Invalid VEG hotel selection");
                    break;
            }
            break;
        }

        case 2: // NON-VEG HOTEL
        {
            int nonveg, food, qty, rep;
            printf(" \n \t THANK YOU FOR SELECTING NON VEG HOTEL ");
            printf(" \n \t  SELECT YOUR FAVORITE HOTEL \n ");
            printf(" \n 1.BIRIYANI CENTER \n 2.KARUNAS \n 3.BANANA LEAF \n 4.ACORD \n 5.FAST FOOD");
            scanf("%d", &nonveg);

            switch(nonveg)
            {
                case 1: // BIRIYANI CENTER
                {
dishes_nonveg1:
                    printf(" \n \t THANK YOU FOR SELECTING BIRIYANI CENTER \n");
                    printf(" \n \t SELECT YOUR FAVORITE FOOD \n");
                    printf(" 1.NON VEG MEALS \n 2.CHICKEN 65 \n 3.CHICKEN BIRIYANI \n 4.MUTTON BIRIYANI \n 5.MUTTON CHOKA ");
                    scanf("%d", &food);
                    printf(" \n \t ENTER THE QUANTITY:- ");
                    scanf("%d", &qty);

                    switch(food)
                    {
                        case 1: price = 100 * qty; break;
                        case 2: price = 80 * qty; break;
                        case 3: price = 120 * qty; break;
                        case 4: price = 180 * qty; break;
                        case 5: price = 95 * qty; break;
                        default: printf(" Invalid food selection"); price = 0; break;
                    }
                    total += price;
                    printf("\n Select \n 0.Continue\n 1.Billing");
                    scanf("%d", &rep);
                    if(rep == 0) goto dishes_nonveg1;
                    break;
                }

                case 2: // KARUNAS
                {
dishes_nonveg2:
                    printf(" \n \t THANK YOU FOR SELECTING KARUNAS \n");
                    printf(" \n \t SELECT YOUR FAVORITE FOOD \n");
                    printf(" 1.SEA FOOD  \n 2.FISH BIRIYANI \n 3.FISH THOKKU \n 4.SEA MEALS  \n 5.CHICKEN FRIED RICE");
                    scanf("%d", &food);
                    printf(" \n \t ENTER THE QUANTITY:- ");
                    scanf("%d", &qty);

                    switch(food)
                    {
                        case 1: price = 180 * qty; break;
                        case 2: price = 160 * qty; break;
                        case 3: price = 120 * qty; break;
                        case 4: price = 200 * qty; break;
                        case 5: price = 140 * qty; break;
                        default: printf(" Invalid food selection"); price = 0; break;
                    }
                    total += price;
                    printf("\n Select \n 0.Continue\n 1.Billing");
                    scanf("%d", &rep);
                    if(rep == 0) goto dishes_nonveg2;
                    break;
                }

case 3: // BANANA LEAF
{
dishes_nonveg3:
    printf(" \n \t THANK YOU FOR SELECTING BANANA LEAF \n");
    printf(" \n \t SELECT YOUR FAVORITE FOOD \n");
    printf(" 1.CHICKEN NOODLES  \n 2.ALOO GOBI \n 3.MASALA COLA \n 4.ROSY COFFEE  \n 5.BLACK SEA");
    scanf("%d", &food);
    printf(" \n \t ENTER THE QUANTITY:- ");
    scanf("%d", &qty);

    switch(food)
    {
        case 1: price = 180 * qty; break;
        case 2: price = 160 * qty; break;
        case 3: price = 120 * qty; break;
        case 4: price = 60 * qty; break;
        case 5: price = 140 * qty; break;
        default: printf(" Invalid food selection"); price = 0; break;
    }
    total += price;
    printf("\n Select \n 0.Continue\n 1.Billing");
    scanf("%d", &rep);
    if(rep == 0) goto dishes_nonveg3;
    break;
}
case 3: // BANANA LEAF
{
dishes_nonveg3:
    printf(" \n \t THANK YOU FOR SELECTING BANANA LEAF \n");
    printf(" \n \t SELECT YOUR FAVORITE FOOD \n");
    printf(" 1.CHICKEN NOODLES  \n 2.ALOO GOBI \n 3.MASALA COLA \n 4.ROSY COFFEE  \n 5.BLACK SEA");
    scanf("%d", &food);
    printf(" \n \t ENTER THE QUANTITY:- ");
    scanf("%d", &qty);

    switch(food)
    {
        case 1: price = 180 * qty; break;
        case 2: price = 160 * qty; break;
        case 3: price = 120 * qty; break;
        case 4: price = 60 * qty; break;
        case 5: price = 140 * qty; break;
        default: printf(" Invalid food selection"); price = 0; break;
    }
    total += price;
    printf("\n Select \n 0.Continue\n 1.Billing");
    scanf("%d", &rep);
    if(rep == 0) goto dishes_nonveg3;
    break;
}
case 5: // FAST FOOD
{
dishes_nonveg5:
    printf(" \n \t THANK YOU FOR SELECTING FAST FOOD \n");
    printf(" \n \t SELECT YOUR FAVORITE FOOD \n");
    printf(" 1.SEA FOOD \n 2.SEA GRAVY \n 3.FISH CHOKKA \n 4.FISH MASALA  \n 5.MUTTON GRAVY");
    scanf("%d", &food);
    printf(" \n \t ENTER THE QUANTITY:- ");
    scanf("%d", &qty);

    switch(food)
    {
        case 1: price = 180 * qty; break;
        case 2: price = 90 * qty; break;
        case 3: price = 70 * qty; break;
        case 4: price = 200 * qty; break;
        case 5: price = 140 * qty; break;
        default: printf(" Invalid food selection"); price = 0; break;
    }
    total += price;
    printf("\n Select \n 0.Continue\n 1.Billing");
    scanf("%d", &rep);
    if(rep == 0) goto dishes_nonveg5;
    break;
}

