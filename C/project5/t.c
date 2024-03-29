#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <err.h>
#include <sysexits.h>

int main {
  char *args[] = {"gcc", 0};
  pid_t child_pid; 
  child_pid = fork();
  if ( child_pid > 0 ) {
    wait(NULL);
    printf("Done!!!\n");
  }
  else {
    if (child_pid == 0) {
      execvp("gcc", args);
    }
    else
      printf("Error forking child");
  }
  return 0;
}
