//main cpp file to hold main, and master.h for the project 3
#include <iostream>
#include <stdio>
#include <utility>
#include <algorithm>
#include "master.h"

int main(char * argv[], int argc)
{
  int size = 0;
  int input[];
  int index = 0;
  if(argc < 3 )
  {
    cout<<"Command character error"<<endl;
    exit();
  }
  if(argv[1] != '-q' || argv[1] != '-i' || argv[1] != '-m')
  {
    cout<<"Command character error"<<endl;
  exit();
  }
  if(argv[1] = '-q')
  {
    for(argc >= 3; size++)
    {
      input[index] = argv[3 + index];
      index ++;
    }
    Quicksort(input, input[0], input[size-1], size);
  }
  
}
