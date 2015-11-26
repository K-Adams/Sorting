//main cpp file to hold main, and master.h for the project 3
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <utility>
#include <algorithm>
#include "master.h"
#include <stdlib.h>
using namespace std;

//UPDATE
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
    if(index <= (argc - 2))
    {
      input[index] = atoi(argv[2 + index]);
      cout<<"Input: "<<input[index]<<endl;
      index++;
      size++;
    }
    QuickSort(B, input[0], input[size-1], size);//issues with the first parameter potentially seg fault
    cout<<endl;
    cout<<"Input size: "<< size<< endl;
  }  
  return EXIT_SUCCESS;
}
