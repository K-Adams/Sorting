#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <stdlib.h>

using namespace std;

// the following is from the pseudocode in chapter 7 powerpoint

//total num comparisons. Placs c++ in the sorting function.
//Called in PrintArray
int c = 0;

int Partition(int *A, int left, int right)
{
  int  p = left;
  int pivot = A[left];
 
  for(int i = left+1 ; i <= right ; i++)
    {
      /* If you want to sort the list in the other order, change "<=" to ">" */
      if(A[i] <= pivot)
        {
	  p++;
	  std::swap(A[i], A[p]);
        }
    }
  //this is a preset c++ swapping algorithm under #include <algorithm>
  std::swap(A[p], A[left]);
 
  return p;
}

void QuickSort(int *A, int left, int right)
{
  int pivot;
  if(left<right)
    {
      pivot = Partition(A, left, right); 	
      QuickSort(A, left, pivot-1);
      QuickSort(A,pivot+1,right);
      c++;
    }
}

void PrintArray(int A[], int size)
{
  int i;
  for(i = 0; i<size; i++)
    {
      cout<<A[i]<<" ";
    }
  cout<<endl;
  cout<<"Total # Comparisons: "<<c<<endl;
}

//Insertion sort psuedo code pulled from ch1-3 ppt
//Currently not working properly
//May need supplemental functions
void InsertionSort(int *A, int size)
{
  int j;
  int i;
  int key = 0;
  for(j=2; j<size; j++)
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

//Merge sort psuedocode pulled from ch1-3 ppt
//The first two random box symbols are infinity symbols from the pseudo code
//not sure what to do with the infinity symbol
//The last box symbol isa <= symbol from the pseudo code 
/*
void MergeSort(int *A, int p, int r)
{
  int q;
  if(p<r)
    {
      q = floor((p+r)/2);
      MergeSort(A, p, q);
      MergeSort(A, q+1, r);
      MergeSort(A,p, q, r);
    }
}

void Merge(int *A, int p, int q, int r)
{
 n1 = q – p + 1
 n2 = r – q
Let L[1 … n1 + 1] and R[1 … n2 + 1] be new arrays
for i =1 to n1
    L[i] = A[p + i - 1] 
for j = 1 to n2 
    R[j] = A[q + j]
 L[n1 + 1] = 
R[n2 + 1] = 
i = 1
j = 1
 for k = p to r
    if L[i]  R[j]
         A[k] = L[i]
         i = i + 1
      else A[k] = R[j]
         j = j + 1

}

*/
