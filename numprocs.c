#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "mmu.h"
#include "proc.h"

int main(int argc, char *argv[])
{
  if (argc == 1) {
    printf(1, "Number of active processes: %d\n", getnumprocs());
  } else {
    int time = atoi(argv[1]);
    int num_samples = 0;
    int total_procs = 0;
    while (num_samples < time) {
      total_procs =  total_procs + getnumprocs();
      num_samples = num_samples +  1;
      sleep(100); // sleep for 1 second
    }
    printf(1, "Average number of active processes over %d seconds: %d\n", time, total_procs / num_samples);
  }
  exit();
}
