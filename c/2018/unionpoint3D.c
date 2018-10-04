#include <stdio.h>

int main() {
  union point3D {
    int valeur[3];
    struct  {
      int x;
      int y;
      int z;
    };
  };

  union point3D p;
  p.valeur[0] = 10;
  p.valeur[1] = 20;
  p.valeur[2] = 30;

  printf("%d %d %d\n", p.x, p.y, p.z);
   
 return(0);
}
