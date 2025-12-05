#include <stdio.h>

int main(){
    int Pinjam;
    char Buku[20][20];
    printf("Berapa barang yang ingin di pinjam : "); 
    scanf(" %d", &Pinjam);
    
    
    for (int i = 1; i <= Pinjam; i++){
        printf("Buku ke-%d : ", i);
        scanf(" %s", &Buku[i]);
    }
    for (int j = 1; j <= Pinjam; j++){
        printf("\nBuku ke-%d : %s", j, Buku[j]);
    }

}