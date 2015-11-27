
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <stdlib.h>

using namespace std;

// the following is from the pseudocode in chapter 7 powerpoint

int c = 0;

int Partition(int *A, int left, int right)
{
  /*
  int middle = left + (right - left)/2;
  int pivot = A[middle];
  
//if doesnt work use std::swap()....
  //std::swap(A[middle], A[left]);
 
  int i = left-1;
  int j;
  for(j = left; j<right-1; j++)
    {
      if(A[j] <= pivot)
	{
	  i = i+1;
	  A[i] = A[j];
	}
      A[i+1]= A[right];
    }
  std::swap(A[middle], A[left]);

  return i + 1;
*/
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

/*
void InsertionSort(char* A, int size)
{
  int j;

  for(j=2; j<size; j++)//look up using .size for an array in c++
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
