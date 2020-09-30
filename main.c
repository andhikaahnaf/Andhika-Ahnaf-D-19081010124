#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( void ) 
{
	char nama[30], hobi[30], status[30], jurusan[30], umur[30], asal[30];
	int npm;
	
	printf("  Masukkan Data Diri \n");
	printf("  Nama\t\t: ");
	gets(nama);
	printf("  NPM\t\t: ");
	scanf("%s",&npm);
	printf("  Umur\t\t: ");
	scanf("%s",&umur);
	printf("  Jurusan\t: ");
	scanf("%s",&jurusan);
	printf("  Asal\t\t: ");
	scanf("%s",&asal);
	printf("  Hobi\t\t: ");
	scanf("%s",&hobi);

	return 0;
}
