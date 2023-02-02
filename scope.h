#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "cslice.h"
#include "optionalInt.h"

// LinkedList Node
typedef struct localScopeVariables
{
    uint64_t numVariables;
    Slice * names;
    uint64_t * values;
    uint64_t filledTo;

    
} localScopeVariables;

struct localScopeVariables *localScope = NULL;

struct localScopeVariables *getNewLocalScope(uint64_t num){
    struct localScopeVariables *newScope = (struct localScopeVariables *)malloc(sizeof(struct localScopeVariables));
    newScope-> names = (struct Slice *)malloc(sizeof(struct Slice)*num);
    newScope-> values = (uint64_t *)malloc(sizeof(uint64_t)*num);
    newScope->numVariables = num;
    return newScope;
}

void insertLocal(Slice k, uint64_t v){

    for(uint64_t i = 0;i<=localScope->filledTo;i++){
        if(equalsSlice(localScope->names[i],k)){
            localScope->values[i]=v;
            return;
        }
    }
    
    
    //if it is alr not in the array
    if(localScope->filledTo+1==localScope->numVariables){
        localScope->numVariables = localScope->numVariables*2;
        localScope->names = (struct Slice *)realloc(localScope->names,sizeof(struct Slice)*localScope->numVariables);
        localScope-> values = (uint64_t *)realloc(localScope->values,sizeof(uint64_t)*localScope->numVariables);
    }
    localScope->filledTo++;
    localScope->names[localScope->filledTo] = k;
    localScope->values[localScope->filledTo] = v;
    return;
}


optionalInt findLocal(Slice k){

    for(uint64_t i = 0;i<=localScope->filledTo;i++){
        if(equalsSlice(localScope->names[i],k)){
            optionalInt i1 = {true, localScope->values[i]};
            return i1;
        }
    }
    optionalInt i1 = {false, 0};
    return i1;
}