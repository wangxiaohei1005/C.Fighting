#pragma once

template<class K>

struct BTreeNode
{

	K _key;
};
template<class K>
class BTree   //Binary search Tree
{
	typedef BTreeNode<K> Node;
private:
	Node* _root;
};

int main()
{
	return 0;
}