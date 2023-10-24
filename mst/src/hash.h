/* For copyright information, see olden_v1.0/COPYRIGHT */

#include "stdio.h"

typedef struct hash_entry {
  unsigned int key;
  void *entry;  // _Ptr to what?
  struct hash_entry *next;  // _Ptr
} *HashEntry;

typedef struct hash {
  HashEntry *array; // _Ptr
  int (*mapfunc)(unsigned int); // _Ptr
  int size;
} *Hash;

Hash MakeHash(int size, int (*map)(unsigned int));
void *HashLookup(unsigned int key, Hash hash);
void HashInsert(void *entry,unsigned int key, Hash hash);
void HashDelete(unsigned int key, Hash hash);
