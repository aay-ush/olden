/* For copyright information, see olden_v1.0/COPYRIGHT */

#include "stdio.h"

typedef struct hash_entry {
  unsigned int key;
  void *entry;  // _Ptr to what?
  struct hash_entry *next;  // _Ptr
} *HashEntry;

struct hash {
  HashEntry *array; // _Ptr
  _Ptr<int (unsigned int)> mapfunc; // _Ptr
  int size;
};
typedef _Array_ptr<struct hash> Hash;

Hash MakeHash(int size, _Ptr<int (unsigned int)> map);
void *HashLookup(unsigned int key, Hash hash);
void HashInsert(void *entry, unsigned int key, Hash hash);
void HashDelete(unsigned int key, Hash hash);
