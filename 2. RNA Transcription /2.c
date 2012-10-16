#include<stdio.h>

char *RNA_Transcription(char *alphabet) {

  int i;

  for(i = 0; *(alphabet + i) != 0; ++i) {
  

    if(alphabet[i] == 'T') {
      alphabet[i] = 'U';
    }
  
  }
  return alphabet;
}


int main() {
  int i;

  char m[] = {"AGGTTAGTGGTTTA"};  

  printf("%s \n", RNA_Transcription(m));

 return 0;
}
