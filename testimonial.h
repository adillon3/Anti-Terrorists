#ifndef TESTIMONIALS_H
#define TESTIMONIALS_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

using namespace std;

struct testimonialNode

{
    string customerName;
    string customerTestimonial;
};

class Testimonial
{
public:
    Testimonial();
    ~Testimonial();
    void addTestimonial(string name, string entry);
private:
    vector <testimonialNode> myTestimonials;
    unsigned int vectorSize;
};

#endif // TESTIMONIALS_H
