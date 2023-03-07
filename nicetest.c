#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
  int pr, pid;
  if(argc < 3)
  {
    exit();
  }
  pid = atoi(argv[1]);
  pr = atoi(argv[2]);
  if (pr < 0 || pr > 63)
  {
    exit();
  }
  tableview();
  changepr(pid, pr);
  tableview();
  exit();
}