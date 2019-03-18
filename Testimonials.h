#include "Maintanance.h"


#include <vector>

struct testimonialNode
{
	string customerName;
	string customerTestimonial;
};


#ifndef TESTIMONIALS_H_
#define TESTIMONIALS_H_



class TestimonialList {

public:

	TestimonialList();
	~TestimonialList();

	void PushNode();
	void PopNode();
	void PrintList();

private:

	vector <testimonialNode> myTestimonials;
	unsigned int vectorSize;
};
#endif /* TESTIMONIALS_H_ */
