#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "foo.h"
#include <unistd.h>

char ** parse_args( char * line ){
  char** args;
  args=malloc(100);
  char* curr=line;
  char* token;
  int ind=0;
  while(&curr[0]){
    args[ind]=strsep(&curr, " ");
    ind++;
  }
  return args;
}
