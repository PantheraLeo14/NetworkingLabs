src := $(wildcard)

main : test.cpp func.hpp
		g++ -std=c++20 test.cpp func.hpp -o test