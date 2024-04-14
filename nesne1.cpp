#include<iostream>

using namespace std;

class human{
	public: 
	
	string name;
	int age,salary;

	void parameters(){
		
		cout<<age<<" "<<salary<<" "<<name<<" ";
	}
	
};
int main(){
	human human1;
	human1.age=21;
    human1.salary=1000;
    human1.name="melih";


	
	human1.parameters();
	return 0;
}
