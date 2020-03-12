#include <stdio.h>
//
//typedef char BTDataType;
//typedef struct BinaryTreeNode
//{
//	BTDataType _data;
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//}BTNode;
//// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
//BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
//// 二叉树销毁
//void BinaryTreeDestory(BTNode* root)
//// 二叉树节点个数
//{
//	if (root == NULL)
//		return 0;
//	else
//	{
//		return 1 + BinaryTreeDestory(root->left) + BinaryTreeDestory(root->right);
//	}
//}
//int BinaryTreeSize(BTNode* root);
//// 二叉树叶子节点个数
//int BinaryTreeLeafSize(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	else if (root->left == NULL && root->right == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
//	}
//}
//// 二叉树第k层节点个数
//int BinaryTreeLevelKSize(BTNode* root, int k)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (k == 1)
//	{
//		return 1;
//	}
//	return BinaryTreeLevelKSizze(root->left, k - 1) + BinaryTreeLevelKSizze(root->right, k - 1);
//}

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	if (p == NULL && q == NULL)
		return true;
	if (p != NULL || q != NULL)
		return false;
}

