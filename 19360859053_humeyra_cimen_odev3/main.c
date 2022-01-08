#include <stdio.h>
// #include <stdlib.h>

#include "student.h"
#include "_search.h"
#include "add_node.h"
#include "create_list.h"
#include "delete_node.h"
#include "display.h"
#include "destroy_list.h"

int display_menu(){
    printf("\n\n\n welcome to student data baces  \n \n \n");
    printf("\n please enter 1 for add a student: ");
    printf("\n please enter 2 for delete a student: ");
    printf("\n please enter 3 for display student: ");
    printf("\n please enter 4 for destroy: ");
    //printf("\n please enter 0 for end a loop: ");
    int enter;
    scanf("%d",&enter);
    return enter;

}


int main()
{
     int is_destroy ;
     int enter;
     int sonuc;
    LIST* list=createList();
    do{
         printf("\n*********************************\n");
        enter=display_menu();
    switch(enter){
        case 1:
            printf(" please enter student data:\n ");
            int school_number;
            printf("school num: ");
            scanf("%d",&school_number);

            char name[100];
             printf(" adi:");
            //gets(name);
            scanf("%s",&name);//char array

            char surname[100];
            printf(" soyadi: ");//charr array
            //gets(surname);
            scanf("%s",&surname);

            char departman[100];
            printf("departman: ");
            // gets(departman);
            scanf("%s",&departman);//charr array

            float agno;
            printf(" agno: ");
            scanf("%f",&agno);// float

            int class_num;
            printf(" class num :");
            scanf("%d",&class_num);
            int flag=add_node(list,school_number, name,surname,departman,agno,class_num);
           if(flag){
            printf("Ekleme islemi basarili ! ");
           }
           else{
            printf("Ekleme islemi  basarisiz !");
           }


            break;
        case 2:

            // delete a student
            printf("Enter the number of the student to be deleted: \n ");

            scanf("%d",&school_number); // student.h icide school_number  bulunuyor
            if(list->head==NULL){
                printf("The list is empty! ");
            }else{
            sonuc= delete_node(list,school_number);

            if(sonuc){
                //sonuc 1 ise
            printf(" Deletion successful  ");
            }
            if(!sonuc){
                //sonuc 0 ise
             printf(" Deletion unsuccessful please check!");
            }

            }

            break;
        case 3:
             printf("\n*********************************\n");
             if(list->head==NULL){
                printf("\n The list is empty \n ");
             }else{
                 display(list);
             }

            break;
        case 4:
            //destroy

            is_destroy= destroy_list(list);
            if(is_destroy){
                 printf("Destroy operation successful");
            }
            else{
                printf("Destroy operation unsuccessful");
            }

            break;
        default:
            printf("Invalid enter");
            }
    }while(enter!=0);




    return 0;
}
