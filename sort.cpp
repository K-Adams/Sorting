//main cpp file to hold main, and master.h for the project 3
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <utility>
#include <algorithm>
#include "master.h"
#include <stdlib.h>
using namespace std;

//UPDATE: cmd line input Parsing bugs FIXED
//Quicksort function WORKING
//TODO: NEED TO FIX UP OUTPUT TO SPECS
int main(int argc, char * argv[])
{
  int size = 0;
  int index = 0;
  int input[25];
  // int i = atoi(argv[3 + index]);
  int *B = input;

  if(argc < 3 )
  {
    cout<<"Command character error"<<endl;
    return 0;
  }

  cout << "argc = " << argc << endl; 
  // for(i = 0; i < argc; i++) 
  //cout << "argv[" << i << "] = " << argv[i] << endl; 
  //return 0; 

  //if(argv[1] != '-q' || argv[1] != '-i' || argv[1] != '-m')
  //{
  //cout<<"Command character error"<<endl;
  //return 0;
  //}
  while((strncmp (argv[1],"-q",2) == 0))
  {
    if(index < (argc - 2))
      {
	input[index] = atoi(argv[2 + index]);//seg faults here. loop continues to enter conditional after parsing all inputs. cannot halt
	cout<<"Input: "<<input[index]<<endl;
	index++;
	size++;
      }
    if(index == (argc - 2))
      {
	input[index+1] = '\0';
	break;
      }
    QuickSort(B, input[0], input[size-1], size);
  }  
  //QuickSort(B, input[0], input[size-1], size);//Quicksort is operating as intended                                                                                        
  cout<<endl;
  cout<<"Input size: "<< size<< endl;
  return EXIT_SUCCESS;
}
