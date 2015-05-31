#include <stdio.h>
#include <unistd.h>

int main() {
  int i, pid, rpid, n=3;

  // Get pid of root process
  rpid = getpid();

  printf("ID of Shell is %d \n", getppid());
  printf("My Process-ID is %d \n" , rpid);


  for(i = 0; i < n; i++) {

    if(getpid() != rpid) {
      printf("YOU SHALL NOT FORK \n");
      break;
    }

    pid = fork();
    
    if(pid == 0) {
      printf("-----------\n");
      printf("**Process-ID %d, Loop# %2d** \n", getpid(), i);
      printf("Ich bin ein Kind von %d\n", getppid());
      printf("-----------\n");
      printf("\n");
    } else {
      printf("-----------\n");
      printf("**Process-ID %d, Loop# %2d** \n", getpid(), i);
      printf("Ich bin ein Vater \n");
      printf("-----------\n");
      printf("\n");
    }
  }

}