#include <iostream>
#include <thread>
#include <chrono>


int main()
{

	std::string dump = "";

	while (true)
	{

		for (int x = 0; x < 120; x++)
		{
			std::cout << std::string(x, '0') << 'X' << '\n';

			std::this_thread::sleep_for(std::chrono::milliseconds(1));

			std::system("cls");
		}

		std::cin >> dump;

		if (dump == "x")
		{
			break;
		}
	}



	return 0;
}