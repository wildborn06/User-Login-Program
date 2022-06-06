#include <stdio.h>
#include <string.h>

struct info{
   char ad[25];
   char soyad[25];
   char email[25];

   char kullaniciadi[25];
   char sifre[25];
   char sifre_girisi[25];
};

void giris();
void kayit();


void system();

void ayarlar();
int main(){

   system("cls");

   ayarlar();
   

   printf("\n");
   printf("Giris Basarili");

   return 0;
}

void giris(){

   system("cls");
   char usernameIn[10];
   char passwordIn[10];

   printf(
      "\n\n\n\n"
      "=============================================\n"
      "               G  I  R  I  S\n"
      "=============================================\n"
      "\n\n\n\n"
   );

   char user$pass[59] = "";


   printf("KULLANICI ADINIZ:    ");
   scanf("%s", &usernameIn);

   printf("SIFRENIZ:     ");
   scanf("%s", &usernameIn);


   strcat(user$pass, usernameIn);
   strcat(user$pass, ", ");
   strcat(user$pass, passwordIn);
   strcat(user$pass, "\n");


   FILE *LOGIN;
   char each_line[123];
   while(fgets(each_line, 123, LOGIN) != NULL){
      if(strcmp(each_line, user$pass) == 0){
         system("cls");
      }
   }


}


void kayit(){
   FILE *registerr;
   struct info kayit;

   printf(
      "\n\n\n\n"
      "============================================="
      "\n"
      "           K A Y I T"
      "\n"
      "============================================="
      "\n\n\n\n\n"
   );


   printf("AD:    ");
   scanf("%s", &kayit.ad);

   printf("SOYAD:    ");
   scanf("%s", &kayit.soyad);

   printf("EMAIL:    ");
   scanf("%s", &kayit.email);

   printf("KULLANICI ADI:    ");
   scanf("%s", &kayit.kullaniciadi);

   printf("SIFRE:    ");
   scanf("%s", &kayit.sifre);

   printf("SIFREYI DOGRULA:    ");
   scanf("%s", &kayit.sifre_girisi);
   
   
   	

}


void ayarlar()
{
   printf(
      "\n\n\n\n"
      
      
      "=============================================\n"
      "    B I R   S E C E N E K    S E C I N\n"
      "=============================================\n"
      "\n\n\n\n"
   );

   printf(
      "1. KAYIT\n"
      "2. GIRIS\n"
   );

   printf("Secenek girin: ");
   int ayar;
   scanf("%d", &ayar);
   if(ayar == 1){
      kayit();
   }else if(ayar == 2){
      giris();
   }
}
