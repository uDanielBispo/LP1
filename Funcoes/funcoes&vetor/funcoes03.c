#include <stdio.h>
#include <locale.h>
#include <windows.h>

float Vetor[5];

float fEntradaDeDados();
float fMedia(float Vetor[5]);
float fMediaPonderada(float Vetor[5]);
float fAcharMaiorEMenor(float Vetor[5]);
float fSoma(float Vetor[5]);
float fDesvioPadrao(float Vetor[5]);

void main(void){
   setlocale(LC_ALL, "Portuguese");
   int Escolha;

   do{
      printf("\nEscolha:\n1- Entrar com dados\n2- Calcular a média aritimética simples dos dados\n3- Calcular a média ponderada dos dados\n4- Calcular o desvio padrão dos dados\n5- Achar o maior valor e o menor valor\n6- Sair do programa\n\nDigite qual funcionalidade deseja utilizar: ");
      scanf("%i", &Escolha);
      switch (Escolha){
      case 1:
         fEntradaDeDados(Vetor);
         break;
      case 2:
         system("cls");
         //fMedia(Vetor);
         printf("A média aritimética dos valores é: %.3f", fMedia(Vetor));
         Sleep(3000);
         system("cls");
         break;
      case 3:
         system("cls");
         fMediaPonderada(Vetor);
         break;
      case 4:
         system("cls");
         fDesvioPadrao(Vetor);
         break;
      case 5:
         system("cls");
         fAcharMaiorEMenor(Vetor);
         break;
      case 6:
         system("cls");
         printf("======================================================\nSaíndo...\n======================================================");
         Sleep(1000);
         system("cls");
         break;
      default :
         system("cls");
         printf("======================================================\nEscolha inválida...\n======================================================");
         Sleep(1000);
         system("cls");
      }

   }while(Escolha != 6 );
}

float fEntradaDeDados(){
   int i;
   float Valores;
   system("cls");

   for(i=0; i<=4; i++){
      printf("\nDigíte o %iº valor: ",i+1);
      scanf("%f", &Valores);
      Vetor[i] = Valores;
      printf("Valor da posição %iº = %.2f\n",i , Vetor[i]);
   }
   system("cls");
   printf("======================================================\nValores adicionados...\n======================================================");
   Sleep(1000);
   system("cls");

}

float fMedia(float Vetor[5]){
   float Media;
   Media = fSoma(Vetor) / 5;
   //printf("A média aritimética dos valores é: %.3f", Media);
   //Sleep(3000);
   //system("cls");
   return Media;
}

float fMediaPonderada(float Vetor[5]){
   int i;
   float Peso;
   float ValMediaPonderada[5],SomaVal = 0, SomaPeso = 0, MediaPonderada;

      for(i=0; i<=4; i++){
         printf("\nDigíte o peso do %iº valor: ",i+1);
         scanf("%f", &Peso);
         ValMediaPonderada[i] = Peso*Vetor[i];
         SomaVal += ValMediaPonderada[i];
         SomaPeso += Peso;
         printf("Valor da posição %iº = %.2f\nSoma: %.2f\nSomaPeso: %.2f\n",i+1 , ValMediaPonderada[i], SomaVal, SomaPeso);
   }

   Sleep(1000);
   system("cls");

   MediaPonderada = SomaVal/SomaPeso;
   printf("\n======================================================\nA média ponderada dos valores é: %.3f\n======================================================", MediaPonderada);

   Sleep(3000);
   system("cls");
}

float fAcharMaiorEMenor(float Vetor[5]){
   int i;
   float Maior=0, Menor=0;
   Maior = Vetor[0];
   Menor = Vetor[0];
   for(i=0; i<=4; i++){

      if(Vetor[i] > Maior)
         Maior = Vetor[i];

      if(Vetor[i] < Menor)
         Menor = Vetor[i];

   }
   printf("\n======================================================\nO maior valor é: %.3f\nO menor valor é: %.3f\n======================================================", Maior, Menor);

   Sleep(3000);
   system("cls");
}

float fDesvioPadrao(float Vetor[5]){
   int i;
   float vDesvioPadrao[5];
   for(i=0; i<=4; i++){
      if(fMedia(Vetor)>Vetor[i])
         vDesvioPadrao[i] = fMedia(Vetor) - Vetor[i];
      else
         vDesvioPadrao[i] =  Vetor[i] - fMedia(Vetor);
      printf("Desvio padrão: %.2f \n", vDesvioPadrao[i]);
   }
}

float fSoma(float Vetor[5]){
   int i;
   float Soma=0;

   for(i=0; i<=4; i++)
      Soma += Vetor[i];

   return Soma;
}





