#include <stdio.h>

float y(float x){
  if(x >= -1 && x < 0) return x+1.0;
  if(x >= 0 && x < 1) return x;
  return 0.0;
}

int main(){
  float x;
  printf("\nenter x: ");
  scanf("%f", &x);
  printf("result: %f", y(x));
  return 0;
}
