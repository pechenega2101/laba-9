#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stack>

#include "Toy.h"
#include "Exception.h"
using namespace std;
namespace mySpace {
    class Algorithm
    {
    public:
        void algor1()
        {
            int a, count, lnum = 0;
            std::string line;
            std::ifstream file("1.txt");
            std::ofstream ofile("out.txt");

            /* if (!file || !ofile)
             {
                 std::cerr << "File wasnt opened" << std::endl;
                 exit(1);
             }*/
            file.seekg(0, std::ios_base::beg);
            a = file.tellg();
            std::stack<char> stack;
            count = 0;
            while (file) {
                ++lnum;

                std::getline(file, line);
                if (!file) return;
                for (int i = 0; i < line.length(); i++) {
                    if (line[i - 1] >= 'a' && line[i - 1] <= 'z' && line[i] <= 'a' && line[i] >= 'z') {
                        count++;
                        i++;
                    }
                    ++i;
                }
            }
            std::cout << count << "\n";
            ofile << count << "\n";
            file.close();
            ofile.close();
            std::cout << "\n\n";
        }
        template<typename Iterator>
        void alg2(const Iterator& head, const Iterator& tail, std::list<mySpace::Toy>& ring) {
            Iterator it;
            Iterator start = head;
            int choise=50;
            int count = 0;
         /*   cin >> choise;*/
            while (start != tail) {
                it = start;
                ++it;
                while (it != tail) {
                    if (*it < *start) {
                      /*  Iterator tmp = it;*/
                        ++it;
                        count++;
                    }
                    ++it;
                }
                ++start;
            } if (count == 0) {
                    cout << "The element,which lesser than " << choise << " wasn't found ";
                }
                else {
                    cout << "The are " << count << " elements, that has lesser than " << choise << endl;
                }
        }
        template<typename Iterator>
        void alg3(const Iterator& head, const Iterator& tail, std::list<mySpace::Toy>& ring) {
            Iterator it;
            Iterator start = head;
                it = start;
                ++it;
                while (it != tail) {
                    if (*it == *start) {
                        Iterator tmp = it;
                        ++it;
                        ring.erase(tmp);
                        --it;
                    }
                    ++it;
                }
        }
    };
}


