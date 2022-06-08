#include <stdio.h>
#define Rows 4
#define Cols 4
void findsparsematrix(int matrix[Rows][Cols]);
int main()
{
    int matrix[Rows][Cols];
    for(int i=0; i<Rows; i++)
    {
        for(int j=0; j<Cols; j++){
            matrix[i][j]=0; //it creates matrix of zeros
        }
    }
findsparsematrix(matrix);
 return 0;
}
void findsparsematrix(int matrix[Rows][Cols])
{
  int count;
  for (int i=0; i<Rows; i++)
  {
    for (int j=0; j<Cols; j++)
    {
        if (matrix[i][j]==0)
        {
            count++;
        }
    }
  }
  if (count>(Rows*Cols)/2)
  {
      printf("The given matrix is a sparse matrix\n");
  }
  else 
  {
      printf("The given matrix is not a sparse matrix\n");
  }
  printf("The total number of zero elements in a matrix is %d :\n",count);
}
