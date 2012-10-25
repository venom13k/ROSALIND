#include<stdio.h>

void ReverseElements(char *alphabet) {

  int i, n = 0;
  char temp = 0;

  for(i = 0; alphabet[i] != 0; ++i) {
  
    if(alphabet[i] == 'A') {
      alphabet[i] = 'T';
      continue;
    }
    if(alphabet[i] == 'C'){
      alphabet[i] = 'G';      
      continue;
    }
    if(alphabet[i] == 'G') { 
      alphabet[i] = 'C';      
      continue;
    }
    if(alphabet[i] == 'T') {
      alphabet[i] = 'A';      
      continue;
    } 

  } 

  

  n = i;
  printf(" %i \n", n);
  for(i = 0; i <= n/2; i++) {
  
    temp = alphabet[i];
    alphabet[i] = alphabet[n - 1 - i];
    alphabet[n - 1 - i] = temp;
    printf(" %c %c \n", temp, alphabet[i]);

  }
 
 
  printf("%s \n", alphabet);


}

int main() {

  char m[] = "AAAACCCGGT";  

  ReverseElements(m);
  

 return 0;
}
