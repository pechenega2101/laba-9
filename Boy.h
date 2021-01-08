#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <ctime>

namespace mySpace
{

	class Toy {
	private:
		int id;
		std::string name;
		double price;
	public:
		Toy() :id(rand() % 100), name("Blank "), price(0.0) { }
		Toy(std::string t_name, double t_cost, int id = 0) :id(rand() % 100) {
			if (t_cost < 0) price = 0.;
			else price = t_cost;
			name = t_name;
		}
		~Toy() { }
		bool operator< (const Toy& toy) { return price < toy.price; }
		bool operator> (int choice) { return price > choice; }
		bool operator== (const Toy& toy) { return price == toy.price && name == toy.name; }
		friend std::ostream& operator<< (std::ostream& out, const Toy& Toy)
		{
			out << Toy.id << ' ' << Toy.name << ' ' << Toy.price << '\n';
			return out;
		}

		std::string get_name() { return name; }
		double get_price() { return price; }

	};
}



