/////////////  Task 1)
#include <iostream>
using namespace std;
struct Employee
{
	char name[50];
	int age;
	float basicsalary;
	float grosssalary;

	void inputbasicsalary(Employee* ptr1)
	{
		cout << "Enter name:" << endl;
		cin.ignore();
		cin.getline(ptr1->name, 50);
		cout << "Enter basic salary:" << endl;
		cin >> ptr1->basicsalary;

	}
	void calculate(Employee* ptr1)
	{

		grosssalary = (0.1 * basicsalary) + (0.15 * basicsalary) + (0.7 * basicsalary) + (0.25 * basicsalary);


	}
	void displayresult(Employee* ptr1)
	{
		cout << "Name :" << name << endl;
		cout << "Gross salary: " << grosssalary << endl;
	}
};
int main()
{

	Employee* ptr;  // pehla question
	Employee obj1, obj2, obj3, obj4, obj5;
	ptr = &obj1;
	cout << "Person 1:" << endl;
	ptr->inputbasicsalary(ptr);// pointer bhej raha hoon
	ptr->calculate(ptr);
	ptr->displayresult(ptr);
	cout << "Person 2:" << endl;
	ptr = &obj2;
	ptr->inputbasicsalary(ptr);
	ptr->calculate(ptr);
	ptr->displayresult(ptr);
	cout << "Person 3:" << endl;
	ptr = &obj3;
	ptr->inputbasicsalary(ptr);
	ptr->calculate(ptr);
	ptr->displayresult(ptr);
	cout << "Person 4:" << endl;
	ptr = &obj4;
	ptr->inputbasicsalary(ptr);
	ptr->calculate(ptr);
	ptr->displayresult(ptr);
	cout << "Person 5:" << endl;
	ptr = &obj5;
	ptr->inputbasicsalary(ptr);
	ptr->calculate(ptr);
	ptr->displayresult(ptr);

	system("pause");
}

///////////////Task 2)
#include <iostream>
using namespace std;
struct Employee
{
	char name[50];
	int age;
	float basicsalary;
	float grosssalary;// was not initilize
	friend void inputbasicsalary(Employee* ptr1);
	friend void calculate(Employee* ptr1);
	friend void displayresult(Employee* ptr1);
};
void inputbasicsalary(Employee* ptr1)
{
	cout << "Enter name:" << endl;
	cin.getline(ptr1->name, 50);
	cout << "Enter basic salary:" << endl;
	cin >> ptr1->basicsalary;
	cin.ignore();//THsi is  the right place upper ye name ka pahla letter ura rha tha
}
void calculate(Employee* ptr1)
{// ptr1-> was not used with data members then ther cannt be called without ptr1
	ptr1->grosssalary = (0.1 * ptr1->basicsalary) + (0.15 * ptr1->basicsalary) + (0.7 * ptr1->basicsalary) + (0.25 * ptr1->basicsalary);
}

void displayresult(Employee* ptr1)
{
	cout << "Name :" << ptr1->name << endl;
	cout << "Gross salary: " << ptr1->grosssalary << endl;
}
int main()
{

	Employee* ptr;  // pehla question
	Employee obj1, obj2, obj3, obj4, obj5;
	ptr = &obj1;
	cout << "Person 1:" << endl;
	inputbasicsalary(ptr);// pointer bhej raha hoon
	calculate(ptr);
	displayresult(ptr);
	cout << "Person 2:" << endl;
	ptr = &obj2;
	inputbasicsalary(ptr);
	calculate(ptr);
	displayresult(ptr);
	cout << "Person 3:" << endl;
	ptr = &obj3;
	inputbasicsalary(ptr);
	calculate(ptr);
	displayresult(ptr);
	cout << "Person 4:" << endl;
	ptr = &obj4;
	inputbasicsalary(ptr);
	calculate(ptr);
	displayresult(ptr);
	cout << "Person 5:" << endl;
	ptr = &obj5;
	inputbasicsalary(ptr);
	calculate(ptr);
	displayresult(ptr);

	system("pause");
}

/////////Task 3 :
#include <iostream>
using namespace std;
void adddiognals(int** ptr, int** ptr2, int x, int y)
{
	int* ptr3 = new int[x];
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (i == j)
			{
				ptr3[i] = ptr[i][j] + ptr2[i][j];
			}

		}
	}
	cout << "Sum of Right Diagonals:" << endl;
	cout << "[";
	for (int i = 0; i < x; i++)
	{
		cout << ptr3[i] << ", ";
	}
	cout << "]";
}
int main()
{
	int x, y;
	cout << "1st 2d array:" << endl;
	cout << "Enter rows :" << endl;
	cin >> x;
	int** ptr1 = new int* [x];
	cout << "Enter columns :" << endl;
	cin >> y;
	for (int i = 0; i < x; i++)
	{
		ptr1[i] = new int[y];
	}
	cout << "Enter elements in matrix 1: " << endl;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << endl;
			cin >> ptr1[i][j];

		}
	}
	int x2, y2;
	cout << "1st 2d array:" << endl;
	cout << "Enter rows :" << endl;
	cin >> x2;
	int** ptr2 = new int* [x2];
	cout << "Enter columns :" << endl;
	cin >> y2;
	for (int i = 0; i < x2; i++)
	{
		ptr2[i] = new int[y2];
	}
	cout << "Enter elements in matrix 2: " << endl;
	for (int i = 0; i < x2; i++)
	{
		for (int j = 0; j < y2; j++)
		{
			cout << endl;
			cin >> ptr2[i][j];

		}
	}
	adddiognals(ptr1, ptr2, x, y);
	system("pause");


}

////////////// Task 4)
#include <iostream>
using namespace std;
void adddiognals(int** ptr, int** ptr2, int x, int y)
{
	int* ptr3 = new int[x];
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if ((i + j) == 2)
			{
				ptr3[i] = ptr[i][j] + ptr2[i][j];
			}

		}
	}
	cout << "Sum of Left Diagonals:" << endl;
	cout << "[";
	for (int i = 0; i < x; i++)
	{
		cout << ptr3[i] << ", ";
	}
	cout << "]";
}
int main()
{
	int x, y;
	cout << "1st 2d array:" << endl;
	cout << "Enter rows :" << endl;
	cin >> x;
	int** ptr1 = new int* [x];
	cout << "Enter columns :" << endl;
	cin >> y;
	for (int i = 0; i < x; i++)
	{
		ptr1[i] = new int[y];
	}
	cout << "Enter elements in matrix 1: " << endl;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << endl;
			cin >> ptr1[i][j];

		}
	}
	int x2, y2;
	cout << "1st 2d array:" << endl;
	cout << "Enter rows :" << endl;
	cin >> x2;
	int** ptr2 = new int* [x2];
	cout << "Enter columns :" << endl;
	cin >> y2;
	for (int i = 0; i < x2; i++)
	{
		ptr2[i] = new int[y2];
	}
	cout << "Enter elements in matrix 2: " << endl;
	for (int i = 0; i < x2; i++)
	{
		for (int j = 0; j < y2; j++)
		{
			cout << endl;
			cin >> ptr2[i][j];

		}
	}
	adddiognals(ptr1, ptr2, x, y);
	system("pause");


}