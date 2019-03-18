#include "Maintanance.h"


#include <vector>


#include "Testimonials.h"

TestimonialList	:: TestimonialList()
{
	ifstream fin;

	testimonialNode newTestimonialNode;

	fin.open("Testimonials.txt");

	vectorSize = 0;

	while(!fin.eof())
	{
		getline(fin,newTestimonialNode.customerName);
		//fin.ignore('\n',1000);
		cout << "Customer Name: " << newTestimonialNode.customerName << endl;

		getline(fin,newTestimonialNode.customerTestimonial);
		//fin.ignore('\n',1000);
		cout << "Customer Testimonial: "
			 << newTestimonialNode.customerTestimonial << endl;

		//Extra ignore to get past blank line between entries
		fin.ignore(10000,'\n');


		myTestimonials.push_back(newTestimonialNode);

		vectorSize ++;
	}
	fin.close();
}

TestimonialList :: ~TestimonialList()
{
	unsigned int index;
	ofstream fout;

	fout.open("Testimonials.txt");

	for(index = 0; index < vectorSize; index++)
	{
		//if the customer name is empty, the saved name is set to Anonymous
		if(myTestimonials[index].customerName.empty())
		{
			fout << "Anonymous" << endl;
		}
		else
		{
			fout << myTestimonials[index].customerName << endl;
		}//END if(myTestimonials[index].customerName == " ")

		fout << myTestimonials[index].customerTestimonial << endl;

		//Accounting for blank line between testimonials
		if(index + 1 != vectorSize)
		{
			fout << endl;
		}

	}//END for(index = 0; index < vectorSize; index++)

	fout.close();
}

void TestimonialList :: PrintList()
{
	unsigned int index;

	cout << "Customer Testimonials\n";

	if(vectorSize == 0)
	{
		cout << "There are currently no testimonials.  Be the first to add one!";
	}
	else
	{
		for(index = 0; index < vectorSize ;index ++)
		{
			cout << myTestimonials[index].customerTestimonial;
			cout << "\n - " << myTestimonials[index].customerName;
			cout << endl << endl;
		}
	}//END else for if(vectorSize == 0)
}

void TestimonialList :: PushNode()
{
	testimonialNode newTestimonialNode;

	cout << "Enter your name here: ";
	getline(cin,newTestimonialNode.customerName);

	cout << "Write testimonial here:\n";
	getline(cin,newTestimonialNode.customerTestimonial);

	//Adding node to vector
	myTestimonials.push_back(newTestimonialNode);

	vectorSize ++;
}

void TestimonialList :: PopNode()
{
	
}
