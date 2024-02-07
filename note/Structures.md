## struct
- **Concept**
``` c
struct student
{
  char* id;
  char* 3course[3];
}

typedef struct student
{
  char* id;
  char* 3course[3];
}stu;                  //same as first one

struct student s1[10];

stu s1[10]; //same as first one
```
- **->**
```c
struct point p2 = {1.5, -3.1};
struct point *ppoint;
ppoint = & p2;
ppoint-> x;  // is the same as (*ppoint).x;
```


## node
``` c
struct node
{
  int dtaa
