#pragma
#include "Data_struct.h"
constexpr auto Error_val = 9999;        // ����ָ����Χ��ֵ��Ϊ��Чֵ��
                                                // �����б�ʾ�սڵ�
                                                // �ݶ�9999���Ժ���ܸ�����Ŀ�������

/*
    creat_linklist(): ����������
    �����б�:
        vals (vector<int>): vector���󣬵������ֵ���С�
*/
ListNode* LinkList::creat_linklist(vector<int> vals) {
    ListNode* head = new ListNode;
    ListNode* node = head;

    for (auto i : vals) {
        ListNode* newnode = new ListNode;
        newnode->val = i;
        node->next = newnode;
        node = node->next;
    }
    this->head = head->next;

    return this->head;
}


/*
    get_head(): ��ȡ������ͷ���
    �����б�:
        ��
*/
ListNode* LinkList::get_head() {
    return this->head;
}


/*
    ���ղ������У������������ظ��ڵ㡣
    �����б�
        list(vector<int>): �������Ĳ�������
*/
TreeNode* Tree::creat_tree_by_sequence(vector<int> list) {
    if (list.empty()) {
        return this->root;
    }
    TreeNode* node = new TreeNode;
    queue<TreeNode*> qu;
    node->val = list[0];
    this->root = node;
    qu.push(node);
    for (int i = 1; i < list.size(); i++) {
        node = qu.front();
        if (!node->left && list[i] != Error_val) {
            node->left = new TreeNode(list[i]);
            qu.push(node->left);
        }
        else if (!node->right && list[i] != Error_val) {
            node->right = new TreeNode(list[i]);
            qu.push(node->right);
            qu.pop();
        }
    }
    return this->root;
}

/*
    ��ȡ���ĸ��ڵ㡣
    �����б�
        ��
*/
TreeNode* Tree::get_root() {
    return this->root;
}
