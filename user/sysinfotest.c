#include "user.h"


int main() {
  struct sysinfo info;
  if (sysinfo(&info) < 0) {
    printf("sysinfo syscall failed\n");
    return 0;
  }
  printf("Free memory: %d bytes\n", info.freemem);
  printf("Number of processes: %d\n", info.nproc);
  printf("Number of openfile: %d\n", info.nopenfile);
  return 0;
}
