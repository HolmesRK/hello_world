#include "Overloaded_symbols.h"

/*
    对vector容器重载<<运算符，使得可以直接输出vector<int>序列元素。
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
    对vector容器重载<<运算符，使得可以直接输出vector<string>序列元素。
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
    对Date_struct.h中的LinkList类重载 << 运算符，使得可以直接输出链表的节点值序列。
*/
std::ostream& operator<<(std::ostream& os, const LinkList* linklist) {
    ListNode* node = linklist->head;
    os << node;
    return os;
}

/*
    对Date_struct.h中的LinkNode类重载 << 运算符，使得可以直接由头结点输出链表序列。
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