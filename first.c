#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  // name = "gucchu"   marks = 25
  int marks = 25;
  char x = 'a';
  char name[] = "gucchu";
  printf("%c\n",name[1]);
  printf("%s\n",name);
  printf("%d",sizeof(name)/sizeof(name[0]));
  
  for(int i=0; i<sizeof(name);i++){
   printf("%c\n",name[i]);
  }
  name[5]='i';
   printf("%s\n",name);
  name[7]=x;
  name[6] = 'b';
  printf("%s\n",name);
  printf("size of my name is %d",sizeof(name));
  return 0;
}