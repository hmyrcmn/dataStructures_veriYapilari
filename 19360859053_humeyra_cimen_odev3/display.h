
void display(LIST* pList){
    Student* temp;
    temp=pList->head;
    while(temp != NULL)
    {
        printf("\n ogrenci bilgileri: class num: %d -school num : %d - name :%s-%s-departman :  %s - agno:  %2.lf",temp->class_num,temp->school_number,temp->name,temp->surname,temp->departman,temp->agno);
        temp=temp->after;
        printf("\n");
    }

}

