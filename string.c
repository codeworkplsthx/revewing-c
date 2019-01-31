#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int*
int_array(unsigned int size)
{
  int* array = malloc(size * sizeof(int));
  return array;
}
int*
destroy_int_array(int* array)
{
    free(array);
    return NULL;
}
struct Person
{
    unsigned char age;
    char* name;
};

/*
 * allocate memory
 * 
 * */
int
main()
{
  FILE *file = fopen("data.txt","r");
  if (file == NULL)
  {
      printf("\nfopen: Unable to open file. Exiting...\n");
      exit(-1);
  }
  char buff[255];
  size_t n_read = fread(buff,sizeof(char),256,file); 
  printf("\nread: %s (%zu characters)\n",buff,n_read);
  int status = fclose(file);
  if (status == EOF)
  {
      printf("\nfclose: Unable to close file. Exiting...\n");
      exit(-1);
  }
//  struct Person* new_person = create_Person(
  return 0;
}
