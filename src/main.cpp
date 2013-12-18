#include <iostream>
#include <conio.h>
    //used for getche()
#include <stdlib.h>
    //used for system("CLS")

using namespace std;

short inputs = 0;
    //to see how many times the user inputs data
short hours, minutes, seconds; 
    //the initial input values by the user
double phours, pminutes, pseconds;
    //all the input values of the user added together
double total_time;  
    //used to calculate the ratios of input data
short total_hours, total_minutes, total_seconds;    
    //the output values based on total time after calculation

int main(int argc, char *argv[])
{

 do
  {
    system("CLS");
	//clears the screen
    inputs++; 
	//increase the value of input for total number of user inputs   
  
    cout << "\nHours:  ";
    cin >> hours;
    cout << "Minutes:  ";
    cin >> minutes;
    cout << "Seconds:  ";
    cin >> seconds;
	//collects the hours, mins, & secs from the users input
    
    phours = phours + hours;
    pminutes = pminutes + minutes;
    pseconds = pseconds + seconds;
	//adds the new inputs to the totals of hours, mins, & secs
    
    cout << "\n" << "Would you like to add another input?  (y)es or (n)o:  ";
    
        
  }while(getche() == 'y');
	//will repeat again as long as 'y' is entered
  
  total_time = (phours) + (pminutes / 60) + (pseconds / 3600);
    //this takes the whole nubmer of hours
    //it takes minutes as it is a 1/60 ratio of hours
    //seconds is a 1/3600 ratio of hours bc it is a 1/60 ratio of minutes
    //adds them all up as one number that is a ratio

  total_hours = short(total_time);
    //taking the whole nubmer value of total_time
    
  total_time = total_time - total_hours;
    //it becomes the original total time minus the whole number value of hours
  
  total_minutes = short(total_time * 60);
    //with the ratio of minutes to hours being 1/60 it gives the whole number
      //value of minutes in regards to its percentage of hours

  total_time = ((total_time * 60) - total_minutes) + .001;
    //to subtract the whole number value you of total minutes you must convert
      //the ratio of total time as well.  since seconds is a 1/60 ratio of
      //minutes it is being multiplied by 60.  the +.001 is to help with the 
      //loss of values due to typecasting to short values
  
  total_seconds = short(total_time * 60);
    //with the ratio of seconds to minutes being 1/60 it gives the whole number
      //value of seconds in regards to its percentage of minutes

  system("CLS"); 
  cout << "\n\n\nWith " << inputs << " input(s) the total time comes to:  \n\n"; 
  cout << "  " << short(total_hours) << " hours " 
       << short(total_minutes) << " minutes "
       << short(total_seconds) << " seconds \n\n\n";
	//displays the calculated data
  
  
  getche();	
      //waits for the user to press a key to end the program
  return 0;
}
