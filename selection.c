#include <stdio.h>
#include <conio.h>
int main()
{
    int array[100], n, i, j, minpos, swap;

   printf("Enter number of elements\n");
   scanf("%d", &n);

   printf("Enter %d integers\n", n);

   for ( i = 0 ; i < n ; i++ )
      scanf("%d", &array[i]);

   for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      minpos = i;

      for ( j = i + 1 ; j < n ; j++ )
      {
         if ( array[minpos] > array[j] )
            minpos = j;
      }
      if ( minpos != i )
      {
         swap = array[i];
         array[i] = array[minpos];
         array[minpos] = swap;
      }
      printf("iteration %d",i);
      for ( int k = 0 ; k < n ; k++ )
      printf(" %d", array[k]);
   }

   printf("Sorted list in ascending order:\n");

   for ( i = 0 ; i < n ; i++ )
      printf("%d\n", array[i]);
      return 0;

   }

