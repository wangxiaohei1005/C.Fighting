/*
题目一：实现二叉树先序、中序、后序遍历（包括递归和非递归实现）
*/

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

struct Node
{
	int value;
	Node *leftChild;
	Node *rightChild;
};

class Traversal
{
public:
	/*先根遍历，递归实现*/
	void preOrderTraversal(Node *root)
	{
		if (root == nullptr)
		{
			return;
		}
		cout << root->value << " ";
		if (root->leftChild)
			preOrderTraversal(root->leftChild);
		if (root->rightChild)
			preOrderTraversal(root->rightChild);
	}

	/*先根遍历，非递归实现，有右先压入右，有左后压入左*/
	void preOrderTraversal_Non(Node *root)
	{
		if (root == NULL)
			return;
		stack<Node*> st;
		st.push(root);
		while (!st.empty())
		{
			root = st.top();
			st.pop();
			cout << root->value << " ";
			if (root->rightChild)
				st.push(root->rightChild);
			if (root->leftChild)
				st.push(root->leftChild);
		}
	}

	/*中序遍历，递归实现*/
	void midOrderTraversal(Node *root)
	{
		if (root == NULL)
		{
			return;
		}
		if (root->leftChild)
			midOrderTraversal(root->leftChild);
		cout << root->value << " ";
		if (root->rightChild)
			midOrderTraversal(root->rightChild);
	}

	/*中序遍历，非递归实现*/
	void midOrderTraversal_Non(Node *root)
	{
		if (root == NULL)
			return;
		stack<Node*> st;
		while (!st.empty() || root != NULL)
		{
			if (root != NULL)
			{
				st.push(root);
				root = root->leftChild;
			}
			else
			{
				root = st.top();
				st.pop();
				cout << root->value << " ";
				//root的右孩子如果为空，不用重新压入新的值，从栈中取值即可
				root = root->rightChild;
			}
		}
	}

	//后序遍历，递归实现
	void posOrderTraversal(Node *root)
	{
		if (root == nullptr)
			return;
		if (root->leftChild)
			posOrderTraversal(root->leftChild);
		if (root->rightChild)
			posOrderTraversal(root->rightChild);
		cout << root->value << " ";
	}

	//后序遍历，非递归实现
	void posOrderTraversal_Non(Node *root)
	{
		if (root == NULL)
			return;
		stack<Node*> st;
		st.push(root);
		stack<int> tmp;
		while (!st.empty())
		{
			root = st.top();
			st.pop();
			tmp.push(root->value);
			if (root->leftChild)
				st.push(root->leftChild);
			if (root->rightChild)
				st.push(root->rightChild);
		}
		while (!tmp.empty())
		{
			cout << tmp.top() << " ";
			tmp.pop();
		}
		cout << endl;
	}

	//层序遍历
	void levelTraversal(Node *root)
	{
		if (root == NULL)
			return;
		queue<Node *> qu;
		qu.push(root);
		while (!qu.empty())
		{
			root = qu.front();//返回队顶元素
			qu.pop();//出队列
			cout << root->value << " ";
			if (root->leftChild)
				qu.push(root->leftChild);
			if (root->rightChild)
				qu.push(root->rightChild);
		}
	}
};

int main()
{
	cout << "Hello world!" << endl;
	Node *root = new Node;
	root->value = 1;
	root->leftChild = new Node;
	root->leftChild->value = 2;
	root->rightChild = new Node;
	root->rightChild->value = 3;
	root->leftChild->leftChild = new Node;
	root->leftChild->leftChild->value = 4;
	root->leftChild->rightChild = new Node;
	root->leftChild->rightChild->value = 5;
	root->rightChild->leftChild = new Node;
	root->rightChild->leftChild->value = 6;
	root->leftChild->leftChild->leftChild = nullptr;
	root->leftChild->leftChild->rightChild = nullptr;
	root->leftChild->rightChild->leftChild = nullptr;
	root->leftChild->rightChild->rightChild = nullptr;
	root->rightChild->leftChild->leftChild = nullptr;
	root->rightChild->leftChild->rightChild = nullptr;
	root->rightChild->rightChild = nullptr;

	Traversal tr;
	cout << "先根遍历（递归）" << endl;
	tr.preOrderTraversal(root);
	cout << "\n" << "先根遍历" << endl;
	tr.preOrderTraversal_Non(root);
	cout << "\n---------------------------------------" << endl;
	cout << "\n" << "中根遍历（递归）" << endl;
	tr.midOrderTraversal(root);
	cout << "\n" << "中根遍历" << endl;
	tr.midOrderTraversal_Non(root);
	cout << "\n---------------------------------------" << endl;
	cout << "\n" << "后根遍历（递归）" << endl;
	tr.posOrderTraversal(root);
	cout << "\n" << "后根遍历" << endl;
	tr.posOrderTraversal_Non(root);
	cout << "\n---------------------------------------" << endl;
	cout << "\n" << "层序遍历" << endl;
	tr.levelTraversal(root);
	return 0;
}