#include <iostream>
using namespace std;
class Hostel {
public:
    string name;
    int age;
    string roomNumber;
    string contact;

    // Function to set student details
    void setDetails() 
	{
        cout << "Enter Student Name: ";
       cin>>name;
        cout << "Enter Student Age: ";
        cin >> age;
        cout << "Enter Room Number: ";
        cin >> roomNumber;
        cout << "Enter Contact Number: ";
        cin >> contact;
    }

    // Function to display student details
    void displayDetails() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
		cout << "Room Number: " << roomNumber << endl;
        cout << "Contact Number: " << contact << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
 {
    Hostel students[20];  // Array to store up to 20 students
    int studentCount = 0;  // Number of students added
    int choice;
    
    while (true)
	 {
        cout << "\nHostel Management System\n";
        cout << "1. Add New Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Name\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
		 {
            case 1:
                if (studentCount < 20) 
				{
                    students[studentCount].setDetails();
                    studentCount++;
                    cout << "Student details added successfully!\n";
                } 
				
			else
			 {
                    cout << "Hostel is full. Cannot add more students.\n";
                }
                break;
            case 2:
                if (studentCount == 0) 
				{
                    cout << "No students available!\n";
                }
				 else
				 {
                    cout << "Displaying all students:\n";
                    for (int i = 0; i < studentCount; i++)
					 {
					students[i].displayDetails();
                    }
                }
                break;
            case 3:
                {
                    string searchName;
                    cout << "Enter Student Name to search: ";
                    cin>>searchName;
                    bool found;
                    for (int i = 0; i < studentCount; i++)
					 {
                        if (students[i].name == searchName) 
						{
                            students[i].displayDetails();
                            found = true;
                            break;
                        }
                    }
                    if (!found)
					 {
                        cout << "Student not found.\n";
                    }
                }
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
    return 0;
}
