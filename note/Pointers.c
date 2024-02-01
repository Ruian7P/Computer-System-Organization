1. Pointer Notion
#include <stdio.h>
void main() {
  int age = 21;  // create a data space to store age value, with the address ad;
  int *pAge = &age; // create a data space to store pAge value, which is the address of age ad, with another address;

  printf("address of age: %p\n", pAge);
  printf("value at stored address: %d\n", *pAge); //dereferencing, get the value stored in the address pAge
  return 0;
}



Example:
#include <stdio.h>

void swap (int *a, int *b);

int main(){
  int x = 1;
  int y = 2;
  printf("x=%d, y=%d\n", x,y);
  swap(&x,&y);  //swap the value stored in address &x and &y
  printf("x=%d, y=%d\n",x,y);
  return 0;

void swap (int *a, int *b)   //int *a = &x, int *b = &y
{
  int tmp;
  tmp = *a;
  *a = *b;
  *y = tmp;
}


2. Ways to get the value in the address
  (1) *address
  (2) address[0]

  Pointer and Array
  int b[500] = {1,2,3,4,5};      //b is the first address of array: b=&b[0]
  printf("%d", *b);         //return 1;
  printf("%d", *(b+1));     //return 2;
  printf("%d", b[0]);       //return 1;
  printf("%d", b[2]);       //return 3;
  printf("%d", (b+1)[1]);   //return 3;
  printf("%d", (b+2)[1]);   //return 4;
