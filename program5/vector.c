#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>/* timeval, gettimeofday() */
#include "vector.h"

	Vector * initVector(void)
	{
		Vector *ve = malloc(sizeof(*ve));
		ve->max_size=0;
		ve->current_size=0;
		ve->data = NULL;
		return ve;
	}
	
	void  vectorInsert(Vector * array, int index, Data value)
	{
		if(index >= array->max_size)
		{
			array->max_size = index * 2 + 1; 
			Data *new_array = malloc(sizeof(Data) * array->max_size);
			memset(new_array,-1,sizeof(Data) * array->max_size);
			if(array->data != NULL)
			{
			memcpy(new_array, array->data, sizeof(Data)*array->current_size);
			free(array->data);
			}
			array->data = new_array;
		}
		array->data[index] = value;
 	
    
		if(array->current_size <= index)
		{
		array->current_size = index + 1;
		}	
	}

	void  vectorInsertMine(Vector * array, int index, Data value)
	{
		if(index >= array->max_size)
		{
			array->max_size = index * 2 + 1; 
			Data *new_array = malloc(sizeof(Data) * array->max_size);
			memset(new_array,-1,sizeof(Data) * array->max_size);
			if(array->data != NULL)
			{
				memcpy(new_array, array->data, sizeof(Data)*array->current_size);
				free(array->data);
			}
		array->data = new_array;
		}
		array->data[index] = value;
 	
  		if(array->current_size <= index)
		{
		array->current_size = index + 1;
		}	
	}


	Data * vectorRead(Vector * array, int index)
	{
		
		if(index >= array->current_size)
		{
		return NULL;
		}

		else{
		
		return &array->data[index];
		}
	}



	void vectorRemove(Vector* array, int index)
	{
		if(index < array->current_size)
			{
			array->data[index].value = -1;
			array->current_size = array->current_size -1;
			}	

		else{
		
		}
	}

	void *deleteVector(Vector* array)
	{
		free(array->data);
		free(array);
		return NULL;
	}

	void vectorInsertIncremental(Vector * array, int index, Data value)
	{
		if(index >= array->max_size)
		{
			array->max_size = index + 1;
			array->current_size = index + 1;
			Data* new_array = malloc(sizeof(Data)* array->max_size);
			if(array->data != NULL)
			{
			memcpy(new_array, array->data, sizeof(Data));
			free(array->data);
			
			}
			array->data = new_array;
		}
		array->data[index] = value;
	}




