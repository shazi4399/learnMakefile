//
// Created by zhanghao on 22-9-28.
//
#include <iostream>
#include "sayhello.h"
#include "saynihao.h"
#define HELLO 1;
#define TEST 1;
int main(){
#ifdef TEST
    sayhello();
#else
    saynihao();
#endif
    return 0;
}