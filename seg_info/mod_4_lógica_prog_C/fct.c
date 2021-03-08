#include <stdio.h>




int main()
{
  
  
  int fct1, fct2, fcr1, fcr2, fcr3, fcrmedia, idade, fcm, objt;
  fct1=0;
  fct2=0;
  fcr1=0;
  fcr2=0;
  fcr3=0;
  fcrmedia=0;
  idade=0;
  fcm=0;
  objt=0;
  
  printf("Calcule sua frequência cardiaca de treinamento. \n");
  printf("Os Resultados dos cáculos são valores estimados.\n");
  printf("Para um resultado mais preciso, procure um profissional.\n");
  printf("Digite o número do seu objetivo:\n|1-REABILITAÇÀO| |2-METABÓLICO| |3-CARDIOVASCULAR| |4-CONDICIONAMENTO AERÓBIO |5-LACTEA| |6-ANAERÓBIO|\n");
  printf("\n");
  scanf("%d", &objt);
  
  if (objt==1){
  	printf("REABILITAÇÃO\n");
  	printf("\n");
  	printf("Digite sua idade:\n");
  	scanf("%d", &idade);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr1);
  	printf("Digite sua frequência cardíaca de repouso do dia 2:\n");
  	scanf("%d", &fcr2);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr3);
  	fcm=208 - (0.7 * idade);
  	fcrmedia=(fcr1 + fcr2 + fcr3) / 3;
  	fct1= ((fcm - fcrmedia) * 0.4) + fcrmedia;
  	fct2= ((fcm - fcrmedia) * 0.5) + fcrmedia;
  	
  	printf("Sua Zona alvo de treinamento é de %d ", fct1);
  	printf(" BPM");
  	printf(" até %d", fct2);
  	printf(" BPM \n");  
  	
  }
  
  else if (objt==2){
  	printf("METABÓLICA\n");
  	printf("\n");
  	printf("Digite sua idade:\n");
  	scanf("%d", &idade);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr1);
  	printf("Digite sua frequência cardíaca de repouso do dia 2:\n");
  	scanf("%d", &fcr2);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr3);
  	fcm=208 - (0.7 * idade);
  	fcrmedia=(fcr1 + fcr2 + fcr3) / 3;
  	fct1= ((fcm - fcrmedia) * 0.5) + fcrmedia;
  	fct2= ((fcm - fcrmedia) * 0.6) + fcrmedia;
 
  	printf("Sua Zona alvo de treinamento é de %d ", fct1);
  	printf(" BPM");
  	printf(" até %d", fct2);
  	printf(" BPM \n");  
  	
  }
  
  else if (objt==3){
  	printf("CARDIOVASCULAR\n");
  	printf("\n");
  	printf("Digite sua idade:\n");
  	scanf("%d", &idade);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr1);
  	printf("Digite sua frequência cardíaca de repouso do dia 2:\n");
  	scanf("%d", &fcr2);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr3);
  	fcm=208 - (0.7 * idade);
  	fcrmedia=(fcr1 + fcr2 + fcr3) / 3;
  	fct1= ((fcm - fcrmedia) * 0.6) + fcrmedia;
  	fct2= ((fcm - fcrmedia) * 0.7) + fcrmedia;
  	
  
   	printf("Sua Zona alvo de treinamento é de %d ", fct1);
  	printf(" BPM");
  	printf(" até %d", fct2);
  	printf(" BPM \n");  
  	
  }
  
  else if (objt==4){
  	printf("CONDICIONAMENTO AERÓBIO\n");
  	printf("\n");
  	printf("Digite sua idade:\n");
  	scanf("%d", &idade);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr1);
  	printf("Digite sua frequência cardíaca de repouso do dia 2:\n");
  	scanf("%d", &fcr2);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr3);
  	fcm=208 - (0.7 * idade);
  	fcrmedia=(fcr1 + fcr2 + fcr3) / 3;
  	fct1= ((fcm - fcrmedia) * 0.7) + fcrmedia;
  	fct2= ((fcm - fcrmedia) * 0.8) + fcrmedia;
  
  	printf("Sua Zona alvo de treinamento é de %d ", fct1);
  	printf(" BPM");
  	printf(" até %d", fct2);
  	printf(" BPM \n");  
  	
  }
  
  else if (objt==5){
  	printf("LÁCTEA\n");
  	printf("\n");
  	printf("Digite sua idade:\n");
  	scanf("%d", &idade);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr1);
  	printf("Digite sua frequência cardíaca de repouso do dia 2:\n");
  	scanf("%d", &fcr2);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr3);
  	fcm=208 - (0.7 * idade);
  	fcrmedia=(fcr1 + fcr2 + fcr3) / 3;
  	fct1= ((fcm - fcrmedia) * 0.8) + fcrmedia;
  	fct2= ((fcm - fcrmedia) * 0.9) + fcrmedia;
  	
  	printf("Sua Zona alvo de treinamento é de %d ", fct1);
  	printf(" BPM");
  	printf(" até %d", fct2);
  	printf(" BPM \n");  
  }
  
  else if (objt==6){
  	printf("ANAEŔOBIO\n");
  	printf("\n");
  	printf("Digite sua idade:\n");
  	scanf("%d", &idade);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr1);
  	printf("Digite sua frequência cardíaca de repouso do dia 2:\n");
  	scanf("%d", &fcr2);
  	printf("Digite sua frequência cardíaca de repouso do dia 1:\n");
  	scanf("%d", &fcr3);
  	fcm=208 - (0.7 * idade);
  	fcrmedia=(fcr1 + fcr2 + fcr3) / 3;
  	fct1= ((fcm - fcrmedia) * 0.9) + fcrmedia;
  	fct2= ((fcm - fcrmedia) * 1) + fcrmedia;
  	
  	printf("Sua Zona alvo de treinamento é de %d ", fct1);
  	printf(" BPM");
  	printf(" até %d", fct2);
  	printf(" BPM \n");  
  	
  }
  
  else{
  	printf("Digite uma opção entre 1 a 6");
  
  }
  
  
  return 0;
}
