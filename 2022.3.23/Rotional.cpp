#include <iostream>
using namespace std;

class Rational
{
private:
	int x;
	int y;
public:
    void setxy(int _x, int _y)
	{
		this->x = _x;
		this->y = _y;
	}
	Rational(int _x = 0, int _y = 1)
	{
		this->x = _x;
		this->y = _y;
	}
	Rational add(Rational R)
	{
		//通分
		int an = this->y * R.y;
		int xn = this->x * R.y + R.x * this->y;
		int yn = an;
		Rational Rn;
		Rn.setxy(xn, yn);
		return Rn;
	}

	Rational Mul(Rational R)
	{
		int xn = this->x * R.x;
		int yn = this->y * R.y;
		Rational Rn;
		Rn.setxy(xn, yn);
		return Rn;
	}

	Rational Sub(Rational R)
	{
		//通分
		int an = this->y * R.y;
		int xn = this->x * R.y - R.x * this->y;
		int yn = an;
		Rational Rn;
		Rn.setxy(xn, yn);
		return Rn;
	}

	Rational Div(Rational R)
	{
		int xn = this->x * R.y;
		int yn = this->y * R.x;
		Rational Rn;
		Rn.setxy(xn, yn);
		return Rn;
	}

	void print()
	{
		cout << this->x << "/" << this->y << endl;
	}

	//化简
	
};

//拷贝构造函数
//全局变量

int main()
{
	Rational Ri(1, 2);
	Rational Rj(1, 2);
	
	Rational R = Ri.add(Rj);
	R.print();
	Rational R1 = Ri.Mul(Rj);
}








