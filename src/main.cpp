#include <iostream>
#include <thread>
#include <memory>


class Cube{
public:
	Cube(){}
	Cube(int edge):_edge(edge){}

	void display_volume(){ 
		std::cout << _edge * _edge * _edge << std::endl;
	}

private:
	int _edge = 1;


};
void Func(int a)
{
	for(int i = 0 ; i < a ; ++i)
		std::cout << "Hello" << std::endl;
}
int main()
{

	Cube a;
	a.display_volume();

}

