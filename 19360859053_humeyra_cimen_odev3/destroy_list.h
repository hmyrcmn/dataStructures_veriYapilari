int destroy_list(LIST* pList){


    if(pList->_count==0){
         printf("\nThe list already empty \n "); // listenin zaten bo� olmas� destoryu basar�l� d�nd�recekdir dkkate almay�n�z !
        return 0 ;

    }
    //if(pList)

    while(pList->_count!=0){
        Student* temp = pList->head->after;

        free(pList->head);
        pList->head=temp;
        pList->_count--;
        if(pList->_count==0){
            return 1;

        }

    }
    if(pList->head==NULL){
        return 1;

    }

}

