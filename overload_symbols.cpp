#include "Overloaded_symbols.h"

/*
    ��vector��������<<�������ʹ�ÿ���ֱ�����vector<int>����Ԫ�ء�
*/
std::ostream& operator<<(std::ostream& os, const vector<int>& vec) {
    for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
        os << *iter;
        if (iter != vec.end() - 1) {
            os << ',' << ' ';
        }
    }
    return os;
}


/*
    ��vector��������<<�������ʹ�ÿ���ֱ�����vector<string>����Ԫ�ء�
*/
std::ostream& operator<<(std::ostream& os, const vector<string>& vec) {
    for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
        os << '"' << *iter << '"';
        if (iter != vec.end() - 1) {
            os << ',' << ' ';
        }
    }
    return os;
}

/*
    ��Date_struct.h�е�LinkList������ << �������ʹ�ÿ���ֱ���������Ľڵ�ֵ���С�
*/
std::ostream& operator<<(std::ostream& os, const LinkList* linklist) {
    ListNode* node = linklist->head;
    os << node;
    return os;
}

/*
    ��Date_struct.h�е�LinkNode������ << �������ʹ�ÿ���ֱ����ͷ�������������С�
*/
std::ostream& operator<<(std::ostream& os, const ListNode* head) {
    ListNode* node = const_cast<ListNode*>(head);
    while (head != nullptr) {
        if (head->next == nullptr) {
            os << head->val;
            break;
        }
        os << head->val << ", ";
        head = head->next;
    }
    return os;
}