#include "eArray.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

eArray *new_eArray()
{
  eArray *return_eArray;

  return_eArray = (eArray *)malloc(sizeof(eArray));

  return_eArray->size = 0;

  return_eArray->start = malloc(sizeof(eData));

  return return_eArray;
}

int resize_eArray(eArray *array, unsigned int length)
{
  array->start = realloc(array->start, sizeof(eData) * length);
  array->size = length;
}

int insert_eArray(eArray *array, unsigned int index, eData *toAdd)
{
  resize_eArray(array, array->size + 1);

  memmove(&array->start[index + 1], &array->start[index], (array->size - index) * sizeof(eData));

  array->start[index] = toAdd;

  return 1;
}

int remove_eArray(eArray *array, unsigned int index)
{

  memmove(&array->start[index], &array->start[index + 1], (array->size - (index)) * sizeof(eData));

  resize_eArray(array, array->size - 1);

  array->size = array->size - 1;

  return 1;
}

int set_eArray(eArray *array, unsigned int index, eData *toAdd)
{
  array->start[index] = toAdd;

  return 1;
};

eData *get_eArray(eArray *array, unsigned int toGet) { return array->start[toGet]; };

int free_eArray(eArray *array)
{

  free(array->start);
  free(array);

  return 1;
}

int append_eArray(eArray *array, eData *toAdd)
{
  insert_eArray(array, array->size, toAdd);
  return 1;
}