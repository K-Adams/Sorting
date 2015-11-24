#include <iostream>
#include< stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>

using std namespace;

// the following is from the pseudocode in chapter 7 powerpoint

int Partition(int *A, int left, int right)
{
int middle = left + (right - left)/2;
int pivot = A[middle];

//if doesnt work use std::swap()....
swap(A[middle], A[left]);

  int i = left-1;
  int j;
  for(j = left; j<r-1; j++)
    {
      if(A[j] <= pivot)
	{
	  i = i+1;
	  A[i] = A[j];
	}
      A[i+1]= A[right];
    }
  return i + 1;
}

void QuickSort(int *A, int left, int right, const int size)
{
	int p = partition(A, left, right);
	cout << "QSC:" << left << "," << right << " part=" << part << "\n";
	
  if(left < p - right)
    {
      QuickSort(A, left, p-1);
      QuickSort(A, p+1, right);
    }
    
    if(p + 1 < right)
    {
    	Quicksort(A, p + 1, right, size);
    }
}

/*
void InsertionSort(char* A)
{
  int j;

  for(j=2; j<A.size; j++)//look up using .size for an array in c++
    {
      // insert A[j] into the sorted sequence A[1 ... j-1] 
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
*/
