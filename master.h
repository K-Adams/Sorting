#include <iostream>

using std namespace;

// the following is from the pseudocode in chapter 7 powerpoint

int Partition(char *A, int p, int r)
{
  char x = A[r];
  int i = p-1;
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
