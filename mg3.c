#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() 
{
	//Definisikan Variabel
	float panjang_rumah_Nana;
	float lebar_rumah_Nana;
	float luas_rumah_Nana;
	int ulangi, i;
	char kata[30];
	char keluar;

	menghitung:
	system("cls");
	printf("SELAMAT DATANG\n");
	printf("Masukkan kata yang ingin diulang : ");
	scanf("%s", &kata);
	printf("ingin diulang berapa kali : ");
	scanf("%d", &ulangi);
	i=1;
	do{
		printf("%s \n", &kata);
		i++;
	}while(i<=ulangi);
	printf("Masukkan panjang rumah Nana : ");
	scanf("%f", &panjang_rumah_Nana);
	printf("Masukkan lebar rumah Nana : ");
	scanf("%f", &lebar_rumah_Nana);

	//Hitung berapa luas ruumahnya
	luas_rumah_Nana = (panjang_rumah_Nana*lebar_rumah_Nana);
	//Tampilan Hasil
	printf("\n-> Jadi, luas rumah Nana adalah %.0f\n", luas_rumah_Nana);

	printf("Apakah Anda ingin menghitung lagi [Y/N] : ");
	keluar = getche();

	if (keluar = "Y"){
		goto menghitung;
	}else{
		goto selesai;
		return 0;
	}
	selesai:
	system("exit");
}
