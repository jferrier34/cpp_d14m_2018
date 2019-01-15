/*
** EPITECH PROJECT, 2019
** Banana.hpp
** File description:
** ex00
*/

#ifndef _BANANA_HPP_
#define _BANANA_HPP_

#include "Fruit.hpp"

class Banana : public Fruit {
        public:
        Banana();
        ~Banana();
        virtual int getVitamins() const ;
        virtual std::string getName() const;
};

#endif