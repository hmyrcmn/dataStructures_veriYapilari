#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
double zamanlar[2];


void selectionsortsofgoingmax(int dizi[],int dizi_boyutu) {

    // bu  fonk yerine min selection fonk kullanılır ve dizi tersine çevrilerek aynı sonuç elde edilebilir ama sıralama suresin, farklı şekilde değiştireceği için bu şekilde kalmasına karak verdim

    int i=0;
    while(i<dizi_boyutu){
       int  maxvalue= i;

        int j=i+1;

        while(j<dizi_boyutu-1){

            if (dizi[j]>dizi[maxvalue])
                maxvalue=j;
            j++;
        }
       int  gecicideger= dizi[i];
        dizi[i]=dizi[maxvalue];
        dizi[maxvalue]=gecicideger;



        i++;
    }
     printf("\n  buyukten kucuge sıralanan dizi gösteriliyor\n\n\n");
    for(int i=0;i<dizi_boyutu;i++){
        printf("%d- ",dizi[i]);
    }




}
void selectionsortsofgoingmin(int dizi[], int dizi_boyutu)
{
    int i=0;
    int minvalue_i;

    while (i < dizi_boyutu)
    {
        minvalue_i=i;

        int j = i + 1;

        while (j < dizi_boyutu)
        {

            if (dizi[j] < dizi[minvalue_i])
                minvalue_i = j;
            j++;
        }

        int gecicideger = dizi[minvalue_i];
        dizi[minvalue_i] = dizi[i];
        dizi[i] = gecicideger;

        i++;
    }
    printf(" kucukten buyuge sıralanan dizi gösteriliyor\n\n\n");
    for(int i=0;i<dizi_boyutu;i++){
        printf("%d- ",dizi[i]);
    }





}

void rastgelediziolustur(int dizi_boyutu){
    int rastgeledizi[dizi_boyutu];

    int dizi[dizi_boyutu];
    for(int i=0;i<dizi_boyutu;i++){
        dizi[i]=(rand() %500000 );
    }

    int i=0;
    printf("\n\n\n rastgele oluþturulan dizi \n\n\n ");
    while(i<dizi_boyutu){
            printf("%d-",dizi[i]);

            i++;

    }

    for(int i=0;i<dizi_boyutu;i++){
        // sıralı diziyi tempe atadım tutmak için
         rastgeledizi[i]=dizi[i];
    }
    //  rastegele dizinin kucukten buyuge sıralanması için
     clock_t start, end;

    start=clock();
    selectionsortsofgoingmin(dizi,dizi_boyutu);

    end = clock();
    float zaman= (double)(end-start) / CLOCKS_PER_SEC;
    zamanlar[0]=zaman;

    printf("\n\nfark:  rastgele olusturulan dizi icin zaman : %.9lf \n ",(double)(end-start) / CLOCKS_PER_SEC);
    //

    // rastgele dizi için buyukten kucuge sıralaması


    clock_t start1, end1;

    start1=clock();
   selectionsortsofgoingmax(rastgeledizi,dizi_boyutu);


    end1 = clock();
    float zaman2= (double)(end1-start1) / CLOCKS_PER_SEC;
    zamanlar[1]=zaman2;

    printf("\n\nfark:  rastgele olusturulan dizi icin zaman : %.9lf \n ",(double)(end1-start1) / CLOCKS_PER_SEC);

    for ( int i =0;i<2;i++){
        printf("*****%lf",zamanlar[i]);
        //printf("%lf",degerler[i]);
    }




}

int main()
{
    // ilk dizi oluşturma
    int dizi_boyutu; //ilk durumda oyle tanýmladým
    int dizi[dizi_boyutu];
    printf("olusturulacak dizi boyutunu belirtiniz ! \n ");
    scanf("%d",&dizi_boyutu);

   //dizi= rastgelediziolustur(dizi_boyutu);
    rastgelediziolustur(dizi_boyutu);




    return 0;
}
