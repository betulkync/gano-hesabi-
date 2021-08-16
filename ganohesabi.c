#include<stdio.h>
int main (void) ;
#define  AA 4.00
#define  BA 3.50
#define  BB 3.00
#define  CB 2.50
#define  CC 2.00
#define  DC 1.50
#define  DD 1.00
#define  FF 0.50
#define  SIZE 15
double GANOHESAP (double notlar[] ,int kredi[] ,int totalkredi,int dersno);
void mesaj (double notlar[],int dersno);
int main (void)
 {
	int kredi[SIZE];
	double notlar[SIZE];
	double gano;
	int totalkredi=0;
	int dersnof=0;
	int i; //for dongusu icin
	printf("KAC DERSINIZ VAR?");
	scanf("%d",&dersnof);
	for(i=0;i<dersnof;i++)
	 { printf("\n %d . dersin notu ve kredisini girin ", i+1);
	 scanf("%lf%d",notlar[i],kredi[i]);
	 totalkredi=totalkredi+kredi[i];
     }
	 gano = GANOHESAP ( double notlar[] ,int kredi[] ,int totalkredi,int dersno);
	 meaj(notlar,dersno);
	 printf	("\n\nGano:%.2lf",gano);
	 return(0);
	
}

void mesaj (double notlar[],int dersno)
{
	int i;
	printf("\n ********************** \n ");
	for(i=0;i<dersno;i++)
	{
		if(notlar[i].= AA)
               printf("DERS %d (A\n", i+1);
          else if(notlar[i]. = BA)
               printf("DERS %d : BA\n", i+1);
          else if(notlar[i]. = BB)
               printf("DERS %d : BB\n", i+1);
           else if(notlar[i]. = CB)
                printf("DERS  %d : CB\n", i+1);
             else if(notlar[i]. = CC)
               printf("DERS %d : CC\n", i+1);
          else if(notlar[i].= DC)
               printf("DERS %d : DC\n", i+1);
          else if(notlar[i].= DD)
               printf("DERS %d : DD\n", i+1);
          else
               printf("Lesson %d : F \n", i+1);

        printf("\n\n                      \n\n");
			
	}
		
}
double GANOHESAP (double notlar[] ,int kredi[] ,int totalkredi,int dersno)
{
	
	int i, sum=0;
      double gano;

     for(i=0; i<dersno; i++){
         if(notlar[i]>=85.0)
               notlar[i] =AA
          else if(notlar[i]>=75.0   )
               notlar[i] = BA;
          else if(notlar[i]>=65.0   )
		        notlar[i] = BB;
          else if(notlar[i]>=58.0   )
               notlar[i] = CB;
           else if(notlar[i]>=50.0    )
                notlar[i] = CC;
           else if(notlar[i]>=30.0    )
               notlar[i] = DC;
           else if(notlar[i]>=20.0    )
               notlar[i] = DD;
          else
               notlar[i] = FF;


      for(i=0; i<dersno; i++){
           sum= sum + ( notlar[i]   *  kredi[i] );


      gano= (double)sum/totalkredi;

         return gano;
	
}

