#include <stdio.h>

int main(){
    int dias;
    int pessoas;
    int pacote;

    printf("Menu de Pacotes\n");
    printf("1-Viagem\n");
    printf("2-Hotel\n");
    printf("3-Aluguer\n");
    printf("4-Viagem + hotel\n");
    printf("5-Hotel + aluguer\n");
    printf("6-Viagem + aluguer\n");
    printf("7-Viagem + hotel + aluguer\n");
    scanf(" %d", &pacote);

    if (pacote == 1)
    {
        viagens();
    }
    else if (pacote == 2)
    {
        hotel();
    }
    else if (pacote == 3)
    {
        aluguer();
    }
    else if (pacote == 4)
    {
        /* code */
    }
    else if (pacote == 5)
    {
        /* code */
    }
    else if (pacote == 6)
    {
        /* code */
    }
    else if (pacote == 7)
    {
        /* code */
    }
    
    
    
    
    
    


}
int viagens(void){
    int pessoas;
    int destino;
    const int precoViagem = 620;
    int soma;
    int resultadoSoma;



    printf("Diga quantas pessoas\n");
    scanf(" %d",&pessoas);
    printf("Onde quer ficar\n");
    printf("1-Lisboa\n");
    printf("2-Porto\n");
    printf("3-Rabo Peixe\n");
    scanf(" %d", &destino);

    if (destino == 1)
    {
        soma = precoViagem * 0.30;
        resultadoSoma = precoViagem + soma;
        printf("preco final %d", resultadoSoma);
    }
    else if (destino == 2)
    {
        soma = precoViagem * 0.26;
        resultadoSoma = precoViagem + soma;
        printf("preco final %d", resultadoSoma);
    }
    else if (destino == 3)
    {
        soma = precoViagem * 0.96;
        resultadoSoma = precoViagem - soma;
        printf("preco final %d", resultadoSoma);
    }
}
int hotel(void){
    int pessoas;
    int destino;
    const int preco = 40;
    int soma;
    int soma2;


    printf("Digas quantaas pessoas\n");
    scanf(" %d", pessoas);
    printf("Qual hotel quer ficar?\n");
    printf("1-Tivoli Lisboa\n");
    printf("2-Universo Porto\n");
    printf("3-Caranguejo\n");
    scanf(" %d", destino);
    
    if (destino == 1)
    {
        soma = preco * 0.20;
        soma2 = preco + soma;
        printf("Custo %d", soma2); 

    }
    else if (destino == 2)
    {
        soma = preco * 0.15;
        soma2 = preco + soma;
        printf("Custo %d", soma2);
    }
    else if (destino == 3)
    {
        soma = preco * 0.94;
        soma2 = preco - soma;
        printf("Custo %d", soma2);
    }
}
int aluguer(void){
    int pessoas;
    int aluguer;
    int soma;
    int soma2;
    const int preco = 29;


    printf("Digas quantaas pessoas\n");
    scanf(" %d", pessoas);
    printf("Qual hotel quer ficar?\n");
    printf("1-Europcar\n");
    printf("2-Altis\n");
    printf("3-Carroça\n");
    scanf(" %d", aluguer);


        if (aluguer == 1)
    {
        soma = preco * 0.15;
        soma2 = preco + soma;
        printf("Custo %d", soma2); 
    }
    else if (aluguer == 2)
    {
        soma = preco * 0.16;
        soma2 = preco + soma;
        printf("Custo %d", soma2);
    }
    else if (aluguer == 3)
    {
        soma = preco * 0.98;
        soma2 = preco - soma;
        printf("Custo %d", soma2);
    }
    return soma2;

}
int viagemHotel(){
    int pessoas;
    int destino;
    int hotel;
    const int precoViagem = 620;
    const int precoHotel = 40;
    int soma;
    int resultadoSoma;
    int somaHotel;
    int somaHotel2;



    printf("Diga quantas pessoas\n");
    scanf(" %d",pessoas);
    printf("Onde quer ficar\n");
    printf("1-Lisboa\n");
    printf("2-Porto\n");
    printf("3-Rabo Peixe\n");
    scanf(" %d", destino);

    printf("Qual hotel quer ficar?\n");
    printf("1-Tivoli Lisboa\n");
    printf("2-Universo Porto\n");
    printf("3-Caranguejo\n");
    scanf(" %d", hotel);

    if (destino == 1)
    {
        soma = precoViagem * 0.30;
        resultadoSoma = precoViagem + soma;
        printf("preco final %d", resultadoSoma);
    }
    else if (destino == 2)
    {
        soma = precoViagem * 0.26;
        resultadoSoma = precoViagem + soma;
        printf("preco final %d", resultadoSoma);
    }
    else if (destino == 3)
    {
        soma = precoViagem * 0.96;
        resultadoSoma = precoViagem - soma;
        printf("preco final %d", resultadoSoma);
    }




    if (destino == 1)
    {
        somaHotel = precoHotel * 0.20;
        somaHotel = precoHotel + somaHotel;
        printf("Custo %d", somaHotel2); 

    }
    else if (destino == 2)
    {
        somaHotel = precoHotel * 0.15;
        somaHotel2 = precoHotel + somaHotel;
        printf("Custo %d", somaHotel2);
    }
    else if (destino == 3)
    {
        somaHotel = precoHotel * 0.94;
        somaHotel2 = precoHotel - somaHotel;
        printf("Custo %d", somaHotel2);
    }



}