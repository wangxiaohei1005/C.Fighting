//#pragma once
//
//template<class K>
//
//struct BTreeNode
//{
//
//	K _key;
//};
//template<class K>
//class BTree   //Binary search Tree
//{
//	typedef BTreeNode<K> Node;
//private:
//	Node* _root;
//};
//
//int main()
//{
//	return 0;
//}
#include <vector>
using namespace std;


class Solution
{
public:
	vector<int> inorderTraversal(TreeNode* root)
	{
		vector<int> v;
		stack<TreeNode*> st;
		TreeNode* cur = root;
		while (cur || !empty)
		{
			while (cur)
			{

			}
		}
	}
};