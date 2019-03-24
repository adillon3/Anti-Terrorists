#ifndef TESTIMONIALS_H
#define TESTIMONIALS_H
#include <vector>
#include <string>

using namespace std;

struct testimonialNode

{
    string customerName;
    string customerTestimonial;
};

class Testimonials
{
public:
    Testimonials();
    ~Testimonials();
    void addTestimonial();
private:
    vector <testimonialNode> myTestimonials;
    unsigned int vectorSize;
};

#endif // TESTIMONIALS_H
