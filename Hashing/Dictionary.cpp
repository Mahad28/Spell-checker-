//
//  Dictionary.cpp
//  Hashing
//
//  Created by Shiv chandra Kumar on 11/22/14.
//  Copyright (c) 2014 Shiv chandra Kumar. All rights reserved.
//

//implementation of a wrapper class to the Hash table.


#include "Dictionary.h"


//call the add method in hash class in hash Class
bool Dictionary::add(const char* word){
    Hash* hash = Hash::getInstance();
    return(hash->add(word));
}


//call the remove method from the Hash class
bool Dictionary::remove(const char* word){
    Hash* hash = Hash::getInstance();
    return (hash->remove(word));
}


//call the lookup method from the Hash class
bool Dictionary::lookup(const char* word){
    Hash* hash = Hash::getInstance();
    return (hash->lookup(word));
}


//call the print hash table from the Hash class
void Dictionary::print_hash_table(){
    Hash* hash = Hash::getInstance();
    return(hash->print_table());
}
