#ifndef _POINT_HPP_
#define _POINT_HPP_

class Point
{
	private:
		int x;
		int y;

	public:
		Point();
		Point(int x, int y);
		Point(const Point& point);
		~Point();
		int getX() const;
		int getY() const;
		void setX(int x);
		void setY(int y);
		void print();
};

#endif
