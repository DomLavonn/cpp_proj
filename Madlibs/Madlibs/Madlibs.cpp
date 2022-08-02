// Madlibs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Person {



public:
	static int counter;
	std::string testPublic;
	std::string firstname;
	std::string lastname;
	int age;

	Person() {
		this->firstname = "";
		this->lastname = "";
		this->age = 0;
	}


	Person(std::string fn, std::string ln, int age) {
		this->firstname = fn;
		this->lastname = ln;
		this->age = age;
		counter++;

		
	}
	
	void swap(std::string& o, std::string& t) {
		std::string temp;
		temp = o;
		o = t;
		t = o;
	}

	// Destructor
	~Person() {
		std::cout << "The Person is destroyed";
	}

	
	void Hello() {
		std::cout << "Hello from  " << this->firstname + " " + this->lastname;
	}

protected:
	std::string testP;


};



class Male : public Person {



	

public:
	std::string penis;
	std::string muscles;

	Male(std::string fn, std::string ln, int age, std::string penis, std::string  muscles) : Person(fn, ln, age) {
		this->penis = penis;
		this->muscles = muscles;
		this->testP = "This is protected";
		this->testPublic = "tester";
	}

	void Hello() {
		std::cout << "Coming from child clsss" << " " << this->testP <<  "\n";
	}
};





int Person::counter = 0;



// function definition to swap numbers
void swap(int* n1, int* n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int main()
{
	int* ptr;
	int testArr[10];

	ptr = testArr;

	*(ptr + 1) = 33;


	void* ptr;
	float f = 33.33;

	ptr = &f;


	std::cout << *(static_cast<float*>(ptr));



	int a = 1, b = 2;


	swap(&a, &b);


	/*Person p = Person("Domanik", "Johnson", 28);
	Male m = Male("Male", "LNMAle", 100, "P", "M");
	
	m.Hello();

	std::cout << m.firstname << m.lastname << m.age << m.penis << m.muscles << "\n";
	std::cout << m.testPublic; 
*/

//***************************************************
	// Reveiw of pointers 
	
	//int* pointer, var;
	//var = 5;

	//pointer = &var;

	//// Get value of pointer 
	//std::cout << *pointer << "\n";
	//std::cout << var;

	//// Get the address of the var
	//std::cout << pointer;
	//std::cout << &var;



	//int one = 1;
	//int* pone = &one;

	//std::cout << "var =" << var << std::endl;
	//std::cout << "pointer var = " << pone <<  *pone <<  std::endl;



	//std::cout << *pone;



	//int trwo = 2;
	//int* ter = &trwo;


//***************************************************


	//p.Hello();
	//std::cout << p.counter;
	
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
