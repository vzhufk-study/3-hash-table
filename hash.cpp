#include "hash.h"
/*
template <class valueType> hashTable<valueType>::hashTable()
{
    amount = 0;
}

template <class valueType>hashTable<valueType>::hashTable(unsigned int n){
    amount = n;
    for (unsigned i = 0; i < n; ++i){
        value.push_back(NULL);
    }
}


template <class valueType> bool hashTable<valueType>::add(valueType *element, unsigned (*hash_function)(valueType)){
    unsigned index = hash_function(&element);
    index %= amount;
    unsigned count = 0;
    while (value[index]!=NULL){
        ++count;
        if (count > amount){
            return false;
        }

        ++index;
        index %= amount;
    }

    value[index] = element;
    return true;
}

template <class valueType> valueType* hashTable<valueType>::find(valueType *X,  unsigned (*hash_function)(valueType), bool (*comp)(valueType, valueType)){
    unsigned index = hash_function(&X);
    index %= amount;
    unsigned count = 0;
    while (!comp(value[index], X)){
        ++count;
        if (count > amount){
            return NULL;
        }

        ++index;
        index %= amount;
    }

    return value[index];
}
*/
