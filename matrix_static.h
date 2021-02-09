/* File: matrix_static.h */
#ifndef MATRIXh
#define MATRIXh
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define FORMAT "%8.3lf"
#define MAX_ROW 10
#define MAX_COL 10

typedef double T;

typedef struct {
  int  row_dim, col_dim;
  T element[MAX_ROW][MAX_COL];
} matrix;

/* function prototypes */
matrix create_empty_stat(int rdim, int cdim);
matrix create_initval_stat(int rdim, int cdim, T val);
matrix create_initvals_stat(int rdim, int cdim, T* initval);
void destroy(matrix);
void matrix_print(matrix);
T retrieve(int row, int col, matrix m);  /* retrieve an element from m */
void assign(int row, int col, matrix*, T val); /* assign a value to an element of m */
void equate(matrix* m1, matrix* m2);  /* m1 = m2 */
matrix add(matrix, matrix);
matrix subtract(matrix, matrix);
matrix negate(matrix);
matrix multiply(matrix, matrix);
matrix scalar_multiply(T scalar, matrix);
/* remaining function prototypes not shown */
#endif
