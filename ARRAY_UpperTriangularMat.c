#include <stdio.h>

int upper_mat(int mat[3][3]){
   int i, j;
   printf("Upper Triangular Matrix\n\n");
   for ( i = 0; i < 3; i++){
      for ( j = 0; j < 3; j++){
         if( i > j )
            printf("0\t");
         else
            printf("%d\t", mat[i][j]);
      }
      printf("\n");
   }
}
int main(int argc, char const *argv[]){
   int mat[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
   };
   upper_mat(mat);
   return 0;
}