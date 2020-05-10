single:single.cpp
	g++ -std=c++11 $^ -o $@ 
main:main.cpp threadpool.hpp
	g++ $^ -o $@ -lpthread
customer_productor:customer_productor.cpp
	g++ $^ -o $@ -lpthread
productor_customer:productor_customer.cpp
	g++ $^ -o $@ -lpthread
cond:cond.c
	gcc $^ -o $@ -lpthread
mutex:mutex.c
	gcc $^ -o $@ -lpthread
exit:exit.c
	gcc $^ -o $@ -lpthread
create:create.c
	gcc $^ -o $@ -lpthread
