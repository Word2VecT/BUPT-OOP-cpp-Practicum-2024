#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {
public:
  Shape();
  ~Shape();
  double area();
};

class Circle : public Shape {
private:
  double radius;

public:
  explicit Circle(double radius);
  ~Circle();
  double area() const;
};

class Rectangle : public Shape {
private:
  double width;
  double height;

public:
  Rectangle(double width, double height);
  ~Rectangle();
  double area() const;
};

class Square : public Rectangle {
public:
  explicit Square(double side);
  ~Square();
};

#endif
