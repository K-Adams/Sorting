#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <stdlib.h>

using namespace std;

//total num comparisons. 
long c = 0;

int Partition(int *A, int left, int right)
{
  int  p = left;
  int pivot = A[left];
 
  for(int i = left+1 ; i <= right ; i++)
    {
      c++;
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
  c++;
  if(left<right)
    {
      pivot = Partition(A, left, right); 	
      QuickSort(A, left, pivot-1);
      QuickSort(A,pivot+1,right);
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
}

void InsertionSort(int *A, int size)
{
  int j;
  int i;
  int key = 0;
  for(j=1; j<size; j++)
    {
      c++;
      key = A[j];
      // insert A[j] into the sorted sequence A[1 ... j-1] 
      i = j-1;
      while(i >= 0 && A[i] > key)
	{
	  A[i+1] = A[i];
	  i = i-1;
	}
      A[i+1] = key;
    }
}
 

void Merge(int *A, int low, int mid, int high)
{
  int i, j, k;
  int n1 = mid - low + 1;
  int n2 = high - mid;
  int L[n1];
int R[n2]; 

   for(i = 0; i < n1; i++)
    {
      L[i] = A[low + i];
    }
 
  for(j = 0; j < n2; j++)
    { 
      R[j] = A[mid + j+1];
    }

  i = 0;
  j = 0;

  for(k = low; k<=high; k++)
    {
      c++;
      if(i<n1 && ((j>=n2)|| (L[i] <= R[j])))
	{
	  A[k] = L[i];
	  i = i + 1;
	}
      else
	{
	  A[k] = R[j];	    
	  j = j + 1;
	}
    }
}

void MergeSort(int *A, int low, int high)
{
  int q;
  c++;
  if(low<high)
    {
      q = floor((low+high)/2);
      MergeSort(A, low, q);
      MergeSort(A, q+1, high);
      Merge(A,low, q, high);
    }
}

long getComparison()
{
  return c;
}

void resetComparison()
{
  c = 0;
}
