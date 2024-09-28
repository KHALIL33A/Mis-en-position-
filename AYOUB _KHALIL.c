#include <stdio.h>

int main() {
    float base , heuteur , laire , perimetre , nomber ,b ;
    
    printf("veuillez vous entre le base :");
   scanf("%f",&base);
    printf("veuillez vous entre la heuteur :");
    scanf("%f",&heuteur);
    laire = (base * heuteur) /2 ; 
    printf(" la valeur de laire : %.f \n",laire );
    
   printf("veuillez vous entre le nomber :");
   scanf("%f",&nomber);
   printf("veuillez vous entre b: ");
   scanf("%f",&b);
    base = b ;
    perimetre = (b * 3);
    printf("  la valeure de perimetre : %f",perimetre);
   
   

    return 0;
}
#include <stdio.h>

int main() {
float temperature ;
printf("veuillez vous entre la temperature : ");
scanf("%f",&temperature);
if (temperature == 38 ){
    printf("votre temperature est normal = %.f",temperature);
}else if (temperature >= 38.5){
    printf("vous avez de la fievre = %.f",temperature);
    
}

   

    return 0;
}