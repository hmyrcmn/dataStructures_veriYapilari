#include<stdio.h>
#include<stdlib.h>
/*
acıklama:  girilen sayının çarpanların bulma !
main : kullanıcıdan sayı alındı bu sayı carpanlarıbul fon a parametre olarak verildi
func: alınan sayıyı önce 2 ye  bolmeyle basladım . base case
ozyineleme: sayının kalansız bolumu tekrar func a parametre olarka verildi
bolen sayı eger kalansız bolemıyorsa carpanı deıl dır bu durumda bolen arttırıldı .
*/

void carpanlari_bul( int sayi)
{
        int bolen = 2;
        if( sayi == 1 ) //sayı artık bolenine esit oldu base case ile durmalı
                return ;
        while( sayi%bolen != 0 )
                bolen++; // sayıya ait bir çarpan deilse bu for daki i++ bolen de sayıya kadar artmalı
        printf("%d* ", bolen); // sayıya ait carpan gosteriliyor
        carpanlari_bul(sayi/bolen); // sayı bolundu ise eger yeni sayı olusmalı 12/2 6 olmalı 12/2 12 olur hep aynı yayıyı alırız
}

int main( )
{
        int sayi;
        printf("carpanlarina ayrilacak sayiyi giriniz : ");
        scanf("%d", &sayi);

        carpanlari_bul(sayi);


        return 0;

}

