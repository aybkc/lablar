//400 ile 500 arasındaki 7 ile tam bölünebilen sayıların toplamını bulan kod
#include <stdio.h>

int main()
{
     {
  int i ,toplam=0;
  for(i=400; i<=500; i++){
    if(i%7==0){
      toplam+=i;
     
    }
  }
  printf("%d \n", toplam);
  return 0;
}
}
