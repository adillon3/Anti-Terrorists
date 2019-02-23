/*******************************************************************************
 * Author     :Andrew Dillon
 * Student ID :1078583
 * Project 1  :Maintance Plan
 * CLASS      :CS1B
 * SECTION    :MW: 5:00p - 7:20p
 * DUE DATE   :02/25/19
 ******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <ios>
#include <limits>
using namespace std;

enum RobotOptions {
					URBAN,
					DESERT,
					JUNGLE
				 };

main()
{
	//Variables
	RobotOptions chosenRobot;
	int			 chosenRobotInt;


	cout << "Select model, 1 (URBAN),2 (DESERT), or 3 (JUNGLE):";
	cin  >> chosenRobotInt;

	switch(chosenRobotInt)
		{
			case 1	: chosenRobot = URBAN;
					  break;
			case 2	: chosenRobot = DESERT;
					  break;
			case 3	: chosenRobot = JUNGLE;
			  	  	  break;
		}

	cout << "Maintance Plan\n\n";

	switch(chosenRobot)
	{
		case URBAN	: cout << "--Urban Robot--\n\n"
					  	   << "Make sure to check that tires are fully inflated before use to ensure safe and easy handling\n"
						   << "Ensure suspension springs are oiled and in good condition before use";;

				  break;
		case DESERT	: cout << "--Desert Robot--\n\n"
					       << "Make sure the tracks are kept clean, remove often and and thouroughly clean\n";
						  break;
		case JUNGLE	: cout << "--Jungle Robot--\n\n"
					  	   << "Make sure to check that tires are fully inflated before use to ensure safe and easy handling\n"
						   << "Ensure suspension springs are oiled and in good condition before use";
						  break;
	}

	cout << "Perform a full charge, at least a once every month to ensure that the battery stays in good shape\n"
			"Ensure all RC recievors are clear of dirt and grime.  Failure to do so can result in an inability to communicate with the robot.\n"
			"Wipe down robot with a damp towel regularly.  Once finished, dry with a dry towel\n"
			"Grease axels at least every 3 months to ensure best performance\n"
			"Check that cameras are functioning and are connected before use";


	cout << "\n\nWarrenty Options:\n\n"
		 << "- 1 Year   - $ 467.89\n"
		 << "- 2 Year   - $ 835.78\n"
		 << "- Lifetime - $1124.99\n"
		 << "\n*All warrenties cover the replacment of any parts.  To get replacment parts, call or email us.\n\n";


	return 0;
}
