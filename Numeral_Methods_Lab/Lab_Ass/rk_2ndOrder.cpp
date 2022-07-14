#include <bits/stdc++.h>
using namespace std;

float dydx(float x, float y)
{
	return (x*x + y);
}

float rungeKutta2nd(float x0, float y0,float x, float h)
{
	int n = (int)((x - x0) / h);
	float k1, k2;
	float y = y0;
	for (int i = 1; i <= n; i++) {
		k1 = h * dydx(x0, y);
		k2 = h * dydx(x0 + 0.5 * h, y + 0.5 * k1);
		y = y + (1.0 / 6.0) * (k1 + 2 * k2);
		x0 = x0 + h;
	}
	return y;
}
int main()
{
	float x0 = 0, y = 1,x = 0.02, h = 0.01;
	cout <<"y(x) = " << rungeKutta2nd(x0, y, x, h);
	return 0;
}

