#include<iostream>
#include<stdlib.h>
using namespace std;

class Date {
	private:
	int year,month,day;
	public:
		Date(int y,int m,int d);
		Date (int y=200){
			year = y;
			month = 10;
			day = 1;
			cout<<"Date():1 parameter."<<endl;
		}
		Date(Date & d);
		~Date(){
			cout<<"destructor of Date:"<<year<<"."<<month<<"."<<day<<endl;
		}
		bool isLeapyear(){
			return bool(year%4 ==0 && year % 100 !=0 || year%400 ==0);
		} 
		void Print(){
			cout<<year<<"."<<month<<"."<<day<<endl;
		}
		
};
Date::Date(int y,int m,int d){
	year =y;
	month = m;
	day = d;
	cout<<"Date():3 parameter."<<endl;
}
Date::Date(Date & d){
	year = d.year;
	month = d.month;
	day = d.day;
	cout<<"copy Date."<<endl;
}

int main(){
	Date date1(2007,1,7),date2(date1);
	cout<<"date1";
	date1.Print();
	cout<<"dater2";
	date2.Print();
	if (date1.isLeapyear())
		cout<<"date1 is a Leapyear."<<endl;
	else
		cout<<"date1 is not a Leapyear."<<endl;
	if (date2.isLeapyear())
		cout<<"date2 is a Leapyaer."<<endl;
	else
		cout<<"date2 is not a Leapyear"<<endl;
}
