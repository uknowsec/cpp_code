/*
* @Author: Uknow
* @Date:   2016-10-17 15:33:06
* @Last Modified by:   Uknow
* @Last Modified time: 2016-10-17 19:59:05
*/

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	void get_value()
	{cin>>num>>name>>sex;}
	void display()
	{
		cout<<"num:"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"sex:"<<sex<<endl;
	}
private:
	int num;
	string name;
	char sex;
};

class Student1:private Student
{
public:
	void get_value_1()
	{
		get_value();
		cin>>age>>addr;
	}
	void display_1()
	{
		display();
		cout<<"age:"<<age<<endl;
		cout<<"address:"<<addr<<endl;
	}
private:
	int age;
	string addr;
};

int main()
{

    Student1 stud1;
    stud1.get_value_1();
    stud1.display_1();
    return 0;
}