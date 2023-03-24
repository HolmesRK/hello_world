#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
/*
    ���ļ������������õ��������ͺ��ࡣ
    ��Ա������λ��ͬ��cpp�ļ���

    �ѷ�װ�ࣺ
        leetcode ��������ṹ��
        leetcode �����������
        leetcode ���������ṹ��
        leetcode �����������

*/
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;


/*
    leetcode ��������
*/
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


/*
    leetcode �����������
*/
class LinkList {
    friend std::ostream& operator<<(std::ostream& os, const LinkList* linklist);
private:
    ListNode* head;

public:
    LinkList() :head(new ListNode) {};
    ~LinkList() {};
    ListNode* get_head();
    ListNode* creat_linklist(vector<int> vals);
};


/*
    leetcode ���������
*/
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    
};


/// <summary>
/// leetcode �����������
/// </summary>
class Tree {
private:
    TreeNode* root;

public:
    Tree() :root(new TreeNode) {};
    ~Tree() {};
    TreeNode* creat_tree_by_sequence(vector<int> list);
    TreeNode* get_root();

};
#endif // !SALES_DATA_H

