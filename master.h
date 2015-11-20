#include <iostream>

using std namespace;


void Partition(char *A, int p, int r)
{
  x = A[r];
  i =p-1;
  int j;
  for(j = p; j<r-1; j++)
    {
      if(A[j] <= x)
	{
	  i = i+1;
	  A[i] = A[j];
	}
      A[i+1]= A[r];
    }
  return i + 1;
}

void QuickSort(char *A, int p, int r)
{
  if(p < r)
    {
      q = Partition(A,p,r);
      QuickSort(A, p, q-1);
      QuickSort(A, q+1, r);
    }
}
