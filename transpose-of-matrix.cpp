#include<stdio.h>
#define ROW 2
#define COL 5
int main(){
   int i, j, mat[ROW][COL], trans[COL][ROW];
   printf("Enter matrix: ");
   // input matrix
   for(i = 0; i < ROW; i++){
      for(j = 0; j < COL; j++){
         scanf("%d", &mat[i][j]);
      }
   }
   // create transpose
   for(i = 0; i < ROW; i++){
      for(j = 0; j < COL; j++){
         trans[j][i] = mat[i][j];
      }
   }
   printf("Transpose matrix: ");
   // print transpose
   for(i = 0; i < COL; i++){
      for(j = 0; j < ROW; j++){
         printf("%d ", trans[i][j]);
      }
      printf("");
   }
   return 0;
}
