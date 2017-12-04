/*
 * Vec2.cpp
 *
 *  Created on: 4 Dec 2017
 *      Author: edward.hill
 */

// System includes
#include <cmath>

// Library includes
#include "Vec2.h"

// Constructors
Vec2::Vec2() {
	m_x = 0.0;
	m_y = 0.0;
}

Vec2::Vec2(double x, double y) {
	m_x = x;
	m_y = y;
}

Vec2::Vec2(double s) {
	m_x = s;
	m_y = s;
}

// Getters
double Vec2::GetX() const {
	return m_x;
}

double Vec2::GetY() const {
	return m_y;
}

// Setters
void Vec2::SetX(double x) {
	m_x = x;
}

void Vec2::SetY(double y) {
	m_y = y;
}

// Mathematical operators
Vec2 Vec2::Sum(Vec2& b) {
	m_x += b.GetX();
	m_y += b.GetY();
	return *this;
}

Vec2 Vec2::Sum(Vec2 a, Vec2& b) {
	return a.Sum(b);
}

Vec2 Vec2::Difference(Vec2& b) {
	m_x -= b.GetX();
	m_y -= b.GetY();
	return *this;
}

Vec2 Vec2::Difference(Vec2 a, Vec2& b) {
	return a.Difference(b);
}

double Vec2::Dot(Vec2& b) {
	return (m_x * b.GetX()) + (m_y * b.GetY());
}

double Vec2::Dot(Vec2 a, Vec2& b) {
	return a.Dot(b);
}

double Vec2::Cross(Vec2& b) {
	return (m_x * b.GetY()) - (m_y * b.GetX());
}

double Vec2::Cross(Vec2 a, Vec2& b) {
	return a.Cross(b);
}

Vec2 Vec2::Scale(double& b) {
	m_x *= b;
	m_y *= b;
	return *this;
}

Vec2 Vec2::Scale(Vec2 a, double& b) {
	return a.Scale(b);
}

double Vec2::Magnitude() {
	return sqrt(pow(m_x, 2.0) + pow(m_y, 2.0));
}

// Logical operators
bool Vec2::Equals(const Vec2& b) const {
	return (m_x == b.GetX() && m_y == b.GetY());
}

bool Vec2::Equals(const Vec2& a, const Vec2& b) const {
	return a.Equals(b);
}
