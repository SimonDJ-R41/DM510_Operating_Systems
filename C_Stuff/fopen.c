/*
r  - open for reading
w  - open for writing (file need not exist)
a  - open for appending (file need not exist)
r+ - open for reading and writing, start at beginning
w+ - open for reading and writing (overwrite file)
a+ - open for reading and writing (append if file exists)
*/

#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("/home/simondj/crypt_(copy)", "r+");
  fprintf(fp, "Fixing..\n");
  return 0;
}
