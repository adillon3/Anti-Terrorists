/*
 * Testimonials.h
 *
 *  Created on: Mar 18, 2019
 *      Author: Nisha
 */

#include <vector>

//! A Testimonial struct
/*!
  * \brief Struct that holds the customer name and testimonials
  */
struct testimonialNode
{
	//! A struct variable
	/*!
	 * String variable 1
	 */
	string customerName;

	//! A struct variable
		/*!
		 * String variable 2
		 */
	string customerTestimonial;
};

#ifndef TESTIMONIALS_H_
#define TESTIMONIALS_H_

//! A Testimonial class
/*!
 * Testimonial class that can add and delete testimonials
 */
class TestimonialList {

public:

	//! A constructor.
	/*!
	  Creates the vector for testimonials
	 */
	TestimonialList();

	//! A destructor.
	/*!
	  Destructor for the Testimonial list
	*/
	~TestimonialList();

	//! A normal member that adds node to vector
	/*!
	  \brief A member function that removes a testimonial
	 */
	void PushNode();

	//! A normal member that adds node to vector
		/*!
		  \brief A member function that removes a testimonial
		 */
	void PopNode();

	//!A normal member that prints the testimonials
	/*!
	  \brief prints the testimonials list
	 */
	void PrintList();

private:
	//! A private variable
	/*!
	  Testimonial vector
	 */
	vector <testimonialNode> myTestimonials;

	//! A private variable
	/*!
	   vector size int
	 */
	unsigned int vectorSize;

}

#endif /* TESTIMONIALS_H_ */
