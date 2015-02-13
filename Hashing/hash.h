//
//  hash.h
//  Hashing
//
//  Created by Shiv chandra Kumar on 11/22/14.
//  Copyright (c) 2014 Shiv chandra Kumar. All rights reserved.
//

#ifndef __Hashing__hash__
#define __Hashing__hash__

#include <stdio.h>
#include <string>
#include <cstring>
#define table_len 69997
#define prime_for_hash2 69931

using namespace std;

class Hash{
public:
    char* hash_table[table_len];
    Hash();
    bool add(const char*);
    bool lookup(const char*);
    bool remove(const char*);
    static Hash* getInstance();
    void print_table();
private:
    
    unsigned int hash_code(const char*, int);
    unsigned int hash_code_two(int,int);
    
    
};

#endif /* defined(__Hashing__hash__) */
