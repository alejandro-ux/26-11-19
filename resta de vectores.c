#include<stdio.h>
  int main(){
 
  float vect1[5],vect2[5],vect3[5];
  int i;
 
  for(i=0;i<5;i++){
 
    printf("introduce 5 valores para el primer vector\n");
    scanf("%f",&vect1[i]);
 
        }
  for(i=0;i<5;i++){
  printf("introduce 5 valores para el segundo vector\n");
  scanf("%f",&vect2[i]);
     }
      printf("vector 3 es la resta de los 2 primeros vectores\n");
     for(i=0;i<5;i++){
 
      vect3[i]=vect1[i]-vect2[i];
 
    printf("posicion %d -->%2.0f\n",i,vect3[i]);
    }
 
 
 
  return 0;
  }
