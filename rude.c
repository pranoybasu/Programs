#include<stdio.h>
main(){

    int choice;
    int i, j, n = 0, x;
    char ch;

    ch = 55;

    printf("\n 1.Half Pyramid");
    printf("\n 2.Inverted Half");

    scanf("%d", &choice);


    switch(choice){

        case 1:
            printf("\n Half Pyramid");
            printf("\n");

            for(x = 1; x<=3; x++){

                for(i = 1; i<=5; i++){

                    for(j = 1; j<=i; j++){
                        if(n == 0){
                            printf(" %d", j);
                        }
                        else if(n == 1){
                            printf(" *");
                        }
                        else{
                           printf(" %c", ch);
                        }

                    }
                    ch++;

                printf("\n");
                }
                n++;
            }

            break;

        default:
            printf("\n Invalid choice");

    }

}
