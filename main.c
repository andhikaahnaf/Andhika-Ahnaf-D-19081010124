#include <stdio.h>
#include <stdlib.h>


struct Data_Mahasiswa{
	char nama[30];
	int npm;
};
typedef struct Data_Mahasiswa Data_Mahasiswa;

int main() {
	int a,b;
	Data_Mahasiswa list[a];

	printf("  Masukkan Banyak Data : ");
	scanf(" %d",&a);

	for(b=0;b<a;b++){
		printf("\n  Data ke - %d\n",b+1);
		printf("\t- Nama : ");
		scanf(" %[^\n]s",&list[b].nama);
		printf("\t- NPM : ");
		scanf("%d",&list[b].npm);		
	}

		printf("\n  Data yang berhasil diinput \n");

	for(b=0;b<a;b++){
		printf("  %d. %s\t = %d\t \n",b+1,list[b].nama,list[b].npm);
	}
	return 0;
}
