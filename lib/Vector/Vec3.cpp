/*
 * Vec3.cpp
 *
 *  Created on: 4 Dec 2017
 *      Author: edward.hill
 */

// System includes
#include <cmath>

// Library includes
#include "Vec3.h"

// Constructors
Vec3::Vec3() {
	m_x = 0.0;
	m_y = 0.0;
	m_z = 0.0;
}

Vec3::Vec3(double x, double y, double z) {
	m_x = x;
	m_y = y;
	m_z = z;
}

Vec3::Vec3(double s) {
	m_x = s;
	m_y = s;
	m_z = s;
}

// Getters
double Vec3::GetX() const {
	return m_x;
}

double Vec3::GetY() const {
	return m_y;
}

double Vec3::GetZ() const {
	return m_z;
}

// Setters
void Vec3::SetX(double x) {
	m_x = x;
}

void Vec3::SetY(double y) {
	m_y = y;
}

void Vec3::SetZ(double z) {
	m_y = z;
}

// Mathematical operators
Vec3 Vec3::Sum(const Vec3& b) {
	m_x += b.GetX();
	m_y += b.GetY();
	m_z += b.GetZ();
	return *this;
}

Vec3 Vec3::Sum(Vec3 a, const Vec3& b) {
	return a.Sum(b);
}

Vec3 Vec3::Difference(const Vec3& b) {
	m_x -= b.GetX();
	m_y -= b.GetY();
	m_z -= b.GetZ();
	return *this;
}

Vec3 Vec3::Difference(Vec3 a, const Vec3& b) {
	return a.Difference(b);
}

double Vec3::Dot(const Vec3& b) const {
	return (m_x * b.GetX()) + (m_y * b.GetY() + (m_z * b.GetZ()));
}

double Vec3::Dot(const Vec3& a, const Vec3& b) const {
	return a.Dot(b);
}

Vec3 Vec3::Cross(const Vec3& b) {
	return Vec3(m_x = m_y * b.GetZ() - m_z * b.GetY(), 
		m_y = m_z * b.GetX() - m_x * b.GetZ(), 
		m_z = m_x * b.GetY() - m_y * b.GetX());
}

Vec3 Vec3::Cross(Vec3 a, const Vec3& b) {
	return a.Cross(b);
}

Vec3 Vec3::Scale(const double& b) {
	m_x *= b;
	m_y *= b;
	m_z *= b;
	return *this;
}

Vec3 Vec3::Scale(Vec3 a, const double& b) {
	return a.Scale(b);
}

double Vec3::Magnitude() {
	return sqrt(pow(m_x, 2.0) + pow(m_y, 2.0) + pow(m_z, 2.0));
}

// Logical operators
// TODO
bool Vec3::Equals(const Vec3& b) const {
	return (m_x == b.GetX() && m_y == b.GetY() && m_z == b.GetZ);
}

bool Vec3::Equals(const Vec3& a, const Vec3& b) const {
	return a.Equals(b);
}
