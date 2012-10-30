#include<stdio.h>

void reverse(char *alph, int n) {

  int i;
  char temp = 0;

  for(i = 0; i <= n/2; i++) {
    temp = alph[i];
    alph[i] = alph[n - 1 - i];
    alph[n - 1 - i] = temp;
  }
}

void ReverseComplement(char *alphabet) {

  int i = 0;

  for(i = 0; alphabet[i] != 0; ++i) {
  
    if(alphabet[i] == 'A') {
      alphabet[i] = 'T';
    }
    else if(alphabet[i] == 'C'){
      alphabet[i] = 'G';      
    }
    else if(alphabet[i] == 'G') { 
      alphabet[i] = 'C';      
    }
    else if(alphabet[i] == 'T') {
      alphabet[i] = 'A';      
    } 

  } 

  reverse(alphabet, i); 




}
 
int main() {

  char m[] = "AAAACCCGGT";  

  ReverseComplement(m);
  printf("%s \n", m); 

 return 0;
}
