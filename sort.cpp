#include <iostream>
#include <cmath>
#include <list>
using namespace std;


struct point {
	string name;
	int x;
	int y;
	double distance;
	point(string n, int x, int y) {
		this->name = n;
		this->x = x;
		this->y = y;
		this->distance = sqrt(x * x + y * y);
	}
	friend ostream& operator<<(ostream& output, const point& p) {
		output << p.name << " " << p.x << " " << p.y;
		return output;
	}
	bool operator<(const point &p) {
		return this->distance < p.distance;
	}
};



int main() {
	int s;
	cin >> s;
	for (int i = 0; i < s; i++) {
		list<point> l;
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			string _s;
			int _x, _y;
			cin >> _s >> _x >> _y;
			point p(_s, _x, _y);
			l.push_back(p);
		}
		l.sort();
		for (point p : l) {
			cout << p << endl;
		}
		cout << endl;
	}
}
