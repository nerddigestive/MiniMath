/*
 * vec3.h
 *
 *  Created on: 4 Dec 2017
 *      Author: edward.hill
 */

#ifndef VEC3_H_
#define VEC3_H_

class Vec3 {
private:
	// Coordinates
	double m_x, m_y, m_z;
public:
	// Constructors
	Vec3();
	Vec3(double x, double y, double z);
	Vec3(double s);

	// Getters
	double GetX() const;
	double GetY() const;
	double GetZ() const;

	// Setters
	void SetX(double x);
	void SetY(double y);
	void SetZ(double z);

	// Mathematical operators
	Vec3 Sum(const Vec3& b);
	Vec3 Sum(Vec3 a, const Vec3& b);
	Vec3 Difference(const Vec3& b);
	Vec3 Difference(Vec3 a, const Vec3& b);
	double Dot(const Vec3& b) const;
	double Dot(const Vec3& a, const Vec3& b) const;
	Vec3 Cross(const Vec3& b);
	Vec3 Cross(Vec3 a, const Vec3& b);
	Vec3 Scale(const double& b);
	Vec3 Scale(Vec3 a, const double& b);
	double Magnitude();

	// Logical operators
	bool Equals(const Vec3& b) const;
	bool Equals(const Vec3& a, const Vec3& b) const;

	// Unary operator overloads
	Vec3& operator+=(Vec3& rhs) {
		Sum(rhs);
		return *this;
	}

	Vec3& operator-=(Vec3& rhs) {
		Difference(rhs);
		return *this;
	}

	Vec3& operator*=(Vec3& rhs) {
		Cross(rhs);
		return *this;
	}

	Vec3& operator*=(double& rhs) {
		Scale(rhs);
		return *this;
	}

	// Binary operator overloads
	friend Vec3 operator+(Vec3 lhs, Vec3& rhs) { return lhs += rhs; }
	friend Vec3 operator-(Vec3 lhs, Vec3& rhs) { return lhs -= rhs; }
	friend Vec3 operator*(Vec3 lhs, Vec3& rhs) { return lhs *= rhs; }
	friend Vec3 operator*(Vec3 lhs, double rhs) { return lhs *= rhs; }
	friend Vec3 operator*(double lhs, Vec3& rhs) { return rhs *= lhs; }

	friend bool operator==(const Vec3& lhs, const Vec3& rhs) { return lhs.Equals(rhs); }
	friend bool operator!=(const Vec3& lhs, const Vec3& rhs) { return !lhs.Equals(rhs);	}

};

#endif /* VEC3_H_ */
