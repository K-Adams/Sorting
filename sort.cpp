#include <iostream>
#include <stdio.h>
#include <string.h>
#include <utility>
#include <algorithm>
#include "master.h"
#include <stdlib.h>
using namespace std;

//main
int main(int argc, char * argv[])
{
  int size = 0;
  int index = 0;
  int input[argc-2];
  long compare=0;

  if(argc < 3 )
  {
    cout<<"Command character error"<<endl;
    return 0;
  }

  if((strncmp (argv[1],"-q",1) != 0) || (strncmp (argv[1],"-i",1) != 0) || (strncmp (argv[1],"-m",1) != 0)) 
    {
      cout<<"Input flag error"<<endl;
      return 0;
    }

  while((strncmp (argv[1],"-q",2) == 0) || (strncmp (argv[1],"-i",2) == 0) || (strncmp (argv[1],"-m",2) == 0))
  {
    if(index < (argc - 2))
      {
	input[index] = atoi(argv[2 + index]);
	index++;
	size++;
      }
    if(index == (argc - 2))
      {
	input[index+1] = '\0';
	break;
      }
  }

  if((strncmp (argv[1],"-q",2) == 0)) 
    {
      QuickSort(input, 0, size-1);
      cout<<"Quick sort: ";
      PrintArray(input, size);
      cout<<"Input size: "<< size<< endl;
      compare = getComparison();
      cout<<"Total # Comparisons: "<<compare<<endl;
    }

  if((strncmp(argv[1], "-i",2)==0))
    {
      InsertionSort(input, size);
      cout<<"Insertion sort: ";
      PrintArray(input, size);
      cout<<"Input size: "<<size<<endl;
      compare= getComparison();
      cout<<"Total # Comparisons: "<<compare<<endl;
    }

  if((strncmp(argv[1], "-m",2)==0))
    {
      MergeSort(input, 0, size-1);
      cout<<"Merge sort: ";
      PrintArray(input, size);
      cout<<"Input size: "<<size<<endl;
      compare= getComparison();
      cout<<"Total # Comparisons: "<<compare<<endl;
    }


  return EXIT_SUCCESS;
}
