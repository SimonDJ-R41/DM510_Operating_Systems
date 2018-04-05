static inline void swap(int *m, int *n)
{
  int temp = *m;
  *m = *n;
  *n = temp;
}

int main(int argc, char **argv)
{
  int x,y;

  x=42;
  y=100;
  
  swap(&x, &y);
}
