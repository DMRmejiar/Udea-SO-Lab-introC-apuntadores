#include<stdio.h> 

void swap(int*, int*);
int partition(int [], int, int);
void quickSort(int [], int, int);
void printArray(int [], int);
void test(void);

int main()
{
    test();
    return 0;
}

//  Funcion para intercambiar dos valores
void swap(int* a, int* b) 
{ 
    int tmp = *a; 
    *a = *b; 
    *b = tmp; 
} 
  
/*
    Ubica todos los elementos mayores a la derecha del pivote 
    y todos los más pequeños a la izquierda del mismo, retorna 
    la ubicacion del pivote.
*/
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];      // Pivote
    int i = (low - 1);          // Indice del elemento más pequeño 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        /*
            Si el actual elemento es más pequeño que el pivote
            incrementa el indice del elemento más pequeño
        */
        if (arr[j] < pivot) 
        { 
            i++;
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/**
 * @brief Metodo de ordenamiento quickSort
 * 
 * @param arr Lista de enteros
 * @param low Indice inicial
 * @param high Indice final
 * 
 * @return Deja la lista ordenada de manera decendente
*/
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

void test() 
{ 
    int arr[] = {10, 7, 8, 9, 1, 30, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int center = n/2; 
    printf("Lista de enteros\n");
    printArray(arr, n);
    quickSort(arr, 0, n-1); 
    printf("Media: %d\n", arr[center]);
} 