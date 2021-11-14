#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "foo.h"
#include <unistd.h>
int main(){
  char t[100]= "ls -a -l";
  char** out;
  out=parse_args(t);
  execvp(out[0], out);
  free(out);
  return 0;
}
