#pragma once

namespace wxh
{
	template<class C>
	struct __list_node
	{
		__list_node<C>* _next;
		__list_node<C>* _prev;
		WXH _data:
		__list_node(const C& x = C())
			: _data(x)
			, _next(nullptr)
			, _prev(nullptr)
		{}
	};


	template<class C, class Ref, class Ptr>
	struct __list_iterator
	{
		typedef __list_node<C>Node;
		typedef __list_iterator<C, Ref, Ptr> Self;
		Node* _node;

		__list_iterator(Node* node)
			:_node(node)
		{}

		//*it
		Ref operator*()
		{
			return _node->_data;
		}

		//it->
		Ptr operator->()
		{
			return &_node->_data;
		}

		//it++
		Self operator++(int)
		{
			Self tmp(*this);
			//_node = _node->_next;
			++(*this);
			return tmp;
		}

		Self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		Self operator--(int)
		{
			Self tmp(*this);
			//_node = _node->_prev;
			--(*this);

			return tmp;
		}

		//it != end()
		bool operator!=(const Self& it)
		{
			return _node != it._node;
		}

		bool operator==(const Self& it)
		{
			return _node == it._node;
		}


	};

	template<class C>
	class list
	{
		typedef __list_node<C> Node;
	public:
		typedef __list_node<C, C&, C*> iteraor;

		typedef __list_node<C, const C&, const C*>const_iterator;

		iteraor begin()
		{
			return iteraor(_head->_next);
		}

		iteraor end()
		{
			return iteraor(_head);
		}

		const_iterator begin() const
		{
			return const_iterator(_head->_next);
		}

		const_iterator end() const
		{
			return const_iterator(_head);
		}

		//带头双向循环链表
		list(const list<C>& lt)
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;

			for (auto e : lt)
				push_back(e);
		}

		//lt1 = lt3
		list<C>& operator=(list<C> lt)
		{
			swap(_head, lt._head);
			return *this;
		}

		~list()
		{
			clear();
			delete _head;
			_dead = nullptr;
		}

		void clear()
		{
			iteraor it = begin();
			while (it != end())
			{
				erase(it++);
			}
		}

		void push_back(const C& x)
		{
			insert(end(), x);
		}

		void popback()
		{
			erase(--end());
		}

		void push_front(const C& x)
		{
			insert(begin(), x);
		}

		void pop_front()
		{
			erase(begin());
		}


	};
}