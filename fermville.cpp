#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void launcher();
void input_for_area_measurement();

int main() {
	launcher();
	

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
