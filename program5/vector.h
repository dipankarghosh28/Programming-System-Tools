#ifndef DOUBLE_HEADER
#define DOUBLE_HEADER
typedef struct
{
        int value;
}Data;

typedef struct{
                int max_size; //initialize to 0
                int current_size; //initialize to 0
                Data *data;      // array of integers we're storing
        } Vector;


Vector * initVector();
void vectorInsert(Vector * array, int index, Data value);
void vectorInsertIncremental(Vector * array, int index, Data value);
//void vectorInsertMine(Vector * array, int index, Data value);
Data * vectorRead(Vector * array, int index);
void vectorRemove(Vector * array, int index);
void * deleteVector(Vector *);
#endif
