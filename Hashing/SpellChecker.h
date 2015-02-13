//
//  SpellChecker.h
//  Hashing
//
//  Created by Shiv chandra Kumar on 11/24/14.
//  Copyright (c) 2014 Shiv chandra Kumar. All rights reserved.
//

#ifndef __Hashing__SpellChecker__
#define __Hashing__SpellChecker__

#define leng 50
#include <stdio.h>
#include <string>
#include <cstring>

class SpellChecker{
public:
    void correcting_algorithm(char*);//only public method which calls all other method in private
    SpellChecker();
    
private:
    void check_delete(char*);
    void check_split(char*);
    void check_swap(char*);
    void empty();
    void print_result(char*);
    char* list_of_words[leng];//initialize an array for storing correct words
    int count_num;
};

#endif /* defined(__Hashing__SpellChecker__) */
