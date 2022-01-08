
int delete_node(LIST* pList,int school_num){

    // saerach et silinecegi bul :
    // silinecek student ptr aslnada
    Student* silinecek_student;
    // searh pointer göndermeli defre
    silinecek_student=_search(pList,school_num);
    int sayi=pList->_count;
    if(silinecek_student){
            if(sayi==0) {
                printf("The list is empty");
                return 0;
            }


            if(pList->_count==1){
            // listedekı son node ve ilk node aynıdir sılınıyordur sılınınce head rear pos null
            free(silinecek_student);
            pList->head=NULL;
            pList->pos=NULL;
            pList->rear=NULL;
            pList->_count--;
            return 1;

            }
            else if(silinecek_student==pList->head){

            // bas dugumsilme:
            Student* temp=silinecek_student; // plist->head
            pList->head=temp->after;
            pList->head->before=NULL;
            }
             else if(silinecek_student->after==NULL){
            // listede eleman vardir: there is a node in list
           //  siltenin sonundaki eleman siliniyordur
            Student* temp= silinecek_student->before;
            temp->after=NULL;
            pList->rear=temp;
            free(silinecek_student);

            }
            else {
            // bastan veya sondan deilse silime islemi
            Student* temp=silinecek_student;
            Student* before_temp=temp->before;
            Student* after_temp=temp->after;
            before_temp->after=temp->after;
            after_temp->before=temp->before;
            free(temp);
        }


        pList->_count--;

        return 1;




    }else{
        return 0;
        printf("Bulunamadi !");
        }





}
