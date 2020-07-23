
class wxh
{
	int *ptr;
public:
	shared_ptr(T* ptr)
		:ptr(ptr)
		, pcount(new int(1))
	{}

	shared_ptr(shared_ptr<T> & sp)
		:_otr(sp._ptr)
		, _pcount(sp._pcount)
	{
		++(*_pcount);
	}

	shared_ptr operator =
	{
		if (_ptr != sp._ptr)
		{
			
		}
	}


private:
};