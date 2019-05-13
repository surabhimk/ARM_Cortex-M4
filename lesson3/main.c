 int counter = 0;
int main()
{
  int *p_int;
  p_int=&counter;
  while(*p_int<4){
    ++*p_int;
  }
  p_int =(int *)0x2000000u;
  *p_int  = 0xDEADBEEF;
  return 0;
}
