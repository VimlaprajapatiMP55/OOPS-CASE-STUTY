#include <iostream>

using namespace std;

class employee
{
	int   emp_id;
	char  emp_name[20];
	float emp_age;
	float emp_sallery;

	

	public:

		void get_emp_details();
		void show_emp_details();
};

void employee :: get_emp_details()
{
	cout<<"\nEnter employee id: ";
	cin>>emp_id;
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter employee age: ";
	cin>>emp_age;
	cout<<"\nEnter employee sallery: ";
	cin>>emp_sallery;
	
}


void employee :: show_emp_details()
{
	cout<<"\n\n** Details of  Employee **";
	cout<<"\nEmployee id        :  "<<emp_id;
	cout<<"\nEmployee name      :  "<<emp_name;
	cout<<"\nBasic age          :  "<<emp_age;
	cout<<"\nEmployee sallery   :  "<<emp_sallery;

}


int main()
{
    employee emp;
    
    emp.get_emp_details();
    emp.show_emp_details();

    return 0;
}