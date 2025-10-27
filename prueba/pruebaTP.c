#include <stdio.h>
#include <stdlib.h>

#define MAX 50

// --- Estructuras de datos ---
typedef struct {
    int x, y;
} Punto;

typedef struct Nodo {
    Punto punto;
    struct Nodo *sig;
} Nodo;

typedef struct {
    Punto datos[MAX];
    int frente, final;
} Cola;

// --- Prototipos ---
void inicializarCola(Cola *q);
int colaVacia(Cola *q);
void encolar(Cola *q, Punto p);
Punto desencolar(Cola *q);
void agregarPunto(Nodo **lista, int x, int y);
void imprimirMapa(int filas, int cols, int mapa[MAX][MAX], Punto robot);
int bfs(int mapa[MAX][MAX], int filas, int cols, Punto inicio, Punto destino, int mostrarRuta);

// --- Función principal ---
int main() {
    int mapa[MAX][MAX];
    int filas = 10, cols = 10;

    // Mapa base (0 = libre, 1 = obstáculo, 2 = punto de recolección)
    int mapaBase[10][10] = {
        {0,0,0,0,0,1,0,0,0,0},
        {0,1,1,0,0,1,0,1,0,0},
        {0,1,0,0,0,0,0,1,0,0},
        {0,0,0,1,1,1,0,0,0,0},
        {0,0,0,0,0,0,0,1,1,0},
        {0,1,0,0,1,0,0,0,0,0},
        {0,0,0,1,0,0,1,0,0,0},
        {0,1,0,0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0,1,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    // Copiamos el mapa base
    for(int i=0;i<filas;i++)
        for(int j=0;j<cols;j++)
            mapa[i][j] = mapaBase[i][j];

    // Lista de puntos de recolección
    Nodo *recolecciones = NULL;
    agregarPunto(&recolecciones, 2, 8);
    agregarPunto(&recolecciones, 5, 1);
    // agregarPunto(&recolecciones, 9, 9);

    Punto robot = {0,0};
    printf("Simulacion de sistema de recoleccion de residuos\n");
    imprimirMapa(filas, cols, mapa, robot);

    Nodo *actual = recolecciones;
    while (actual != NULL) {
        printf("\nDestino de recoleccion en (%d,%d)\n", actual->punto.x, actual->punto.y);
        int encontrado = bfs(mapa, filas, cols, robot, actual->punto, 1);

        printf("DEBUG: encontrado = %d\n", encontrado);

        if (!encontrado)
            printf("No se pudo acceder al punto de recoleccion.\n");
        else {
            printf("\nRecoleccion completada en (%d,%d)\n", actual->punto.x, actual->punto.y);
            robot = actual->punto;
        }

        actual = actual->sig;
    }

    printf("\nTodas las recolecciones completadas.\n");
    return 0;
}

// --- Implementaciones ---

void inicializarCola(Cola *q) {
    q->frente = 0;
    q->final = 0;
}

int colaVacia(Cola *q) {
    return q->frente == q->final;
}

void encolar(Cola *q, Punto p) {
    q->datos[q->final++] = p;
}

Punto desencolar(Cola *q) {
    return q->datos[q->frente++];
}

void agregarPunto(Nodo **lista, int x, int y) {
    Nodo *nuevo = malloc(sizeof(Nodo));
    nuevo->punto.x = x;
    nuevo->punto.y = y;
    nuevo->sig = NULL;
    if (*lista == NULL)
        *lista = nuevo;
    else {
        Nodo *temp = *lista;
        while (temp->sig != NULL)
            temp = temp->sig;
        temp->sig = nuevo;
    }
}

void imprimirMapa(int filas, int cols, int mapa[MAX][MAX], Punto robot) {
    printf("\nMapa:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == robot.x && j == robot.y)
                printf("R ");
            else if (mapa[i][j] == 1)
                printf("X ");
            else if (mapa[i][j] == 2)
                printf("C ");
            else
                printf(". ");
        }
        printf("\n");
    }
}

// --- BFS para buscar camino más corto ---
int bfs(int mapa[MAX][MAX], int filas, int cols, Punto inicio, Punto destino, int mostrarRuta) {
    int visitado[MAX][MAX] = {0};
    Punto predecesor[MAX][MAX];

    // Inicializamos predecesores con valores inválidos
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < cols; j++)
            predecesor[i][j] = (Punto){-1, -1};
    
    int movX[4] = {-1, 1, 0, 0};
    int movY[4] = {0, 0, -1, 1};

    Cola cola;
    inicializarCola(&cola);
    encolar(&cola, inicio);
    visitado[inicio.x][inicio.y] = 1;

    int encontrado = 0;

    while (!colaVacia(&cola)) {
        Punto actual = desencolar(&cola);

        if (actual.x == destino.x && actual.y == destino.y) {
            encontrado = 1;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = actual.x + movX[i];
            int ny = actual.y + movY[i];

            if (nx >= 0 && ny >= 0 && nx < filas && ny < cols &&
                mapa[nx][ny] != 1 && !visitado[nx][ny]) {
                visitado[nx][ny] = 1;
                predecesor[nx][ny] = actual;
                Punto nuevo = {nx, ny};
                encolar(&cola, nuevo);
            }
            // Opcional: mostrar obstáculos adyacentes
            // else if (mapa[nx][ny] == 1) {
            //     printf("Obstáculo detectado en (%d,%d)\n", nx, ny);
            // }
        }
    }

    if (!encontrado) return 0;

    // Reconstruir ruta
    // Punto camino[MAX];
    // int pasos = 0;
    // Punto paso = destino;

    // while (!(paso.x == inicio.x && paso.y == inicio.y)) {
    //     camino[pasos++] = paso;
    //     paso = predecesor[paso.x][paso.y];

    // }

    if (mostrarRuta) {
        Punto camino[MAX];
        int pasos = 0;
        Punto paso = destino;

        while (!(paso.x == inicio.x && paso.y == inicio.y)) {
        camino[pasos++] = paso;
        paso = predecesor[paso.x][paso.y];

        }

        printf("\nRuta encontrada (%d pasos):\n", pasos);
        for (int i = pasos - 1; i >= 0; i--) {
            printf("-> (%d,%d)\n", camino[i].x, camino[i].y);
        }
    }

    return 1;
}
