#include <iostream>
#include <fstream>

struct Vector2D
{
	int x;
	int y;
	void print()
	{
		printf("%d, %d", x, y);
	}
};

std::ostream &operator <<(std::ostream &stream, Vector2D obj)
{
	stream << obj.x << " " << obj.y << std::endl;

	return stream;
}

int main()
{
	Vector2D my_verctor;
	my_verctor.x = 1;
	my_verctor.y = 2;
	//my_verctor.print();

	//FILE *of = fopen("cstyle.txt", "w");

	//fprintf(of, "%d%d", my_verctor.x, my_verctor.y);

	//fclose(of);

	/*using namespace std;
	cout << my_verctor.x << " " << my_verctor.y << endl;*/

	//std::cout << my_verctor << std::endl;

	std::ofstream ofile("cstyle.txt");
	ofile << my_verctor << std::endl;
}
