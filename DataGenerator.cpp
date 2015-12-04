#include <iostream>
#include "master.h"
#include <stdlib.h>
#include <time.h>

int main()
{
  long avgcompareQ[100];
  long avgcompareI[100];
  long avgcompareM[100];
  int s;
  int i;
  long totalQ;
  long totalI;
  long totalM;
  int k;
  int f;

  srand(time(NULL));
  for(s = 1000; s <= 100000; s+=1000)
    {
      totalQ = 0;
      totalI = 0;
      totalM = 0;

      for(i = 0; i <50; i++)
	{
	int *array;
      	array = (int*)malloc(sizeof(int)*s);	  
	  for(f = 0; f<s; f++)
	    {
	      array[f] = rand()%100000;
	    }

	  QuickSort(array, 0, s-1);
	  totalQ += getComparison();
	  resetComparison();
	  MergeSort(array, 0, s - 1);
	  totalM += getComparison();
          resetComparison();
	  InsertionSort(array, s);
	  totalI += getComparison();
          resetComparison();
	  free(array);
	}
      totalQ = totalQ/50;
      totalI = totalI/50;
      totalM = totalM/50;

      avgcompareQ[s/1000 - 1] = totalQ;
      avgcompareI[s/1000 - 1] = totalI;
      avgcompareM[s/1000 - 1] = totalM;

      //cout<<"Average comparison Q: "<<totalQ<<endl;
      //cout<<"Average comparison I: "<<totalI<<endl;
      //cout<<"Average comparison M: "<<totalM<<endl;

    }

  cout<<"Average comp Quicksort: "<<endl;

  for(k = 0; k<100; k++)
    {
      cout<<avgcompareQ[k]<<endl;
    }

  cout<<"Average comp Insertsort: "<<endl;

  for(k = 0; k<100; k++)
    {
      cout<<avgcompareI[k]<<endl;
    }
  cout<<"Average comp Mergesort: "<<endl;

  for(k = 0; k<100; k++)
    {
      cout<<avgcompareM[k]<<endl;
    }

  return EXIT_SUCCESS;
}
