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
        case 1:
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
                        case 1:
                            printf(" \n \t THANK YOU FOR SELECTING IDLI\n");
                            printf(" \n  \n \t ENTER THE QUANTITY:- ");
                            scanf("%d", &qty);
                            price = 10 * qty;
                            total += price;
                            printf(" \n TOTAL AMOUNT :-%d", price);
                            printf("\n Select \n 0.Continue\n 1.Billing");
                            scanf("%d", &rep);
                            if(rep == 0)
                                goto dishes;
                            break;

                        case 2:
                            printf(" \n \t THANK YOU FOR SELECTING DHOSA ");
                            printf(" \n \n \t ENTER THE QUANTITY :-");
                            scanf("%d", &qty);
                            price = 30 * qty;
                            total += price;
                            printf(" \n TOTAL AMOUNT :-%d", price);
                            printf("\n Select \n 0.Continue\n 1.Billing ");
                            scanf("%d", &rep);
                            if(rep == 0)
                                goto dishes;
                            break;

                        case 3:
                            printf(" \n \t THANK YOU FOR SELECTING PONGAL ");
                            printf(" \n \t \t ENTER QUANTITY :-");
                            scanf("%d", &qty);
                            price = 50 * qty;
                            total += price;
                            printf(" \n TOTAL AMOUNT:-%d ", price);
                            printf("\n Select \n 0.Continue\n 1.Billing");
                            scanf("%d", &rep);
                            if(rep == 0)
                                goto dishes;
                            break;

                        case 4:
                            printf(" \n \t THANK YOU FOR SELECTING POORI  ");
                            printf(" \n \n \t ENTYER THE QUANTITY :-");
                            scanf("%d", &qty);
                            price = 20 * qty;
                            total += price;
                            printf(" \n TOTAL AMOUNT :-%d", price);
                            printf("\n Select \n 0.Continue\n 1.Billing");
                            scanf("%d", &rep);
                            if(rep == 0)
                                goto dishes;
                            break;

                        case 5:
                            printf(" \n \t THANK YOU FOR SELECTING PANEER TIKKA   ");
                            printf(" \n \n \t ENTYER THE QUANTITY :-");
                            scanf("%d", &qty);
                            price = 120 * qty;
                            total += price;
                            printf(" \n TOTAL AMOUNT :-%d", price);
                            printf("\n Select \n 0.Continue\n 1.Billing");
                            scanf("%d", &rep);
                            if(rep == 0)
                                goto dishes;
                            break;

                        default:
                            printf(" Invalid food selection");
                            break;
                    }
                    break;
                }

                case 2:
                {
                    printf(" \n \t \t THANK YOU FOR SELECTING VEGETARIAN HOT \n");
                    printf(" \n \t \t SELECT YOUR FOOD \n");
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

                case 3:
                {
                    printf(" \n \t \t THANK YOU FOR SELECTING VEG RICE \n");
                    printf(" \n \t \t SELECT YOUR FOOD \n");
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

                case 4:
                {
                    printf(" \n \t \t THANK YOU FOR SELECTING CAFE SOUL \n");
                    printf(" \n \t \t SELECT YOUR FOOD \n");
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

                case 5:
                {
                    printf(" \n \t \t THANK YOU FOR SELECTING ONLY NATURE \n");
                    printf(" \n \t \t SELECT YOUR FOOD \n");
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

        case 2:
        {
            int nonveg, food, qty;
            printf(" \n \t THANK YOU FOR SELECTING NON VEG HOTEL ");
            printf(" \n \t  SELECT YOUR FAVORITE HOTEL \n ");
            printf(" \n 1.BIRIYANI CENTER \n 2.KARUNAS \n 3.BANANA LEAF \n 4.ACORD \n 5.FAST FOOD");
            scanf("%d", &nonveg);

            switch(nonveg)
            {
                case 1:
                    printf(" \n \t THANK YOU FOR SELECTING BIRIYANI CENTER \n");
                    printf(" \n \t SELECT YOUR FAVORITE FOOD \n ");
                    printf(" \n 1.NON VEG MEALS \n 2.CHICKEN 65 \n 3.CHICKEN BIRIYANI \n 4.MUTTON BIRIYANI \n 5.MUTTON CHOKA ");
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
                    break;

                default:
                    printf(" Invalid NON-VEG hotel selection");
                    break;
            }
            break;
        }

        default:
            printf(" Invalid hotel selection");
            break;
    }

    printf("\nTotal Amount: %d\n", total);
    return 0;
}
