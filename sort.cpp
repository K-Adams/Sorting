//main cpp file to hold main, and master.h for the project 3
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <utility>
#include <algorithm>
#include "master.h"
#include <stdlib.h>
using namespace std;

int main(int argc, char * argv[])
{
  int size = 0;
  int index = 0;
  int input[25];
 
  if(argc < 3 )
  {
    cout<<"Command character error"<<endl;
    return 0;
  }
  //if(argv[1] != '-q' || argv[1] != '-i' || argv[1] != '-m')
  //{
  //cout<<"Command character error"<<endl;
  //return 0;
  //}
  if((strncmp (argv[1],"-q",2) == 0))
  {
    const char* text = argv[2+index];
    int number = atoi(text);

    for(argc >= 3; size++;)
    {
      input[index] = number;
      index ++;
    }
    cout<<"Quick sort: ";
    QuickSort(input, input[0], input[size-1], size);
    cout<<endl;
    cout<<"Input size: "<< size<< endl;
  }  
}
