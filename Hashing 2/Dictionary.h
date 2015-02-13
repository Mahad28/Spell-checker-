//
//  Dictionary.h
//  Hashing
//
//  Created by Shiv chandra Kumar on 11/22/14.
//  Copyright (c) 2014 Shiv chandra Kumar. All rights reserved.
//

#ifndef __Hashing__Dictionary__
#define __Hashing__Dictionary__

#include <stdio.h>
#include "hash.h"
class Dictionary{
public:
    bool add(const char*);
    bool lookup(const char*);
    bool remove(const char*);
    void print_hash_table();
};

#endif /* defined(__Hashing__Dictionary__) */
