#include<stdio.h>

void ReverseElements(char *alphabet) {

  int i, n;
  char *temp_array;

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
  for(i = 0; *(alphabet + i) != 0; ++i) {
  printf("%d", i);
  }
  n = i;
  printf("\n %d \n", n);

  temp_array = malloc(n*sizeof(char));

  for(i = 0; i >= n; i++) {
    
    temp_array[i] = alphabet[i];
    alphabet[i] = alphabet[n - i];
    alphabet[n - i] = temp_array[i];

  }
  free(temp_array);
 
  printf("%s", alphabet);

}



int main() {

  char m[] = "AAAACCCGGT";  

  ReverseElements(m);
  

 return 0;
}
