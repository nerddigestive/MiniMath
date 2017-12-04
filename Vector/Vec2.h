/*
 * Vec2.h
 *
 *  Created on: 4 Dec 2017
 *      Author: edward.hill
 */

#ifndef VEC2_H_
#define VEC2_H_

class Vec2 {
private:
	// Coordinates
	double m_x, m_y;
public:
	// Constructors
	Vec2();
	Vec2(double x, double y);
	Vec2(double s);

	// Getters
	double GetX() const;
	double GetY() const;

	// Setters
	void SetX(double x);
	void SetY(double y);

	// Mathematical operators
	Vec2 Sum(Vec2& b);
	Vec2 Sum(Vec2 a, Vec2& b);
	Vec2 Difference(Vec2& b);
	Vec2 Difference(Vec2 a, Vec2& b);
	double Dot(Vec2& b);
	double Dot(Vec2 a, Vec2& b);
	double Cross(Vec2& b);
	double Cross(Vec2 a, Vec2& b);
	Vec2 Scale(double& b);
	Vec2 Scale(Vec2 a, double& b);
	double Magnitude();

	// Logical operators
	bool Equals(const Vec2& b) const;
	bool Equals(const Vec2& a, const Vec2& b) const;

	// Unary operator overloads
	Vec2& operator+=(Vec2& rhs) {
		Sum(rhs);
		return *this;
	}

	Vec2& operator-=(Vec2& rhs) {
		Difference(rhs);
		return *this;
	}

	Vec2& operator*=(Vec2& rhs) {
		Cross(rhs);
		return *this;
	}

	Vec2& operator*=(double& rhs) {
		Scale(rhs);
		return *this;
	}

	// Binary operator overloads
	friend Vec2 operator+(Vec2 lhs, Vec2& rhs) { return lhs += rhs; }
	friend Vec2 operator-(Vec2 lhs, Vec2& rhs) { return lhs -= rhs; }
	friend Vec2 operator*(Vec2 lhs, Vec2& rhs) { return lhs *= rhs; }
	friend Vec2 operator*(Vec2 lhs, double rhs) { return lhs *= rhs; }
	friend Vec2 operator*(double lhs, Vec2& rhs) { return rhs *= lhs; }

	friend bool operator==(const Vec2& lhs, const Vec2& rhs) { return lhs.Equals(rhs); }
	friend bool operator!=(const Vec2& lhs, const Vec2& rhs) { return !lhs.Equals(rhs);	}

};

#endif /* VEC2_H_ */
