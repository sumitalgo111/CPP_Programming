
#include<iostream>
#include<string>
#include <map>

using namespace std;
//

class Employee
{
private:
	int EmpId;
	string Name;
	string Dest;
	
public:
	//constructor
	Employee()
	{
		EmpId = 0;
		Name = "";
		Dest = "";

	}

	Employee(int eid, string nam, string des)
	{
		EmpId = eid;
		Name = nam;
		Dest = des;
	}
	//copy constructor
	Employee(const Employee& emp)
	{
		EmpId = emp.EmpId;
		Name = emp.Name;
		Dest = emp.Dest;
	}
	//assignment operator overload
	Employee operator = (const Employee& emp)
	{
		EmpId = emp.EmpId;
		Name = emp.Name;
		Dest = emp.Dest;

		return *this;
	}
	
	void getDetails()
	{
		cout << "\nEmpId : ";
		cin >> EmpId;
		cout << "\nName : ";
		cin >> Name;
		cout << "\nDestination : ";
		cin >> Dest;
	}

	void display()
	{
		cout << "\nEmp Id = " << EmpId << "\tName = " << Name << "\tDest = " << Dest;
	}
	
	int getId()
	{
		return EmpId;
	}
};

int main()
{

	mymain();

	int* arr = new int[]{2, 0, 3, 5, 0, 6, 1, 0};


	//
	int siz = 8;
	for (int i = 0; i < siz; i++)
	{
		int mPos = i;
		for (int j = i + 1; j < siz; j++)
		{
			if (arr[j] > arr[mPos])
			{
				mPos = j;
			}
		}
		if (mPos != i)
		{
			int tmp = arr[i];
			arr[i] = arr[mPos];
			arr[mPos] = tmp;
		}
	}

	for (int i = 0; i < siz; i++)
		cout << arr[i] << ", ";
	cout << endl;

	int n;
	cout << "Please Enter number of employees : ";
	cin >> n;

	map<int, Employee*> emps;

	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter the employee details : 1) Id 2)Name 3)Destination : ";


		Employee* ptr = new Employee;
		ptr->getDetails();

		emps.insert(make_pair(ptr->getId(), ptr));		
	}

	for (auto itr = emps.begin(); itr != emps.end(); itr++)
	{
		(*itr).second->display();
		cout << endl;
	}
}
