#ifndef easeC_eArray

#define easeC_eArry

typedef void *eData;

typedef struct _eArray
{
  eData *start;
  unsigned int size;
} eArray;

eArray *new_eArray();
int resize_eArray(eArray *array, unsigned int length);
int insert_eArray(eArray *array, unsigned int index, eData *toAdd);
int remove_eArray(eArray *array, unsigned int index);
int set_eArray(eArray *array, unsigned int index, eData *toAdd);
eData *get_eArray(eArray *array, unsigned int toGet);
int free_eArray(eArray *array);
int append_eArray(eArray *array, eData *toAdd);
#endif