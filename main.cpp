/*
 * main.cpp
 *
 *  Created on: 4 Dec 2017
 *      Author: edward.hill
 */

#include <iostream>

#include "Vec2.h"

void print_vec(Vec2 v);

int main() {

	Vec2 vector_a(1.0, 2.0);
	Vec2 vector_b(2.5, 5.0);

	std::cout << "Vector A: " << std::endl;
	print_vec(vector_a);
	std::cout << "Vector B: " << std::endl;
	print_vec(vector_b);

	return 0;
}

void print_vec(Vec2 v) {
	std::cout << "x: " << v.GetX() << std::endl << "y: " << v.GetY() << std::endl << std::endl;
}
