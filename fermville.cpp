#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void launcher();
void input_for_area_measurement();

int main() {
	launcher();
	input_for_area_measurement();

}

void launcher() {
	string input;
	string launch_word = "Run";

	while(input!= launch_word)
	{
	cout<<" Write Run for launch" <<endl;
	cin>>input;

	if (input == launch_word)
	{
	cout<<"You have initialised Fermville program"<<endl;
	}

	else if(input!= launch_word){
	cout<<"Please try again"<<endl;
	}

	}
}

void input_for_area_measurement() {
	int area_number;
	int measured_quarter_from_area;
	
	const int stored_quarter = 25;
	const int fully_stored_percentage = 100;
	const int stored_half = 50;
	const int doubled = 2;

	int area_number_substracted_by_quarter;
	int area_number_substracted_by_half;
	int proposition_of_area_expansion;


	cout<<"Write down number for area measurement"<<endl;
	cin>>area_number;
	measured_quarter_from_area = area_number * stored_quarter / fully_stored_percentage;
	
	area_number_substracted_by_quarter = area_number - measured_quarter_from_area;
	area_number_substracted_by_half = area_number_substracted_by_quarter * stored_half / fully_stored_percentage;

	cout<<"Measured from area number sides are equal to: "<<area_number_substracted_by_half<<","<<measured_quarter_from_area<<endl;


	int raising_to_the_power_of_second_half = pow(area_number_substracted_by_half, 2);
	int raising_to_the_power_of_second_quarter = pow(area_number_substracted_by_quarter, 2);
	int double_up_area_number = doubled * measured_quarter_from_area * area_number_substracted_by_half;

	cout<<"Sides for larger area"<<raising_to_the_power_of_second_half<<" "<<double_up_area_number<<" "<<raising_to_the_power_of_second_quarter<<endl;

	proposition_of_area_expansion = raising_to_the_power_of_second_half + double_up_area_number + raising_to_the_power_of_second_quarter;

	cout<<"Expanded area is equal to:"<<proposition_of_area_expansion<<endl;
}


