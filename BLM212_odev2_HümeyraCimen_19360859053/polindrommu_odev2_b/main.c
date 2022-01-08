#include <stdio.h>
#include <stdlib.h>
#include <string.h> // string.lenght ile girilen metnin uzunlugu bulunuyor kütphane import
/*
ACIKLAMA:
char dizisi tanýmladý max 10 harflik get ile kulanýcýdan aldým puts ile kullanýcdan alýna kelime gösterdim
strin.h dan girilen kelimenin boyutu aldým ve fonka 3. parametre olarak verdim baslangýc index 0 verdim
 func : diziyi aldý ve ilk bas ile son daki degerleiri karsýlastýrdý esitse indecxler yenilendi ikinci ve sondan bri onceki indexler
 akrsýlastýrýmak uzere ozyýneleme ile func cagrýldý
 base case indexler degisice çift boyutlu kelimelerde ilk index son indexi geciyor  tek boyutlularda ise esi kalýyor bu durumda kelime polindrom oluyor 1 degerini geri donduruyor

*/



int ispalindrom(char dizi[],int first,int end ){
    if(first>=end)
        return 1;
    else if(dizi[first]==dizi[end])
        return ispalindrom(dizi,first+1,end-1);
    else
        return 0;

}
int palindrom(char kelime[],int first,int end){
    if(first>=end){
        return 1;
    }
    if(kelime[first]!=kelime[end])
        return 0;
    else
        return palindrom(kelime,first+1,end-1);

}
int main()
{


    printf("metin giriniz:  ");
    char kelime[10];
    gets(kelime);
    printf("girilen metin gosterisiliyor : ");
    puts(kelime);
    int boyut=strlen(kelime);

    int sonuc;
    sonuc=ispalindrom(kelime,0,boyut-1);
    printf("palindrom mu : %d   :"  ,sonuc);
    if(sonuc==1)
        printf(" girilen metin polindromdur");
    else
        printf("girilen metin polindrom degildir ");

    // 43den sonraký  SATIRIN MUADÝLÝ:
    // (sonuc==1)? printf(" girilen metin polindromdur"):printf("girilen metin polindrom degildir ");
    return 0;
}
