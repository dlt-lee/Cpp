#include<iostream>
using namespace std;
class Sensor_control {
private:
	int Sensor_one, Sensor_two, Sensor_three;
public:
	Sensor_control(int one, int two, int three);
	long get() {
		return Sensor_one * Sensor_two * Sensor_three;
	}
};
Sensor_control::Sensor_control(int one, int two, int three) {
	Sensor_one = one;
		Sensor_two = two;
		Sensor_three = three;
}
int main() {
	Sensor_control sc(-50, 0, 20);
	cout << sc.get()<<endl;
}
