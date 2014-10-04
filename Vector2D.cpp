#include "Vector2D.h"

Vector2D::Vector2D(double nX, double nY) {
    SetXY(nX, nY);
}

void Vector2D::SetXY(double nX = 0, double nY = 0) {
    x = nX;
    y = nY;
}

void Vector2D::SetDM(double dir, double mag) {
    x = cos(dir) * mag;
    y = sin(dir) * mag;
}

double Vector2D::GetDir() {
    return atan2(x, y);
}

double Vector2D::GetMag() {
    return hypot(x, y);
}

Vector2D& Vector2D::operator+=(const Vector2D& v) {
    x += v.x;
    y += v.y;
    return (*this);
}

Vector2D& Vector2D::operator-=(const Vector2D& v) {
    x -= v.x;
    y -= v.y;
    return (*this);
}

Vector2D& Vector2D::operator*=(double t) {
    x *= t;
    y *= t;
    return (*this);
}

Vector2D& Vector2D::operator/=(double t) {
    double f = 1.0 / t;
    x *= f;
    y *= f;
    return (*this);
}

Vector2D& Vector2D::operator&=(const Vector2D& v) {
    x *= v.x;
    y *= v.y;
    return (*this);
}

Vector2D Vector2D::operator-(void) const {
    return (Vector2D(-x, -y));
}

Vector2D Vector2D::operator+(const Vector2D& v) const {
    return (Vector2D(x + v.x, y + v.y));
}

Vector2D Vector2D::operator-(const Vector2D& v) const {
    return (Vector2D(x - v.x, y - v.y));
}

Vector2D Vector2D::operator*(double t) const {
    return (Vector2D(x * t, y * t));
}

Vector2D Vector2D::operator/(double t) const {
    double f = 1.0 / t;
    return (Vector2D(x * f, y * f));
}

bool Vector2D::operator==(const Vector2D& v) const {
    return ((x == v.x) && (y == v.y));
}

bool Vector2D::operator!=(const Vector2D& v) const {
    return ((x != v.x) || (y != v.y));
}

Vector2D& Vector2D::Rotate(double angle) {
    double s = sin(angle);
    double c = cos(angle);

    double nx = c * x - s * y;
    double ny = s * x + c * y;

    x = nx;
    y = ny;

    return (*this);
}

