#include <stdio.h>
#define filas 3
#define col 3

int main() {

    int matriz[filas][col] = {
		{3, 4, 8}, 
		{9, 1, 2},
		{6, 5, 7}
	};

    int matriz2[filas][col];

    int cant, t, k = 0, ninterc = 0;
    cant = filas * col;
    int arreglo[cant];


    // paso todo al arreglo
    for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < col; j++) 
		{
			arreglo[k] = matriz[i][j];
            k++;
		}
	}

    printf("arreglo inicial:\n");
    for (int j = 0; j < cant; j++) 
    {
        printf("%d ", arreglo[j]);
    }

    // burbuja opcion 1
    for(int i = 0; i < cant; i++) {
		for(int j = 0; j < cant - 1; j++) {
            // if (arreglo[j] < arreglo[j+1]) /* orden ascendente */
            if (arreglo[j] > arreglo[j+1]) /* orden desscendente */
            {
                t = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = t;
            }
        }

    }
    
    // burbuja opcion 2 (cambia el segundo for)
    // for(int i = 0; i < cant; i++) {
	// 	for(int j = cant - 1; j >= i; j--) {
    //         // if (arreglo[j] < arreglo[j+1]) /* orden ascendente */
    //         if (arreglo[j] > arreglo[j+1]) /* orden desscendente */
    //         {
    //             t = arreglo[j];
    //             arreglo[j] = arreglo[j+1];
    //             arreglo[j+1] = t;
    //         }
    //     }

    // }

    printf("\n");
    printf("arreglo ordenado:\n");
    for (int j = 0; j < cant; j++) 
    {
        printf("%d ", arreglo[j]);
    }
    printf("\n");

    
    // vuelvo a armar la matriz
    k = 0;
    for (int i = 0; i < filas; i++)
	{
        for (int j = 0; j < col; j++) 
		{
            matriz2[i][j] = arreglo[k];
            k++;
		}
	}

    printf("matriz ordenada:\n");
    for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < col; j++) 
		{
			printf("\t %d", matriz2[i][j]);
		}
		printf("\n");
	}

    return 0;
}


// int[3][3] multiplicar(int A[3][3], int B[3][3]) {
//     int A[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int B[3][3] = {
//         {9, 8, 7},
//         {6, 5, 4},
//         {3, 2, 1}
//     };

//     int C[3][3];

//     for (int x = 0; x < 3; x++) {
//         for (int y = 0; y < 3; y++) {
//             C[x][y] = 0;
//             for (int k = 0; k < 3; k++) {
//                 C[x][y] += A[x][k] * B[k][y];
//             }
//         }
//     }
    
//     for (int x = 0; x < 3; x++) {
//         for (int y = 0; y < 3; y++) {
//             printf("%d\t ", C[x][y]);
//         }
//         printf("\n");
//     }

//     return C;
// }