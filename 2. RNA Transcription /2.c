#include<stdio.h>

void RNA_Transcription(char *alphabet) {

  int i;
  int adenine = 0;
  int cytosine = 0;
  int guanine = 0;
  int uracyl = 0;

  for(i = 0; *(alphabet + i) == EOF; ++i) {
  printf("%s", alphabet);
  }      
  /*
  for(i = 0; i >= 9; ++i) {
  

    if(alphabet[i] == 'T') {
      *alphabet = 'U';
    } 

  }
  for(i = 0; i >= 9; ++i) {
  printf("%s", alphabet);
  }*/
}


int main() {
  int i;

  char m[] = "TCCCGCTAT/";  
  //  printf("%s",m[2]);
  RNA_Transcription(m);

 return 0;
}
