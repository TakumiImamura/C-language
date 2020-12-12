#include<stdio.h>
int main(void){
  int i = 0x01234567;
  unsigned char *p = (unsigned char *)&i;
  if(*p == 0x01) printf("Big endian");
  else printf("Little endian");
  printf("%x:%x:%x:%x\n", p[0], p[1], p[2], p[3]);
  return 0;
}
