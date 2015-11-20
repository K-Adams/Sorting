#include <iostream>
#include< stdio.h>
#include <math.h>

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

void InsertionSort(char* A)
{
  int j;

  for(j=2; j<A.size; j++)//look up using .size for an array in c++
    {
      /* insert A[j] into the sorted sequence A[1 ... j-1] */
      i = j-1;
      while(i > 0 && A[i] > key)
	{
	  A[i+1] = A[i];
	  i = i-1;
	}
      A[i+1] = key;
    }
}

void MergeSort(char* A, int p, int r)
{
  if(p<r)
    {
      q = floor((p+r)/2);
      MergeSort(A, p, q);
      MergeSort(A, q+1, r);
      MergeSort(A,p, q, r);
    }
}
