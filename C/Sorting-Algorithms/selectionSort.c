#include <stdio.h>

int main(){
    //entrada de dados
    int i,j,n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    for(i=0;i<n;i++){
        printf("Insira o elemento [%d] do vetor: ", i);
        scanf("%d", &v[i]);
    }

    for(i=0;i<n-1;i++){ //em i = n-2 o vetor termina de estar ordenado
        int menor = v[i]; //menor elemento é o v[i] atual(começa na v[0])
        int pos = i; //pos guarda o indice em i(posição no vetor) onde o menor valor foi encontrado
        for(j = i+1; j<n;j++){ //precisa comparar elementos apenas depois de i, ja que v[i] armazena o menor valor por enquanto
            if(v[j] < menor){ //o elemento em j=(i+1) é menor que o menor atual(v[i])?
                menor = v[j]; //se sim, menor é o menor encontrado na posição j
                pos = j; //indice do menor valor se torna j atual
            }
        }
        int temp = v[i];//variavel temporaria para guardar o valor inicial de v[i]
        v[i] = v[pos];//menor elemento é colocado na posicao i, sobescrevendo o que havia anteriormente
        v[pos] = temp;//antigo valor de v[i](armazenado em temp) vai para a posição onde estava o menor
    }
    //saida de dados
    printf("Vetor ordenado: ");
    for(i=0;i<n;i++){
        printf("%d ", v[i]);
    }
}
