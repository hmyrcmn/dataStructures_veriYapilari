Student* _search(LIST* pList,int school_num1){

    //bastan baslasİn
    Student* temp= pList->head;

    printf("%d -- %d",school_num1,temp->school_number);

    while(temp != NULL)
    {
        if(temp->school_number ==school_num1){
            // bulduk demektir

            return temp;
        }

        temp=temp->after;

    }


}

