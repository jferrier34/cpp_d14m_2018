/*
** EPITECH PROJECT, 2019
** Fruit.hpp
** File description:
** ex00
*/

#ifndef _FRUIT_HPP_
#define _FRUIT_HPP_

#include <iostream>
#include <string>
#include <fstream>

class Fruit {
        protected:
                std::string _name;
                int _vitamins;
        public:
                Fruit();
                virtual ~Fruit();
                virtual int getVitamins() const ;
                virtual std::string getName() const;
};


#endif