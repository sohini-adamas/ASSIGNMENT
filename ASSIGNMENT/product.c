//
// Created by USER on 11/18/2023.
//
#include <stdio.h>
#include <string.h>
int main(){
    struct stu {
        char name[15];
        long int id;
        int price;
    };
    struct stu pd[4];
            for(int i=0;i<4;i++){
                puts("ENTER THE NAME OF PRODUCT:\n ");
                gets(pd[i].name);
                printf("ENTER THE PRODUCT ID:\n ");
                scanf("%ld",&pd[i].id);
                printf("ENTER THE PRICE:\n ");
                scanf("%d",&pd[i].price);
                getchar();
            }
            int choice;
            long int id_c;
            char name_c[15];
            int count=0;
            char ch[2]="id";
            char cho[4]="name";
        printf("YOU WANT TO SEARCH WITH THE HELP OF PRODUCT ID(1) OR NAME(2)?:\n ");
        scanf("%s",&choice);
        switch (choice) {
        case 1:
            printf("ENTER THE ID OF THE PRODUCT YOU WANT TO SEARCH FOR : ");
            scanf("%ld", &id_c);
            for (int i = 0; i < 4; i++) {
                if ((strcasecmp(pd[i].id, id_c)) == 0) {
                    puts(pd[i].name);
                    printf("%ld", pd[i].id);
                    printf("%d", pd[i].price);
                }
                count++;
            }
                break;
                case 2:
                    puts("ENTER THE NAME OF THE PRODUCT YOU WANT TO SEARCH FOR : ");
                gets(name_c);
                for (int i = 0; i < 4; i++) {
                    if ((strcasecmp(pd[i].name,id_c))==0) {
                        puts(pd[i].name);   printf("%ld", pd[i].id);
                        printf("%d", pd[i].price);
                    }
                    count++;
                }
                break;
                default:
                    printf("PRODUCT NOT FOUND!!");
                break;
            }
        }
    }