#include <stdio.h>

int main()
{
  srand(500);
  int i;
  for (i=0; i<1000; i++) 
  {
    firstroll = rolldice();
    if firstroll==7 
    {
      wins[firstroll]++;
      continue;
    }
    do {
      roll = rolldice();
      if roll == 7 {
        losses[firstroll]++;
      }
      else if roll == firstroll
        wins[firstroll]++;
      
    }
      
  }
  
}


