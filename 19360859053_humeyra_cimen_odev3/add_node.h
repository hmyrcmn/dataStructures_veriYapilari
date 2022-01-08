#include <string.h>
#include <stdlib.h>
// return: if ekleme succes = 1,   else 0
int add_node(LIST* plist,int school_number,char* name,char* surname,char* departman,float agno,int class_num ){
    // node yapz student tir: eklenecek_node aslýnda eklenecek_student !
    Student* eklenecek_node;

    eklenecek_node=(Student*)malloc(sizeof(Student));
    eklenecek_node->agno=agno;
    eklenecek_node->school_number=school_number;
    eklenecek_node->class_num=class_num;
    strcpy(eklenecek_node->name, name);
    strcpy(eklenecek_node->surname, surname);
    strcpy(eklenecek_node->departman, departman);

    eklenecek_node->after=NULL;
    eklenecek_node->before=NULL;
    int counter=plist->_count;
    //(plist->_count==0): 21in yerine
    if(counter==0){
            //lıste bostur ve bas dugum eklenecek olandır
            plist->head=eklenecek_node;
            plist->rear=eklenecek_node;
            plist->head=plist->rear;// ztn oyle oluyor
            plist->_count++;

           counter++;// ekleme basarılı
        return 1;

    }

    if(counter!=0){

        //liste de eleman vardir : sona ekleyelim rear son node gosterýr artýk ekleneceý gostermeli
        Student* temp=plist->rear;
        // plist->pos=plist->rear;

        eklenecek_node->before=temp;
         plist->rear=eklenecek_node;
        //temp->after=eklenecek_node;
        temp->after=plist->rear;
        plist->_count++;

        return 1;

    }


}

