#include <stdio.h>
int show_stars(int n);
int print_spaces(int n);

int main() {
  int en;
  printf("Enter Even Number: ");
  scanf("%d",&en);
  if (en >= 1 && en%2 == 1) {
  int array[en];
  int spaces = 0;
  int j = 0;
  for (int i=0; i<=en; i++) {
    if (i%2 == 1) {
      array[j] = i;
      j++;
    }
  }
  for (int i=j-1; i>=1; i--) {
    if (array[i] == en){
      show_stars(array[i]);
    }
    else {
      spaces += 1;
      print_spaces(spaces);
      show_stars(array[i]);
    }
  }
  spaces += 1;
  for (int i=0; i<j; i++) {
    if (i == en){
      show_stars(array[i]);
    }
    else {
      print_spaces(spaces);
      show_stars(array[i]);
      spaces -= 1;
    }
  }}else{
    printf("Enter an Odd Number Greater Than 0 !\n");
  }
  return 0;
}

int show_stars(int n) {
  for(int i=0; i<n; i++){
    printf("*");
  }
  printf("\n");
}

int print_spaces(int n) {
  for(int i=0; i<n; i++){
    printf(" ");
  }
}
