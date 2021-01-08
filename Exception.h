#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <ctime>


namespace mySpace {
	class Exception
	{
	protected:
		int error;
	public:
		Exception()
		{
			error = 0;
		}
		Exception(int _error)
		{
			error = _error;
		}
		~Exception() { };
		void Print()
		{
			if (this->error == 1)
			{
				std::cout << "File isn't open!" << std::endl;
			}

		}
	};
}


