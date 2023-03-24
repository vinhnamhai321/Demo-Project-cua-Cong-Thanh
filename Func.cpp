#include "Func.h"
schoolYear::schoolYear(string time):year(time) {}
schoolYear::schoolYear(){}
Class::Class(string name, int number, Class* pointer):name(name),number(number),pNext(pointer){}
Class::Class() {}
student::student(int No, string Id, string FirstName, string MiddleName, string LastName, string SocialId, bool Gender, student* pointer)
	:no(No),id(Id),firstName(FirstName),middleName(MiddleName),lastName(LastName),socialId(SocialId),gender(Gender),pNext(pointer){}
bool Class::addStudent()
{
	cout << "Nhap so thu tu cua hoc sinh:";
	int no; cin >> no;
	cout << "Nhap ma so sinh vien cua hoc sinh:";
	cin.ignore();
	string id; getline(cin,id);
	cout << "Nhap ho cua hoc sinh:";
	cin.ignore();
	string firstName; getline(cin, firstName);
	cout << "Nhap ten dem cua hoc sinh:";
	cin.ignore();
	string middleName; getline(cin,middleName);
	cout << "Nhap ten chinh cua hoc sinh:";
	cin.ignore();
	string lastName; getline(cin, lastName);
	cout << "Nhap gioi tinh cua hoc sinh (Nam=1/Nu=0):";
	bool gender; cin >> gender;
	cout << "Nhap can cuoc cong dan cua hoc sinh:";
	cin.ignore();
	string socialId; getline(cin, socialId);
	if (!pHead)
	{
		pHead = new student(no, id, firstName, middleName, lastName, socialId, gender, nullptr);
	}
	else
	{
		student* tmp= new student(no, id, firstName, middleName, lastName, socialId, gender, pHead);
		pHead = tmp;
	}
	return true;
}
string schoolYear::getYear()
{
	return year;
}
bool createNewSchoolYear(schoolYear& year)
{
	cout << "Nhap nien khoa cua nam hoc:";
	string time;
	getline(cin, time);
	year = schoolYear(time);
	return true;
}
string Class::getName()
{
	return name;
}
int Class::getNumber()
{
	return number;
}
bool createNewClass(Class*& cl)
{
	cout << "Nhap ten lop hoc: ";
	string name;
	getline(cin, name);
	cout << "Nhap so luong sinh vien cua lop hoc: ";
	int number;
	cin >> number;
	if (!cl)
	{
		cl = new Class(name, number, nullptr);
	}
	else
	{
		Class* tmp = new Class(name, number, cl);
		cl = tmp;
	}
	return true;
}
void deleteClass(Class*& cl)
{
	if (!cl)
		return;
	for (cl; cl; )
	{
		Class* tmp = cl;
		cl = cl->pNext;
		delete tmp;
	}
}
void showClass(Class*& cl)
{
	for (Class* cur = cl; cur; cur = cur->pNext)
	{
		cout<<cur->getName()<<" "<<cur->getNumber()<<endl;
	}
}
void Class::showStudent()
{
	for (student* cur = pHead; cur; cur = cur->pNext)
	{
		cout << cur->no << " " << cur->id << " " << cur->firstName << " " << cur->middleName << " " << cur->lastName<<" "<<cur->socialId<<" ";
		if (cur->gender)
			cout << "Nam\n";
		else
			cout << "Nu\n";
	}
}
void Class::deleteStudent()
{
	for (pHead; pHead;)
	{
		student* tmp = pHead;
		pHead = pHead->pNext;
		delete tmp;
	}
}