#include <iostream>
#include <list>
#include <chrono>
const int maxSize = 10000;

template<typename T>
struct stack_mass {
	T* hop;
	T mass[maxSize];
	int count_el = 0;

	void compl_arr(T el) {
		if (count_el == 0)
		{
			mass[0] = el;
			hop = &mass[0];
			count_el++;
		}
		else
		{
			if (count_el <= maxSize)
			{
				hop++;
				*hop = el;
				count_el++;
			}
			else
			{
				std::cout << "стек переполнен\n";
			}
		}

	}

	T get_element() {

		if (count_el == 0) 
		{
			std::cout << "стек пуст!\n";
			return -1;
		}
		else 
		{
			if (count_el == 1) {
				hop == nullptr;
				count_el--;
				return mass[0];
			}
			else 
			{
				T el = *hop;
				hop--;
				count_el--;
				return el;
			}
		}

	}

};

template<typename Y>
struct queueMass {
	Y* first;
	Y* last;
	Y mass[maxSize];
	int count_el = 0;

	void add_el(Y el){
		if (count_el == 0) 
		{
			mass[0] = el;
			last = &mass[0];
			first = &mass[0];
			count_el++;
		}
		else 
		{
			if (count_el < maxSize) 
			{
				last++;
				*last = el;
				count_el++;
			}
			else
			{
				std::cout << "очередь переполнена\n";
			}
		}

	}

	Y get_el(){

		if (count_el == 0) 
		{
			std::cout << "очередь пуста\n";
			return -1;
		}
		else 
		{
			Y el = *first;
			first++;
			count_el--;
			return el;
		}
	}

};

template<typename M>
struct stack_list
{
	std::list<M> newList;
	M* hop;
	int count_el = 0;

	void add_el(M el) {
		if (count_el < maxSize) {
			newList.push_back(el);
			count_el++;
			hop = &newList.back();
		}
		else 
		{
			std::cout << "стек переполнен\n";
		}
	}

	M get_el() {
		if (count_el == 0) 
		{
			std::cout << "стек пуст!\n";
			return -1;
		}
		else 
		{
			if (count_el == 1) 
			{
				hop = nullptr;
				count_el--;
				return newList.back();
			}
			else 
			{
				M el = *hop;
				newList.pop_back();
				hop = &newList.back();
				count_el--;
				return el;
			}
		}
	}
};


template <typename S>
struct queue_list {
	S* first;
	int count_el = 0;
	std::list<S> newList;

	void add_el(S el) {
		if (count_el == 0) {
			newList.push_back(el);
			count_el++;
			first = &newList.front();
		}
		else 
		{
			if (count_el <= maxSize) 
			{
				newList.push_back(el);
				count_el++;
			}
			else 
			{
				std::cout << "очередь переполнена\n";
			}
		}
	}

	S get_el() {
		if (count_el == 0) 
		{
			std::cout << "очередь пуста\n";
			return -1;
		}
		else 
		{
			if (count_el == 1) 
			{
				first = nullptr;
				count_el--;
				return newList.front();
			}
			else 
			{
				S el = *first;
				newList.pop_front();
				first = &newList.front();
				count_el--;
				return el;
			}
		}
	}

};

int main() {
	setlocale(LC_ALL, "RU");

	//QUEUE ARR
	std::cout << "queue arr\n" << std::endl;

	queueMass<int> queArr;

	auto startQuArr = std::chrono::high_resolution_clock::now(); 

	for (int i = 0; i < maxSize; i++) {
		queArr.add_el(i);
	}
	for (int j = 0; j < maxSize; j++) {
		std::cout << queArr.get_el() << std::endl;
	}

	auto endQuArr = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> duration = endQuArr - startQuArr;

	std::cout << "Время выполнения программы: " << duration.count() << " секунд" << std::endl;

	//// QUEUE LIST
	//std::cout << "queue list\n" << std::endl;

	//queue_list<int> myList;

	//auto startQuList = std::chrono::high_resolution_clock::now(); 
	//
	//for (int i = 0; i < maxSize; i++) 
	//{
	//	myList.add_el(i);
	//}
	//for (int j = 0;j<maxSize;j++)
	//{
	//	std::cout << myList.get_el() << std::endl;
	//}

	//auto endQuList = std::chrono::high_resolution_clock::now(); 
	//std::chrono::duration<double> duration = endQuList - startQuList;

	//std::cout << "Время выполнения программы: " << duration.count() << " секунд" << std::endl;






	////STAK ARR
	//std::cout << "stack arr\n" << std::endl;

	//stack_mass<int> stack_arr;

	//auto startStArr = std::chrono::high_resolution_clock::now();
	//
	//for (int i = 0; i < maxSize; i++) {
	//	stack_arr.compl_arr(i);
	//}
	//for (int j = 0; j < maxSize; j++) {
	//	std::cout<<stack_arr.get_element()<<std::endl;
	//}

	//auto endStArr = std::chrono::high_resolution_clock::now();
	//std::chrono::duration<double> duration = endStArr - startStArr;

	//std::cout << "Время выполнения программы: " << duration.count() << " секунд" << std::endl;

	////STEK LIST
	//std::cout << "stak list\n" << std::endl;

	//stack_list<int> stackList;

	//auto startStList = std::chrono::high_resolution_clock::now(); // Засекаем время начала работы программы

	//for (int i = 0; i < maxSize; i++) {
	//	stackList.add_el(i);
	//}
	//for (int j = 0; j < maxSize; j++) {
	//	std::cout << stackList.get_el()<<std::endl;
	//}

	//auto endStList = std::chrono::high_resolution_clock::now();
	//std::chrono::duration<double> duration = endStList - startStList;

	//std::cout << "Время выполнения программы: " << duration.count() << " секунд" << std::endl;

	
	return 0;
}
