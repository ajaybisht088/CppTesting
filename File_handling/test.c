#include <stdio.h>

int main(){
  char str[20];
  
  FILE *f = fopen("abcd.txt" , "r"); 
  
  if(f == NULL){
    perror("Error opening file");
    return(-1); 
  }
  else{ 
    fgets(str, 20, f);
    puts(str);
  }
  
  fclose(f);
  
  return(0);
}