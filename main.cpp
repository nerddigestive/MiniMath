/*
 * main.cpp
 *
 *  Created on: 4 Dec 2017
 *      Author: edward.hill
 */

#include <iostream>

#include "MiniMath.h"

void print_vec2(Vec2 v);
void print_vec3(Vec3 v);

int main() {

	
	Vec2 vector2_a(1.0, 2.0);
	Vec2 vector2_b(2.0, 3.0);

	std::cout << "Vector2 A: " << std::endl;
	print_vec2(vector2_a);
	std::cout << "Vector2 B: " << std::endl;
	print_vec2(vector2_b);

	std::cout << vector2_a * vector2_b << std::endl << std::endl;

	Vec3 vector3_a(1.0, 2.0, 3.0);
	Vec3 vector3_b(2.5, 5.0, 10.0);

	std::cout << "Vector3 A: " << std::endl;
	print_vec3(vector3_a);
	std::cout << "Vector3 B: " << std::endl;
	print_vec3(vector3_b);

	print_vec3(vector3_a * vector3_b);

	return 0;
}

void print_vec2(Vec2 v) {
	std::cout << "x: " << v.GetX() << std::endl << "y: " << v.GetY() << std::endl << std::endl;
}

void print_vec3(Vec3 v) {
	std::cout << "x: " << v.GetX() << std::endl << "y: " << v.GetY() << std::endl
			<< "z: " << v.GetZ() << std::endl << std::endl;
}
