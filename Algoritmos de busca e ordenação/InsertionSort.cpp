#include <iostream>
using namespace std;


void InsertionSort (int l[] , int n){
    for (int i = 1 ; i < n ; i++){
        int atual = l[i];
        int j = i-1;

        while (j > 0 && l[j] > atual){
            l[j+1] = l[j];
            j = j-1;
        }
        
        l[j+1] = atual; 
    }

    
}

void imprimirListaOrdenada(int l[], int n) {
    InsertionSort(l, n);

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << l[i] << " ";
    }
    cout << endl;
}

int main (){

    const int n = 9;
    int l[n] = {6,3,12,2,4,5,10,1,9};


    cout << " Ordenando a lista pelo selection sort:"  << endl;
    imprimirListaOrdenada(l,n);

    // melhor caso o(n)
    // caso médio o(n²)
    // pior caso o(n²)




    return 0;
}