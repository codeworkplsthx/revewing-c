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
struct Person*
create_Person(unsigned char age, char const* const name)
{
  if (name == NULL)
  {
      printf("\ncreate_Person: name is NULL. Exiting...\n");
      exit(-1);
  }
  unsigned char const len_name = strlen(name);
  struct Person* new_person = malloc(sizeof(struct Person));
  new_person->age = age;
  new_person->name = malloc(len_name * sizeof(char));
  strncpy(new_person->name,name,len_name);
  return new_person;
}
struct Person*
destroy_Person(struct Person* p)
{
  if (p == NULL)
  {
      printf("\ndestroy_Person: instance is NULL. Exiting...\n");
      exit(-1);
  }
  if (p->name == NULL)
  {
      printf("\ndestroy_Person: field 'name' is NULL. Exiting...\n");
      exit(-1);
  }
  free(p->name);
  free(p);
  return NULL;
}

/*
 * allocate memory
 * 
 * */
int
main()
{
  int* array = int_array(10);
  int i = 0;
  for (;i < 10;i++)
  {
    array[i] = 1;
  }
  printf("%d\n",array[0]);
  array = destroy_int_array(array);  
  
  struct Person* my_person = create_Person(45,"Jenna");
  printf("\nname: %s \n age: %u \n",my_person->name,my_person->age);
  my_person = destroy_Person(my_person);
//  struct Person* new_person = create_Person(
  return 0;
}
