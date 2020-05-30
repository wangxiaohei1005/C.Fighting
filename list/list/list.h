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
		void insert(iterator pos, const T& x)
		{
			Node* cur = pos._node;
			Node* prev = cur->_prev;
			Node* newnode = new Node(x);

			// prev newnode cur
			prev->_next = newnode;
			newnode->_prev = prev;
			newnode->_next = cur;
			cur->_prev = newnode;
		}

		void erase(iterator pos)
		{
			assert(pos != end());

			Node* cur = pos._node;
			Node* prev = cur->_prev;
			Node* next = cur->_next;
			delete cur;

			prev->_next = next;
			next->_prev = prev;
		}
		private:
			Node* _head;

	};
	void test_list1()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}

	struct Date
	{
		int _year = 0;
		int _month = 1;
		int _day = 1;
	}; 
	
	void print_list(const list<int>& lt)
	{
		list<int>::const_iterator it = lt.begin();
		while (it != lt.end())
		{
			//*it = 1;
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}

	void test_list3()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		print_list(lt);

		lt.pop_back();
		lt.pop_front();
		print_list(lt);

		lt.clear();
		lt.push_back(10);
	}

	void test_list4()
	{
		list<int> lt1;
		lt1.push_back(1);
		lt1.push_back(2);

		list<int> lt2(lt1);
		print_list(lt2);

		list<int> lt3;
		lt3.push_back(10);
		lt3.push_back(20);
		lt3.push_back(30);
		lt3.push_back(40);
		lt1 = lt3;
		print_list(lt1);
	}
}