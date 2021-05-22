#include<stdio.h>

struct Mahasiswa
{
	char nama[110];
	char nim[100];
	int age;
	char pos[71];
	char tempat[110];
	char dob[110];
	char sma[110];
	int sib;
	int height;
	char norek[110];
};

int main()
{
	struct Mahasiswa s;
	int n;
	scanf("%d", &n);
	getchar();
	for(int i=0;i<n;i++)
	{
		scanf("%[^\n]", s.nama);
		getchar();
		scanf("%[^\n]",s.nim);
		getchar();
		scanf("%d", &s.age);
		getchar();
		scanf("%[^\n]", s.pos);
		getchar();
		scanf("%[^\n]", s.tempat);
		getchar();
		scanf("%[^\n]", s.dob);
		getchar();
		scanf("%[^\n]", s.sma);
		getchar();
		scanf("%d", &s.sib);
		getchar();
		scanf("%d", &s.height);
		getchar();
		scanf("%s", s.norek);
		getchar();
		
		printf("Mahasiswa ke-%d:\n", i+1);
		
		printf("Nama: %s\n", s.nama);
		printf("NIM: %s\n", s.nim);
		printf("Umur: %d\n", s.age);
		printf("Kode Pos: %s\n", s.pos);
		printf("Tempat Lahir: %s\n", s.tempat);
		printf("Tanggal Lahir: %s\n", s.dob);
		printf("Almamater SMA: %s\n", s.sma);
		printf("Jumlah Saudara Kandung: %d\n", s.sib);
		printf("Tinggi Badan: %d\n", s.height);
		printf("NOMOR REKENING: %s\n", s.norek); 
	}
	return 0;
}
