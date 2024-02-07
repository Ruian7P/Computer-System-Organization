- how to use malloc
  - 
    ````c
    int* p = (int*) malloc(sizeof(int)*10)   //this means int p[10]
    ````
    1. get the size of 10 times size: 10*4byyes = 40bytes
    2. Create this byte space which is used fro store int value
    3. p points to the address of head of this byte space (p point to the first 4 bytes, which store the first int value)
    ![int malloc](https://github.com/Ruian7P/CSO/blob/main/note/int%20malloc.png)
-
  ````c
  struct student{
    int id;
    char* 3courses[3];
  }

  struct student* s1 = (struct student*) malloc(sizeof(struct student));
  ````
  1. calculate the size of struct student,
