#include <stdio.h>
//
//typedef char BTDataType;
//typedef struct BinaryTreeNode
//{
//	BTDataType _data;
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//}BTNode;
//// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
//BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
//// ����������
//void BinaryTreeDestory(BTNode* root)
//// �������ڵ����
//{
//	if (root == NULL)
//		return 0;
//	else
//	{
//		return 1 + BinaryTreeDestory(root->left) + BinaryTreeDestory(root->right);
//	}
//}
//int BinaryTreeSize(BTNode* root);
//// ������Ҷ�ӽڵ����
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
//// ��������k��ڵ����
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

