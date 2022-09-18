#include <stdio.h>
#include <stdlib.h>
//Proporção para quantidade de sabão à ser usada na maquina
float proporcaoSabao(float num){
    num = (num * 250)/50;
    return num;
}
//Proporção para quantidade de Candida à ser usada na maquina
float proporcaoCandida(float num){
    num = (num * 200)/50;
    return num;
}
//Proporção para quantidade de Amaciante à ser usada na maquina
float proporcaoAmaciante(float num){
    num = (num * 100)/50;
    return num;
}

int main(){
    float agua, roupakg = 0;
    roupakg = agua;

    printf("Por favor informe o peso de roupas que sera colocada na maquina\n");
    scanf("%f",&roupakg);
    if(roupakg > 50){
        while(roupakg > 50){
            printf("Capacidade maxima da maquina atingida, por favor coloque ate 50 quilos\nInsira o valor novamente\n");
            scanf("%f",&roupakg);
        }

    }

    float sabao = proporcaoSabao(roupakg);
    float candida = proporcaoCandida(roupakg);
    float amaciante = proporcaoAmaciante(roupakg);

    printf("Para %.1f kilos de roupas sera usado as seguintes quantias:\nAgua = [%.1fL]\nSabao = [%.1fg]\nCandida = [%.1fml]\nAmaciante = [%.1fml]\n\n",roupakg,roupakg,sabao,candida,amaciante);
   

    float tempo;
    printf("Insira a duracao da lavagem em minutos\n");
    scanf("%f",&tempo);

    float valorsabao = (sabao/5600)* 54.80; // Preço do sabão omo de 5,6kg */
    float valorcandida = (candida/5000)* 11.4; // Preço da candida 5l */
    float valoramaciante = (amaciante/2000)* 6.99; // Preço do amaciante */
    float salario = (tempo/60); /* Gasto com funcionario */
    salario*=(1500/(22*8));
    float lucro = (roupakg*15)-((valorsabao + valorcandida) + (valoramaciante + salario));
    printf("\nLucro [R$ %.2f]\n---------- Custos ----------\nSabao [R$ %.2f]\nCandida [R$ %.2f]\nAmaciante [R$ %.2f]\nSalario [R$ %.2f]\n",lucro,valorsabao,valorcandida,valoramaciante,salario);
    return 0;
}
