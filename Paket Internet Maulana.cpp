#include<stdio.h>
#include<conio.h>

main()
{
int pilih,pakai;
int i=0;
int x;
float jumlah;
 printf("                      ==========================\n");
 printf("\n                        <<<<Paket Internet>>>>\n\n");
 printf("                      ==========================\n");
 printf("                      ==========================\n");
 printf("                      |   MENU PILIHAN PAKET   |\n");
 printf("                      ==========================\n");

mulai:
 printf("Pilih Paket :\n\n");
 printf("1.Kouta Bulanan\n");
 printf("2.Kouta Mingguan\n");
 printf("3.Kouta Harian\n");

 printf("masukkan pilihan = \n");
scanf("%d",&x);

 switch(x){
 
	case (1) :{
		mulai2:
		float harga[4];
		harga[0]= 49;
		harga[1]= 99;
		harga[2]= 149;
		harga[3]= 179;
 printf("Pilih Paket Kouta Bulanan\n\n");
 printf("1.5GB/30 hari  = %.3f\n", harga[0]);
 printf("2.10GB/30 hari = %.3f\n", harga[1]);
 printf("3.15GB/30 hari = %.3f\n", harga[2]);
 printf("4.20GB/30 hari = %.3f\n", harga[3]);
 printf("5.Kembali Ke Menu Sebelumnya\n"); 
 printf("Masukan Pilihan =");
 scanf("%d",&pilih);
if (pilih==1){
	printf("\nApakah anda yakin membeli paket 5GB/30 hari = 49.000\n");
}
else if (pilih==2){
	printf("\nApakah anda yakin membeli paket 10GB/30 hari = 99.000\n");
}
else if (pilih==3){
	printf("\nApakah anda yakin membeli paket 15GB/30 hari = 149.000\n");
}
else if (pilih==4){
	printf("\nApakah anda yakin membeli paket 20GB/30 hari = 179.000\n");
}
if (pilih==5)
goto mulai;

  printf("1.YA\n");
  printf("2.TIDAK\n");
  printf("3.Kembali Ke Menu Awal\n");
 scanf ("%d", &pilih);
 if (pilih==1){
 	printf("\n=============================================\n");
 	printf("    Terimakasih Telah Membeli Paket Ini\n");
 	printf("=============================================\n");
}
 else if(pilih==2){
 	printf("\n=============================================\n");
 	printf("  Terimakasih Telah Menggunakan Layanan Kami\n");
 	printf("=============================================\n");
 }
 else if (pilih==3)
goto mulai;
return 0;
}
  case (2) :{
  mulai3:
  		float harga[4];
  		harga [0] = 19;
  		harga [1] = 29;
  		harga [2] = 49;
  		harga [3] = 69;
 printf("Pilih Paket Kouta Mingguan\n\n");
 printf("1.5GB/7 hari  = %.3f\n", harga[0]);
 printf("2.10GB/7 hari = %.3f\n", harga[1]);
 printf("3.15GB/7 hari = %.3f\n", harga[2]);
 printf("4.20GB/7 hari = %.3f\n", harga[3]); 
 printf("5.Kembali Ke Menu Sebelumnya\n"); 
 printf("Masukan Pilihan =");
 scanf("%d",&pilih);
 if (pilih==1){
	printf("\nApakah anda yakin membeli paket 5GB/7 hari = 19.000\n");
}
else if (pilih==2){
	printf("\nApakah anda yakin membeli paket 10GB/30 hari = 29.000\n");
}
else if (pilih==3){
	printf("\nApakah anda yakin membeli paket 15GB/30 hari = 69.000\n");
}
else if (pilih==4){
	printf("\nApakah anda yakin membeli paket 20GB/30 hari = 79.000\n");
}
if (pilih==5)
goto mulai;
  printf("1.YA\n");
  printf("2.TIDAK\n");
  printf("3.Kembali Ke Menu Awal\n");
 scanf ("%d", &pilih);
  if (pilih==1){
 	printf("\n=============================================\n");
 	printf("    Terimakasih Telah Membeli Paket Ini\n");
 	printf("=============================================\n");
}
 else if(pilih==2){
 	printf("\n=============================================\n");
 	printf("  Terimakasih Telah Menggunakan Layanan Kami\n");
 	printf("=============================================\n");
 }
 else if (pilih==3)
goto mulai;
return 0;
}
case  (3) :
 mulai4:
 		float harga[4];
		harga[0]= 6;
		harga[1]= 10;
		harga[2]= 15;
		harga[3]= 19;
   printf("Pilih Paket Kouta Harian\n\n");
 printf("1.0,5GB/1 hari = %.3f\n", harga[0]);
 printf("2.1GB/1 hari   = %.3f\n", harga[1]);
 printf("3.1,5GB/1 hari = %.3f\n", harga[2]);
 printf("4.2GB/1 hari   = %.3f\n", harga[3]); 
 printf("5.Kembali Ke Menu Sebelumnya\n"); 
 printf("Masukan Pilihan =");
 scanf("%d",&pilih);
  if (pilih==1){
	printf("\nApakah anda yakin membeli paket 0,5GB/1 hari = 6.000\n");
}
else if (pilih==2){
	printf("\nApakah anda yakin membeli paket 1GB/1 hari = 10.000\n");
}
else if (pilih==3){
	printf("\nApakah anda yakin membeli paket 1,5GB/1 hari = 15.000\n");
}
else if (pilih==4){
	printf("\nApakah anda yakin membeli paket 2GB/1 hari = 19.000\n");
}
 	if (pilih==5)
goto mulai;
  printf("1.YA\n");
  printf("2.TIDAK\n");
  printf("3.Kembali Ke Menu Awal\n");
 scanf ("%d", &pilih);
  if (pilih==1){
 	printf("\n=============================================\n");
 	printf("    Terimakasih Telah Membeli Paket Ini\n");
 	printf("=============================================\n");
}
 else if(pilih==2){
 	printf("\n=============================================\n");
 	printf("  Terimakasih Telah Menggunakan Layanan Kami\n");
 	printf("=============================================\n");
 }
 else if (pilih==3)
goto mulai;

return 0;
}
}
