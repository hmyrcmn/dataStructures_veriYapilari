#include <stdio.h>
#include <stdlib.h>

/*
AÇIKLAMA:kullanıcııdan 1 girişi alınana dek baglı liste olusturuyor ve bu baglı listenin uzunlugunu yazdırıyor
kullanıcı 1 degerini girene kadar baglı listeye elemanlar sondan ekleniyor ve yazdıılıyor
fonc: ilknode ve yenilenen uzunlugu parametre olarak alıyor  ilknode bozulmasın diye yeni bir p degiskenine atılıyor
base case p degerinin linki null ise sona gelmiştri artık
ozyineleme: uzunluk artırılır sona gelinmemistir cunku yeni den cagrıya nodeun linkindeki yani bir sonraki node paramete
verilir ve uzunluk duzenlenmek üzere verilir
null olması durumunda uzunluk yazdırılır


*/
struct node{
    int data;
    struct node* link;
};

struct node* ilknode=NULL;
struct node* p=NULL;
struct node* temp=NULL;
struct node* temp2=NULL;
 int uzunluk=0;

void sonaekle(int veri){
    struct node* eklenecek =(struct node*) malloc(sizeof(struct node));
    eklenecek->data=veri;
    eklenecek->link=NULL;

    if(ilknode == NULL)
    {
        ilknode=eklenecek;
    }
    else
    {
        temp = ilknode;
        while(temp->link!=NULL){
           temp = temp->link;
        }
        temp->link=eklenecek;
       //ilknode=temp;
    }
}

void yazdir(){
    temp=ilknode;
    while(temp->link!=NULL){
        printf("  %d  ",temp->data);
        temp = temp->link;
    }
     printf("  %d  ",temp->data); // en son giris yapılan 1 degerinide yazdırır !
}

void uzunluk_bul(struct node* x,int uzunluk){

    p=x;


    if(p==NULL){
         printf("\n bagli liste uzunlugu ! : %d",uzunluk);

    }
    else {
        uzunluk+=1;
        uzunluk_bul(p->link,uzunluk);

 }



  }


int main()
{
    int ekle;


    // kullanıcı 1 sayısını girene kadar döngü çalışıyor
    printf("eleman eklemeyi sonlandirmak icin 1 giriniz\n \n ");
    for(;;){
        if(ekle==1)
            break;
        else{

            printf("sayi gir: ");
            scanf("%d",&ekle);
            sonaekle(ekle);
            yazdir();

        }
    }

    uzunluk_bul(ilknode,0);

    return 0;
}
