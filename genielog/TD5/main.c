#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char ** argv) {
  char cwd[256];
  printf("%s\n", argv[0]);
  printf("PATH : %s\n", getenv("PATH"));
  printf("LD LIB : %s\n", getenv("LD_LIBRARY_PATH"));
  getcwd(cwd,256);
  printf("CWD : %s\n", cwd);
  printf("Done ! %s\n");
  return 0;
}
