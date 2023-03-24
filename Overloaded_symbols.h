#pragma once
#ifndef OVERLOADED_SYMBOLS_H
#define OVERLOADED_SYMBOLS_H
/*
    此头文件用于重载运算符，使得标准库容器更加易于使用。
    函数定义位于overload_symbols.cpp

    已重载运算符：
        << : std::ostream  <--  vector<int>
        << : std::ostream  <--  vector<string>
*/

#include <iostream>
#include <vector>
#include <string>
#include "Data_struct.h"

using namespace std;

/*
    对vector容器重载 << 运算符，使得可以直接输出vector<int>序列元素。
*/
std::ostream& operator<<(std::ostream& os, const vector<int>& vec);

/*
    对vector容器重载 << 运算符，使得可以直接输出vector<string>序列元素。
*/
std::ostream& operator<<(std::ostream& os, const vector<string>& vec);

/*
    对Date_struct.h中的LinkList类重载 << 运算符，使得可以直接输出链表的节点值序列。
*/
std::ostream& operator<<(std::ostream& os, const LinkList* linklist);

/*
    对Date_struct.h中的LinkNode类重载 << 运算符，使得可以直接由头结点输出链表序列。
*/
std::ostream& operator<<(std::ostream& os, const ListNode* linknode);

#endif // !OVERLOADED_SYMBOLS_H