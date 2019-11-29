#include "pch.h"

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

TEST(Sensor_test, 16080160) {
	Sensor_control sc(160, 80, 160);
	EXPECT_EQ(0, sc.get());
}
TEST(Sensor_test, 14050100) {
	Sensor_control sc(140, 50, 100);
	EXPECT_EQ(700000, sc.get());
}
TEST(Sensor_test, nagative12050100) {
	Sensor_control sc(-120, 50, 100);
	EXPECT_EQ(-600000, sc.get());
}
TEST(Sensor_test, nagative150nagative20nagative220) {
	Sensor_control sc(-150, -20, -220);
	EXPECT_EQ(0, sc.get());
}