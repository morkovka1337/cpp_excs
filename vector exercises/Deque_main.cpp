#include <deque>
#include <string>
#include <iostream>
using namespace std;
template <typename t>
void DisplayDeque(const deque<t>& deq)
{
	for (auto elem = deq.begin(); elem != deq.end(); ++elem)
		std::cout << *elem << std::endl;
	std::cout << endl;
}

int main()
{
	deque<string> deq{ "hello"s, "string2"s, "string3"s };
	DisplayDeque(deq);
	getchar();
}