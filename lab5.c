#include<stdio.h>

main(){


    int choice;

    int t1, t2, l1, l2, c = 0, i, j, br = 0;

    int nn = 0, fn, r, cn = 0, fh = 0;

    char y = 'y';

    do{

    system("cls");

    printf("\n          +--------------+");
    printf("\n          |     LAB 5    |");
    printf("\n          +--------------+");
    printf("\n");

    printf("\n 1. Prime number between two limits ");
    printf("\n 2. Digits in Words");
    printf("\n\n Enter your choice (1/2)? : ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("\n Enter the first limit  : ");
            scanf("%d", &t1);
            printf("\n Enter the second limit : ");
            scanf("%d", &t2);

            if(t1 < t2){
                l1 = t1;
                l2 = t2;
            }
            else{
                l2 = t1;
                l1 = t2;
            }

            printf("\n\n All prime numbers between %d and %d", l1, l2);
            printf("\n\n");

            i = (l1+1);

            while(i<l2){
                j = 2;
                while(j<i){
                    if(i%j==0){
                        c = 1;
                        break;
                    }
                    j++;
                }
                if(c != 1){
                    printf(" \t%d", i);
                    br++;
                    if(br >= 10){
                        printf("\n");
                        br = 0;
                    }
                }
                c = 0;
                i++;
            }

            break;

        case 2:

            printf("\n Enter your favorite number : ");
            scanf("%d", &fn);

            if(fn == 10){
                printf(" ten");
                exit(0);
            }

            i = 1;

                while(fn>0){

                    r  = fn % 10;
                    nn = (nn*10) + r;
                    fn = fn / 10;
                    cn++;
                    i++;

                }

                int temp = nn;
                printf("\n");

                i = 1;

                while(temp>0){

                    r  = temp % 10;

                    printf(" [ %d ]", r);

                    temp = temp / 10;
                    i++;

                }

                printf("\n\n");

                i = 1;

                while(nn>0){

                    r = nn % 10;

                    if(cn == 5){
                        if(r>=2 && r<=9){
                            switch(r){
                                case 2:
                                    printf(" twenty");
                                    break;
                                case 3:
                                    printf(" thirty");
                                    break;
                                case 4:
                                    printf(" forty");
                                    break;
                                case 5:
                                    printf(" fifty");
                                    break;
                                case 6:
                                    printf(" sixty");
                                    break;
                                case 7:
                                    printf(" seventy");
                                    break;
                                case 8:
                                    printf(" eighty");
                                    break;
                                case 9:
                                    printf(" ninety");
                                    break;
                            }
                        }
                            if(r == 1){
                                nn = nn / 10;
                                r = nn % 10;
                                switch(r){
                                case 1:
                                    printf(" eleven");
                                    break;
                                case 2:
                                    printf(" twelve");
                                    break;
                                case 3:
                                    printf(" thirteen");
                                    break;
                                case 4:
                                    printf(" fourteen");
                                    break;
                                case 5:
                                    printf(" fifteen");
                                    break;
                                case 6:
                                    printf(" sixteen");
                                    break;
                                case 7:
                                    printf(" seventeen");
                                    break;
                                case 8:
                                    printf(" eighteen");
                                    break;
                                case 9:
                                    printf(" nineteen");
                                    break;
                                }
                        }
                        nn = nn /10;
                        cn = cn - 2;
                        r = nn % 10;
                        printf(" thousand");

                    }

                    if(cn == 4){
                        switch(r){
                                case 1:
                                    printf(" one");
                                    break;
                                case 2:
                                    printf(" two");
                                    break;
                                case 3:
                                    printf(" three");
                                    break;
                                case 4:
                                    printf(" four");
                                    break;
                                case 5:
                                    printf(" five");
                                    break;
                                case 6:
                                    printf(" six");
                                    break;
                                case 7:
                                    printf(" seven");
                                    break;
                                case 8:
                                    printf(" eight");
                                    break;
                                case 9:
                                    printf(" nine");
                                    break;
                                }

                        printf(" thousand");
                        i++;
                    }

                    if(cn == 3){
                        switch(r){
                                case 0:
                                    printf(" and");
                                    fh++;
                                    break;
                                case 1:
                                    printf(" one");
                                    break;
                                case 2:
                                    printf(" two");
                                    break;
                                case 3:
                                    printf(" three");
                                    break;
                                case 4:
                                    printf(" four");
                                    break;
                                case 5:
                                    printf(" five");
                                    break;
                                case 6:
                                    printf(" six");
                                    break;
                                case 7:
                                    printf(" seven");
                                    break;
                                case 8:
                                    printf(" eight");
                                    break;
                                case 9:
                                    printf(" nine");
                                    break;
                                }
                        if(fh != 1){
                            printf(" hundred");
                        }

                    }
                    if(cn == 2){
                        if(r>=2 && r<=9){
                            switch(r){
                                case 2:
                                    printf(" twenty");
                                    break;
                                case 3:
                                    printf(" thirty");
                                    break;
                                case 4:
                                    printf(" forty");
                                    break;
                                case 5:
                                    printf(" fifty");
                                    break;
                                case 6:
                                    printf(" sixty");
                                    break;
                                case 7:
                                    printf(" seventy");
                                    break;
                                case 8:
                                    printf(" eighty");
                                    break;
                                case 9:
                                    printf(" ninety");
                                    break;
                            }
                        }
                            if(r == 1){
                                nn = nn / 10;
                                r = nn % 10;
                                switch(r){
                                case 1:
                                    printf(" eleven");
                                    break;
                                case 2:
                                    printf(" twelve");
                                    break;
                                case 3:
                                    printf(" thirteen");
                                    break;
                                case 4:
                                    printf(" fourteen");
                                    break;
                                case 5:
                                    printf(" fifteen");
                                    break;
                                case 6:
                                    printf(" sixteen");
                                    break;
                                case 7:
                                    printf(" seventeen");
                                    break;
                                case 8:
                                    printf(" eighteen");
                                    break;
                                case 9:
                                    printf(" nineteen");
                                    break;
                                }
                            exit(0);
                            }
                            if(cn == 0){
                                printf(" and");
                            }
                        }
                        if(cn == 1){
                            switch(r){
                                case 1:
                                    printf(" one");
                                    break;
                                case 2:
                                    printf(" two");
                                    break;
                                case 3:
                                    printf(" three");
                                    break;
                                case 4:
                                    printf(" four");
                                    break;
                                case 5:
                                    printf(" five");
                                    break;
                                case 6:
                                    printf(" six");
                                    break;
                                case 7:
                                    printf(" seven");
                                    break;
                                case 8:
                                    printf(" eight");
                                    break;
                                case 9:
                                    printf(" nine");
                                    break;
                                }
                    }
                    nn = nn / 10;
                    cn--;

                }

            break;

        default:
            printf("\n Invalid Input");
    }

        printf("\n Do you wish to continue (y/n) ? : ");
        scanf(" %c", &y);

    }while(y == 'y');

    printf("\n Goodbye :)");

    printf("\n");
    getch();
}

