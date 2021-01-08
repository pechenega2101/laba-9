#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include "Algorithm.h"
#include "Toy.h"
#include "Exception.h"


int main()
{
    mySpace::Algorithm A;
    A.algor1();
    std::cout << "\n\n";
    mySpace::Toy t1("Ketus", 56.5);
    mySpace::Toy t2("Fetus", 51.9);
    mySpace::Toy t3("Lich", 2.5);
    mySpace::Toy t4("Vanish", 55.2);
    mySpace::Toy t5("Lucio", 60.0);
    std::list<mySpace::Toy> ring;
    std::list<mySpace::Toy> find1, find2;

    std::list<mySpace::Toy>::iterator start;
    std::list<mySpace::Toy>::iterator end;
 /*   ring.push_back(t1);*/
   /* ring.push_back(t1);*/
    ring.push_back(t1);
    ring.push_back(t2);
 /*   ring.push_back(t5);*/
    ring.push_back(t3);
    ring.push_back(t1);
    ring.push_back(t4);
    ring.push_back(t5);


    start = ring.begin();
    while (start != ring.end()) {
        std::cout << *start;
        ++start;
    }

    std::cout << std::endl;
   A.alg2(ring.begin(), ring.end(), ring);
   start = ring.begin();
   while (start != ring.end()) {
       std::cout << *start;
       ++start;
   }
   std::cout<<"\n";
   A.alg3(ring.begin(), ring.end(), ring);
    start = ring.begin();
    while (start != ring.end()) {
        std::cout << *start;
        ++start;
    }

    return 0;
}
