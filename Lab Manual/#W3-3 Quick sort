#include <stdio.h>

void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int partition(int array[], int l, int h) 
{  
  
  int pivot = array[h];
  int i = (l - 1);
 
  for (int j = l; j < h; j++) 
  {
    if (array[j] <= pivot) 
    {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}
void quickSort(int array[], int low, int high) 
{
  if (low < high) 
  {    
    // Select pivot position and put all the elements smaller 
    // than pivot on left and greater than pivot on right
    int pi = partition(array, low, high);    
    // Sort the elements on the left of pivot
    quickSort(array, low, pi - 1);    
    // Sort the elements on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

void printArray(int array[], int size) 
{
  for (int i = 0; i < size; ++i) 
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main() 
{
  int arr[] = {3 , 5 ,7 ,3 ,4,2 ,2, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  quickSort(arr, 0, n - 1);
  printf("Sorted array in ascending order: \n");
  printArray(arr,n);
  }
