#pragma once
#ifndef OVERLOADED_SYMBOLS_H
#define OVERLOADED_SYMBOLS_H
/*
    ��ͷ�ļ����������������ʹ�ñ�׼��������������ʹ�á�
    ��������λ��overload_symbols.cpp

    �������������
        << : std::ostream  <--  vector<int>
        << : std::ostream  <--  vector<string>
*/

#include <iostream>
#include <vector>
#include <string>
#include "Data_struct.h"

using namespace std;

/*
    ��vector�������� << �������ʹ�ÿ���ֱ�����vector<int>����Ԫ�ء�
*/
std::ostream& operator<<(std::ostream& os, const vector<int>& vec);

/*
    ��vector�������� << �������ʹ�ÿ���ֱ�����vector<string>����Ԫ�ء�
*/
std::ostream& operator<<(std::ostream& os, const vector<string>& vec);

/*
    ��Date_struct.h�е�LinkList������ << �������ʹ�ÿ���ֱ���������Ľڵ�ֵ���С�
*/
std::ostream& operator<<(std::ostream& os, const LinkList* linklist);

/*
    ��Date_struct.h�е�LinkNode������ << �������ʹ�ÿ���ֱ����ͷ�������������С�
*/
std::ostream& operator<<(std::ostream& os, const ListNode* linknode);

#endif // !OVERLOADED_SYMBOLS_H