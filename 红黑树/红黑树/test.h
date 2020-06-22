#pragma once

enum Colour
{
	BLACK,
	RED,
};

template<class K, class V>
class RBTreeNode
{
	RBTreeNode<K, V>* _left;
	RBTreeNode<K, V>* _right;
	RBTreeNode<K, V>* _parent;

	pair<K, V> _kv;

	Colour _col;
};

template<class K, class V>
class RBTree
{
	typedef RBTreeNode<K, V> Node;
public:
	bool Insert(const pair<K, V>& kv)
	{
		// 1�����������Ĺ�����в���
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_col = BLACK;
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first < kv.first)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_kv.first > kv.first)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}

		cur = new Node(kv);
		if (parent->_kv.first < kv.first)
		{
			parent->_right = cur;
			cur->_parent = parent;
		}
		else
		{
			parent->_left = cur;
			cur->_parent = parent;
		}

		// �����ڵ���
		cur->_col = RED;
		while (parent && parent->_col == RED)
		{
			// ���ɫ�������ؼ�������
			Node* grandfther = parent->_parent;
			if (grandfther->_left == parent)
			{
				Node* uncle = grandfther->_right;
				// ���1��uncle���ڣ���Ϊ��
				// ���2 or ���3��uncle������ or uncle���ڣ���Ϊ��
				if (uncle && uncle->_col == RED)
				{
					parent->_col = uncle->_col = BLACK;
					grandfther->_col = RED;

					// �������ϴ���
					cur = grandfther;
					parent = cur->_parent;
				}
				else
				{
					// �������˫�� -> ��Ϊ����
					if (cur == parent->_right)
					{
						RotateL(parent);
						swap(parent, cur);
					}

					// �ڶ������(ps���п����ǵ����ֱ������)
					RotateR(grandfther);
					grandfther->_col = RED;
					parent->_col = BLACK;

					break;
				}
			}
			else
			{
				// ...
			}
		}

		_root->_col = BLACK;

		return true;

	}

private:
	Node* _root = nullptr;
};