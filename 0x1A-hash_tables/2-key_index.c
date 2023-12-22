#include "hash_tables.h"
/**
* key_index - function that gives you the index of a key.
* @size: the size of the array
* @key: is the key
* Return:  the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned int index;

index = hash_djb2(key) % size;
return (index);
}
