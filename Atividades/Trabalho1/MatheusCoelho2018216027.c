// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Matheus Tasso Silva Coelho
//  email: matheustassosc@gmail.com
//  Matrícula: 2018216027
//  Semestre: 2º

#include <stdio.h>
#include <stdlib.h>

int somar(int x, int y) {
    int soma = 0;
    soma = x + y;
    return soma;
}

int fatorial(int x){ 
    int fat = 1;
    return fat;
}

int teste(int a){
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}

/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */

int q1(char *datanum){
    int datavalida = 1;
    int i, j, k, dia, mes, ano;
    char sDia[3], sMes[3], sAno[5];
    
    for(i =0; datanum[i] != '/'; i++){
        sDia[i] = datanum[i];
    }
    dia = atoi(sDia);

    for(i++, j =0; datanum[i] != '/'; j++, i++){
        sMes[j] = datanum[i];
    }
    mes = atoi(sMes);

    for(i++, k =0; datanum[i] != '\0'; k++, i++){
        sAno[k] = datanum[i];
    }
    ano = atoi(sAno);

    if (ano >= 0 && ano < 10000){
        if (mes >= 1 && mes <13) {
            if (dia >= 1 && dia < 32 && mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
            {
                datavalida = 1;
            }
            else if (dia >= 1 && dia < 31 && mes == 4 || mes == 6 || mes == 9 || mes == 11)
            {
                datavalida = 1;
            }
            else if (dia >= 1 && dia < 29 && mes == 2){
                datavalida = 1;
            }
            else if (dia == 29 && mes == 2 && (ano % 4 == 0 && ano % 100 != 0)|| ano % 400 == 0){
                datavalida = 1;
            }
            else{
                datavalida = 0;
            }        
        }
        else{
            datavalida = 0;
        }
    }

    if (datavalida)
        return 1;
    else
        return 0;
}

/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. 
    Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. 
    Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
 */
int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos){

    int nDias, nMeses, nAnos;
    if (q1(datainicial) == 0)
        return 2;

    nDias = 4;
    nMeses = 10;
    nAnos = 2;
    *qtdDias = nDias;
    *qtdAnos = nAnos;
    *qtdMeses = nMeses;

    return 1;
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. 
    Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive){

    int qtdOcorrencias = 0;
    int i =0;

    if(isCaseSensitive == 0){
        while (texto[i] != '\0') {
            if(texto[i] != '\n') {   
                if (texto[i] == c) {
                    qtdOcorrencias++; 
                }
            }
            i++;
        }
    }

    if(isCaseSensitive == 1){
        while (texto[i] != '\0') {
            if(texto[i] != '\n') {   
                if (texto[i] == c) {
                    qtdOcorrencias++; 
                }
            }
            i++;
        }
    }

    return qtdOcorrencias;
}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que 
    irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;
 */
int q4(char *strTexto, char *strBusca, int posicoes[30]){
    int qtdOcorrencias = -1;

    return qtdOcorrencias;
}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num){
    int resto, invert = 0;

    while(num != 0){
        resto = num%10; 
        invert =  invert*10 + resto; 
        num = num/10; 
    }
    num = invert;
    
    return num;
}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca){
    int qtdOcorrencias;
    return qtdOcorrencias;
}
