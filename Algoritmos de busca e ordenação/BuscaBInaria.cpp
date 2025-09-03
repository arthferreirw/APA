
#include <iostream>
using namespace std;

int BuscaBinaria(int l[] , int n , int k){

    int esq = 1;
    int dir = n;

    while (esq < dir){

        int meio = (esq + dir)/2;

        if (k > l[meio]){
            esq = meio + 1;
        }else{
            dir = meio;
        }

        if(l[esq] == k){
            
            return esq;

        }

        

    }

    return -1;
}


int main (){


const int n = 10;
int l[n] = {1,2,3,4,5,6,7,8,9,10};

cout<< " a posicao do numero 7 da lista eh: " << BuscaBinaria(l ,n , 7) << endl;




return 0;


}