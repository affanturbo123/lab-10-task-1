// task-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include <fstream>
using namespace std;
int main()
{
	int ar[100], num;
	cout << "\n Enter the number of elements: ";
	cin >> num;  
	cout << "\n Writing array's elements: " << endl;
	for (int i = 0; i < num; i++)     // inserting elements in the array
	{
		cin >> ar[i];
	}
	fstream arr_file;
	arr_file.open("arra.txt", ios::out);      // opening file in write mode
	if (arr_file)
	{
		for (int i = 0; i < num; i++)
		{
			arr_file << ar[i]<< " ";           // writing array elements to the file
		}
	}
	arr_file.close();    // closing the file
	int sum = 0;
	arr_file.open("arra.txt", ios::app | ios::in | ios::out);
	cout << "\n The retrieved array is: " << endl;
	while (!arr_file.eof())
	{
		for (int i = 0; i < num; i++)
		{
			cout << ar[i];
			sum += ar[i];
		}
		arr_file << "Sum is: " << sum;      // appending the file
	}
		
	cout << "\n Sum appended successfully";
	arr_file.close();    // closing the file
	  // terminatio of program
	return 0;     
}


	
	
	

		



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
