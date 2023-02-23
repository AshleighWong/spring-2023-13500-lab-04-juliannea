#include <iostream>
#include <string>
#include "funcs.h"

//Task A Box 
std::string box_function(int width, int height)
{
    std::string box = " ";
    for(int i =0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            std::cout<< box + "*";
        }
        std::cout << box << std::endl;
    }
    return box;
}

//Task B Checkerboard
std::string checkerboard(int width, int height)
{
    std::string checker = " ";
    int i;
    for ( i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if(i%2 == 0)
            {
                std::cout<< checker + "* ";
            }
              
        }
        for(int j = 0; j < width-1; j++)
        {
            if(i%2 != 0)
            {
                std::cout<< checker +" *";
            }
        }
         std::cout<< checker << std::endl;

    }
    return checker;
    
}

//Task C Cross
std::string cross(int size)
{
    std:: string cross_r = "";
    std::string space = " ";
    for(int i = 1; i<= size; i++ )
    {
        for(int j = 1; j <= size; j++)
        {
            if(i == j || j == (size + 1) - i)
            {
                std::cout << cross_r + "*";
            }
            else
            {
                std::cout<< space;
            }
        }
        std::cout << space << std::endl;
    }
    return cross_r;
}
//Task D Lower Triangle 
std::string lower(int size )
{
    std::string lower_r = "";
    for(int i = 1; i <= size; i++) //
    {
        for(int j = 0; j < i; j++)
        {
            std::cout<< lower_r + " *";
        }
        std::cout<< lower_r<<std::endl;
    }
    return lower_r;
    
}
//Task E upper 
std::string upper(int size)
{
    std::string uppers = "";
    for (int i = size; i > 0; i--) 
    {
        for (int j = 0; j < i; j++) 
        {
            std::cout << uppers + " *";
        }
        std::cout<<std::endl;
    }
    return uppers;
}

//Task F trapezoid 
std::string trapezoid(int width, int height)
{
    std::string trap = "";
    std::string space = " ";

    if(height *2 > width)
    {
         std::cout<< trap + "Impossible Shape\n";
    }
        
    else
    {
        for(int i = 1; i <= height; i++)
        {

            for(int s = 0; s < i; s++)
            {
            std::cout<<space;

            }
            for (int j = 0; j < width ; j++)
            {
            std::cout<<trap + "*";
            }
            width = width -2;
            std::cout<<std::endl;
        }
    }

    return trap;
}

std::string checkerboard3(int width, int height)
{
    std::string checker = "";
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) 
        {
            if ((i / 3) % 2 == 0) 
            {
                if ((j / 3) % 2 == 0) 
                {
                    std::cout <<checker+ "*";
                } else {
                   std::cout << " ";
                }
            } 
            else 
            {
                if ((j / 3) % 2 == 0) {
                    std::cout << " ";
                } 
                else
                {
                    std::cout << "*";
                }
            }
        }
        std::cout << std::endl;
    }

    return checker;
}
