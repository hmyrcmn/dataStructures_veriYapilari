#include <stdio.h>
#include <stdlib.h>
/*
girilen sayinin asalmi e h 0-1 þeklinde geri donuş recursive func ile bulma

main : kullanıcıdan sayı alındı bu sayı asalmı fon a parametre olarak verildi int deger dondurecek 0- 1
aslamı : base case bolen 1 ise  sayı/2 olan bolen azalarak 1 olmustur  islem basarılı 1 dondor
sayın nın yarıısına kadar olan degerler onu bolmuyorsa yarısındna buyuklerde bolemez bolen sayı dan da baslasa sayı/2 den baslasa
degısmez sonuc:
 sayı yarısına bolunebiliyomu kalan 0 ise bolunur ve asal  deildir 0 dondur
            bolunemiyorsa  bolen deger bir azaltırılır ve func tekrar cagrılır islemler tekrarlanır

sonuc : switch case veya ifblokları yerine tek satırlık karar  yazıldı sonuc ?: t/f

*/
int asalmi(int sayi,int bolen){
    int sonuc;
    //base case:
    if(bolen==1){
        return 1;
    }
    if(sayi <2){
        return 0;
    }
    if(sayi%bolen==0){
        return 0;
    }
    return asalmi(sayi,bolen-1);

}

int main()
{
    printf("sayi  giriniz: \n");
    int sayi,sonuc,sonuc2;
    scanf("%d",&sayi);

    sonuc=asalmi(sayi,sayi/2);
    printf("sonuc %d *  ",sonuc);// 0 ise asal deðil 1 ise asaldır

    (sonuc==1)? printf("girilen sayi asaldir "):printf("girilen sayi asal degildir ");

    return 0;
}
