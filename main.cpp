#include <iostream>
#include <string>
#include "funcs.h"

int main()
{
    //Task A tests
    std::cout<<"box(3,5):\n";

    std::string result;

    result = box_function(3,5);

    std::cout<<result;

    std::cout << "\n------------------\n"; // seperator 

    std::cout<<"box(4,4)\n";

    box_function(4,4);
    
    std::cout << "\n------------------\n"; // seperator 
//checker board tests 
    std::string checker_r;
    std::cout<<"checkerboard(11,5)\n";
    checker_r = checkerboard(11,5);
    std::cout<<checker_r;

    std::cout << "\n------------------\n"; // seperator 

    std::string checker_r1;
    std::cout<<"checkerboard(10,4)\n";
    checker_r1 = checkerboard(10,4);
    std::cout<<checker_r1;

    std::cout << "\n------------------\n"; // seperator 

//cross test

    std::string crosses;
    std::cout<<"cross(8)\n";
    crosses = cross(8);
    std::cout<<crosses;

    std::cout << "\n------------------\n"; // seperator 

    std::string crosses1;
    std::cout<<"cross(5)\n";
    crosses1 = cross(5);
    std::cout<<crosses1;

    std::cout << "\n------------------\n"; // seperator 


//lower test 
    
    std::string lowers;
    std::cout<<"lower(5)\n";
    lowers = lower(5);
    std::cout<<lowers;
    std::cout << "\n------------------\n"; // seperator 

    std::string lowers1;
    std::cout<<"lower(3)\n";
    lowers1 = lower(3);
    std::cout << lowers1;

    std::cout << "\n------------------\n"; // seperator 

//upper test
    std::string upper_s;
    std::cout<<"upper(5)\n";
    upper_s = upper(5);
    std::cout<< upper_s;

    std::cout << "\n------------------\n"; // seperator 

    std::string upper_s1;
    std::cout<<"upper(4)\n";
    upper_s1 = upper(4);
    std::cout<<upper_s1;

    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"trapezoid(12,5)\n";
    std::string trapezoids;
    trapezoids = trapezoid(12, 5);
    std::cout<<trapezoids;

    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"trapezoid(12,7)\n";
    std::string trapezoids2;
    trapezoids2 = trapezoid(12, 7);
    std::cout<<trapezoids2;

    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"checkerboard3(16,11)\n";
    std::string checkers3;
    checkers3 = checkerboard3(16, 11);
    std::cout<<checkers3;

    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"checkerboard3(27,27)\n";
    std::string checker4 = checkerboard3(27,27);
    std::cout<<checker4<<std::endl;


}