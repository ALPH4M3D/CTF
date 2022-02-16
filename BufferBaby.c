#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main()
{
  setvbuf(stdin,  NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
  
  volatile int modified;
  char buffer[10];

  modified = 0;

  puts("Can you get me a cofe ☕☕?");
  gets(buffer);

  if(modified == 0xc0febabe) {
      printf("Correct answer 🔥🔥!!\nHere is a gift for you 😊:\n");
      system("cat flag.txt");
  } else {
      printf("Try again, you got 0x%08x\n", modified);
  }

  return 0;
}
