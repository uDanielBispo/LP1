#include <stdio.h>
#include <windows.h>

void Dobro();
int Venda ();
float CalcDesconto(float VC);
void Media ();
void Tabuada(F, Q);
float CalcMedia(float P1, float P2);

void main (){
    int Opcao, Numero, QtdeElem;

    printf("Digite a opcao: ");
    scanf("%i", &Opcao);

    while (Opcao < 5)
    {
        switch (Opcao)
        {
        case 1:
            Dobro();
        break;
        case 2:
            Venda();
        break;
        case 3:
            Media();
        break;
        case 4:
            printf("Digite um numero e a quantidade de elementos: ");
            scanf("%i %i", &Numero, &QtdeElem);
            Tabuada(Numero, QtdeElem);
        break;
        }
        Sleep(3000);
        system("cls");
        printf("\nDigite de novo a opcao: ");
        scanf("%i", &Opcao);
    }
}

void Dobro(){
    int Numero, Dobro;

    printf("Digite o numero: ");
    scanf("%i", &Numero);

    Dobro = Numero * 2;
    printf ("%i", Dobro);
}

int Venda (){
    int Codigo, QtdeVend;
    float PrecUnit, ValComp, ValPagar;

    printf("Digite o codigo, a quantidade vendida e o preco por unidade:\n");
    scanf("%i %i %f", &Codigo, &QtdeVend, &PrecUnit);

    ValComp = PrecUnit * QtdeVend;
    ValPagar = ValComp - CalcDesconto(ValComp);

    printf("O valor da compra: %f\nDesconto:  %f\nValor a pagar: %f\n", ValComp, CalcDesconto(ValComp), ValPagar);
}

float CalcDesconto(float VC){
    float Desc;
    if (VC >= 800)
        return 0.15 * VC;
    else
        return 0;

    //return Desc;
}

void Media (){
    int Codigo;
    float Prova1, Prova2;

    printf("Digite o codigo: ");
    scanf("%i", &Codigo);

    while (Codigo > 0)
    {
        printf("Digite o valor da prova 1 e da prova 2: ");
        scanf("%f %f", &Prova1, &Prova2);

        printf("A media das provas e: %.2f\n", CalcMedia(Prova1, Prova2));

        if (CalcMedia(Prova1, Prova2) >= 5)
            printf("Aprovado\n");
        else
            printf("Reprovado\n");

        printf("Digite o codigo: ");
        scanf("%i", &Codigo);
    }
}


float CalcMedia(float P1, float P2){
    return (P1 + P2) / 2;
}

void Tabuada(F, Q){
    int Cont, Resultado;

    for(Cont=1; Cont <= Q; Cont++){
        Resultado = F * Cont;
        printf("%i x %i = %i\n", F, Cont, Resultado);
    }
}
