#include<stdio.h>

int hamming_dist(char *s, char *t) {
  int i;
  int d=0;
  int c=0;
  for(i = 0; *(s+i) != 0; i++) {
    printf("%d %d\n", *(s+i), *(t+i));
       if (*(s+i)!=*(t+i)) {
      d++;
      
      }
       
  }

  return d;
}


int main() {
  int c;
  char a[] = "GAGCCTACTAACGGGAT";
  char b[] = "CATCGTAATGACGGCCT";
  c = hamming_dist(a, b);
  printf("%d \n", c);
  return 0;
}

