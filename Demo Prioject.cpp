#include "Func.h"
#include <string>
int main()
{
	Class* apcs=nullptr, *clc=nullptr, *vp=nullptr;		// Tao 3 con tro dai dien cho 3 chuong trinh
	if (createNewClass(apcs))							// Tao mot lop cho khoa APCS 
		cout << "Tao lop hoc thanh cong\n";
	while (true)
	{
		system("cls");
		if (apcs->addStudent())
			cout << "Them hoc sinh thanh cong\n";
		cout << "Ban co muon them hoc sinh cho lop hoc nay (Y/N):";
		char choice; cin >> choice;
		if (choice == 'n' || choice == 'N')
			break;
		else
			continue;									// Tu dong thu 7 den dong thu 19:
	}													// Them hoc sinh, chua lam doc file, Tuan Minh thay doi mot chut nha													
	apcs->showStudent();								// Xuat cac hoc sinh cua 1 lop, chua lam xuat nhieu lop
	while (true)										// Tuan Minh thay doi mot chut nha
	{
		system("cls");
		cout << "Danh sach cac chuong trinh:\n";
		cout << "1.APCS\n";
		cout << "2.CLC\n";
		cout << "3.VP\n";
		cout << "Lua chon cua ban la:";					// Tu dong thu 21 den dong thu 94:
		int chc; cin >> chc;							// Tao lop hoc cho chuong trinh day cu the
		cin.get();										// Moi nguoi co the cai thien no neu muon
		switch (chc)
		{
		case 1:
		{
			while (true)
			{
				system("cls");
				if (createNewClass(apcs))
					cout << "Create Successfully\n";
				cout << "Ban co muon tao them lop hoc cho chuong trinh nay(Y/N):";
				char choice;
				cin >> choice;
				cin.get();
				if (choice == 'N' || choice == 'n')
					break;
				else
					continue;
			}
			break;
		}
		case 2:
		{
			while (true)
			{
				system("cls");
				if (createNewClass(clc))
					cout << "Create Successfully\n";
				cout << "Ban co muon tao them lop hoc cho chuong trinh nay(Y/N):";
				char choice;
				cin >> choice;
				cin.get();
				if (choice == 'N' || choice == 'n')
					break;
				else
					continue;
			}
			break;
		}
		case 3:
		{
			while (true)
			{
				system("cls");
				if (createNewClass(vp))
					cout << "Create Successfully\n";
				cout << "Ban co muon tao them lop hoc cho chuong trinh nay (Y/N):";
				char choice;
				cin >> choice;
				cin.get();
				if (choice == 'N' || choice == 'n')
					break;
				else
					continue;
			}
			break;
		}
		}
		cout << "Ban co muon tao them lop hoc cho chuong trinh khac (Y/N):";
		char ch; cin >> ch;
		if (ch == 'N' || ch == 'n')
			break;
		else
			continue;
	}
	showClass(apcs);								// Xuat cac lop cua chuong trinh APCS
	showClass(clc);									// Xuat cac lop cua chuong trinh CLC
	showClass(vp);									// Xuat cac lop cua chuong trinh VP
	deleteClass(apcs);								// Xoa cac lop cua chuong trinh APCS
	deleteClass(clc);								// Xoa cac lop cua chuong trinh CLC
	deleteClass(vp);								// Xoa cac lop cua chuong trinh VP
	apcs->deleteStudent();							// Xoa danh sach hoc sinh cua lop hoc trong chuong trinh APCS
	deleteClass(apcs);								// chua lam xoa danh sach hoc sinh cua tung lop hoc tuong ung voi tung chuong trinh
	return 0;										// moi nguoi co the chinh sua
}