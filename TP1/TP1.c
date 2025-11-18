#include <stdio.h>

void exchange(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

#define N 2  // taille de la matrice

void saisirMatrice(int mat[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("Coéficient [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void afficherMatrice(int mat[N][N]) {
    printf("\nLa matrice est :\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void additionnerMatrice(int mat1[N][N],int mat2[N][N],int mat3[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}

void multiplierMatrice(int mat1[N][N],int mat2[N][N],int mat4[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            mat4[i][j] = 0;
            for(int k = 0; k < N; k++){
                mat4[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
}

int menu() {
    int choix;
    printf("\n=== Menu des opérations ===\n");
    printf("3. Additionner deux matrices\n");
    printf("4. Multiplier deux matrices\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);
    return choix;
}

void SaisirMatrice(int **mat, int *lignes, int *colonnes) {
    printf("nombre de lignes : ");
    scanf("%d", lignes);
    printf(" nombre de colonnes : ");
    scanf("%d", colonnes);

    mat[0] = malloc((*lignes) * (*colonnes) * sizeof(int));
    for(int i = 1; i < *lignes; i++) {
        mat[i] = mat[0] + i * (*colonnes);
    }

    for(int i = 0; i < *lignes; i++) {
        for(int j = 0; j < *colonnes; j++) {
            printf("mat[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void MaxLigne(int **mat, int lignes, int colonnes, int **MaxLig) {
    for (int i = 0; i < lignes; i++) {
        int max = mat[i][0];

        for (int j = 1; j < colonnes; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
        }
        for (int j = 0; j < colonnes; j++) {
            if (mat[i][j] == max) {
                MaxLig[i][j] = 1;
            } else {
                MaxLig[i][j] = 0;
            }
        }
    }
}

void MinCol(int **mat, int lignes, int colonnes, int **MinCol) {
    for (int j = 0; j < colonnes; j++) {
        int min = mat[0][j];

        for (int i = 1; i < lignes; i++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
        for (int i = 0; i < lignes; j++) {
            if (mat[i][j] == min) {
                MinCol[i][j] = 1;
            } else {
                MinCol[i][j] = 0;
            }
        }
    }
}

void pointClos(int **mat, int lignes, int colonnes, int **maxLig, int **minCol, int **som){

    maxLig[0] = malloc((lignes) * (colonnes) * sizeof(int));
    for(int i = 1; i < lignes; i++) {
        maxLig[i] = maxLig[0] + i * (colonnes);}

    minCol[0] = malloc((lignes) * (colonnes) * sizeof(int));
    for(int i = 1; i < lignes; i++) {
        minCol[i] = minCol[0] + i * (colonnes);}

    Mincol(mat, lignes, colonnes, minCol);
    MaxLigne(mat,lignes,colonnes,maxLig);

    som[0] = malloc((lignes) * (colonnes) * sizeof(int));
    for(int i = 1; i < lignes; i++) {
        som[i] = som[0] + i * (colonnes);}

    additionnerMatrice(maxLig,minCol, som);
    for(int i = 0; i < lignes; i++) {
        for(int j = 0; j < colonnes; j++) {
            if(som[i][j]==2){
                printf("%d est un point clot au coord (%d,%d)\n",som[i][j]==2,  i+1 , j + 1);
            }
        }
    }
}

int main() {

    int x = 10;
    int y = 1;

    printf("Avant échange : x = %d, y = %d\n", x, y);
    exchange(&x, &y);
    printf("Après échange : x = %d, y = %d\n", x, y);


    int matrice1[N][N];
    int matrice2[N][N];
    
    saisirMatrice(matrice1);
    afficherMatrice(matrice1);
    saisirMatrice(matrice2);
    afficherMatrice(matrice2);
     
    int matrice3[N][N];
    
    additionnerMatrice(matrice1, matrice2, matrice3);
    afficherMatrice(matrice3);

    int matrice4[N][N];
    
    multiplierMatrice(matrice1, matrice2, matrice4);
    afficherMatrice(matrice4);

    return 0; 
}


