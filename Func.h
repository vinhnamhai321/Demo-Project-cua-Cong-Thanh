#include <iostream>
#include <string>
using namespace std;
class student
{
public:
	student(int No, string Id, string FirstName, string MiddleName, string LastName, string SocialId, bool Gender, student* pointer);
	int no;
	string id, firstName, middleName, lastName, socialId;
	bool gender;
	student* pNext;
};
class schoolYear
{
public:
	schoolYear(string time);
	schoolYear();
	string getYear();
private:
	string year;
};
class Class
{
public:
	Class(string name, int number, Class* pointer);
	Class();
	Class* pNext;
	string getName();
	student* pHead;
	int getNumber();
	bool addStudent();
	void showStudent();
	void deleteStudent();
private:
	string name;
	int number;
};
bool createNewSchoolYear(schoolYear& year);
bool createNewClass(Class*& cl);
void deleteClass(Class*&  cl);
void showClass(Class*& cl);