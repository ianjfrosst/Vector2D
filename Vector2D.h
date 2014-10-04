#pragma once

#include <math.h>

class Vector2D {
    double x, y;
public:
    Vector2D(double nX, double nY);

    void SetXY(double nX, double nY);
    void SetDM(double dir, double mag);

    double GetDir();
    double GetMag();

    Vector2D& operator+=(const Vector2D& v);
    Vector2D& operator-=(const Vector2D& v);
    Vector2D& operator*=(double t);
    Vector2D& operator/=(double t);
    Vector2D& operator&=(const Vector2D& v);
    Vector2D operator-(void) const;
    Vector2D operator+(const Vector2D& v) const;
    Vector2D operator-(const Vector2D& v) const;
    Vector2D operator*(double t) const;
    Vector2D operator/(double t) const;
    bool operator==(const Vector2D& v) const;
    bool operator!=(const Vector2D& v) const;
    Vector2D& Rotate(double angle);
};
