LIST* createList(void){
    LIST* list;
    //ALLOCATE
    list=(LIST*)malloc(sizeof(LIST));

    if(list){
        list->head=NULL;
        list->pos=NULL;
        list->rear=NULL;
        list->_count=0;

    }
    //olusturulan list geri donduruluyor
    return list;


}


