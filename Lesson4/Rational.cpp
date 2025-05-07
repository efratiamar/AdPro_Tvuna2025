#include "Rational.h"

bool Rational::operator==(const Rational& num) const
{
    return (mone == num.getMone() && mechane == num.getMechane());
}

bool Rational::operator!=(const Rational& num) const
{
    //return !(mone == num.getMone() && mechane == num.getMechane());

    return !(*this == num);
}

Rational Rational::operator+(const Rational& num) const
{
    Rational tmp;

    tmp.setMone(mone * num.getMechane() + num.getMone() * mechane);

    tmp.setMechane(mechane * num.getMechane());

    return tmp;
}

Rational& Rational::operator+=(const Rational& num)
{
    *this = *this + num;
    return *this;
}

Rational& Rational::operator=(const Rational& num)
{
    mone = num.mone;
    mechane = num.mechane;

    return *this;
}

//r3 = r1 * r2;
Rational Rational::operator*(const Rational& r2) const
{
    Rational tmp(mone * r2.getMone(), mechane * r2.getMechane());
    return tmp;
}

//r4 = r3 * 5;
Rational Rational::operator*(int num)
{
    Rational tmp(mone * num, mechane);
    return tmp;
}

//r5 = 7 * r4; 
//this func is not a part of the class, it is a global friend function
Rational operator*(int num, const Rational& r2)
{
    Rational tmp(r2.mone * num, r2.mechane);
    return tmp;
}

ostream& operator<< (ostream& os, const Rational& r2)
{
    os << r2.mone << '/' << r2.mechane << endl;
    return os;
}

istream& operator>>(istream& is, Rational& r2)
{
    //2/3
    char ch;
    is >> r2.mone >> ch >> r2.mechane;
    return is;
}