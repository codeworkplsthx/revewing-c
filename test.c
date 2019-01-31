#include<stdio.h>
#include<stdlib.h>

/*
 * allocate memory
 * 
 * */
int
main()
{
  char* block = malloc(1024);
  int i = 0;
  for (;i < 1024;i++){
    printf("%c",block[i]);
  }

  free(block); 

  return 0;
}
