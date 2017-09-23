#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 1000

int* read_array(int &size);
int** ptr_array (int size, int *array);
void sort_array(int size, int **pointer_array, int *array);

int main (void)
{
  int size;


  int *array = read_array(size);
  int **pointer_array = ptr_array(size, array);
  sort_array(size, pointer_array, array);

  printf("\n");
  for (int i = 0; i < size; i++)
       printf("%d ", *pointer_array[i]);

  return 0;
}

int* read_array(int &size)
{
   int *array;
   #define FLUSH while (getchar() != '\n')
   array = (int*)calloc(MAX_SIZE, sizeof(int));

   printf("You may enter up to 1000 integers.\n"
         "How many would you like to enter?\n");

   scanf("%d", &size);

   if (size > 1000)
      size = 1000;

   //array = (int*)realloc(array, size * sizeof(int));
   int * realloc (int* array, int size);


   printf("Enter your numbers: \n");
   for (int i = 0; i < size; i++)
      scanf("%d", &array[i]);
   array[size] = NULL;


   return array;
}

int** ptr_array (int size, int *array)
 {
   int **pointer_array;
   pointer_array = (int**)calloc((size + 1), sizeof(int));

      for (int i = 0; i < size; i++)
         pointer_array[i] = &array[i];
      pointer_array[size] = NULL;


   return pointer_array;

}

void sort_array(int size, int **pointer_array, int *array)
 {
   int walk;
   int temp;
   bool located;



      for (int current = 1; current < size; current++)
      {
         located = false;
         temp = *pointer_array[current];
         for (walk = current - 1; walk >= 0 && !located;)
            if (temp < *pointer_array[walk])
            {
               pointer_array[walk + 1] = &array[walk];
               walk--;
            }
            else
               located = true;
         pointer_array[walk + 1] = &array[current];
      }
return;
 }
