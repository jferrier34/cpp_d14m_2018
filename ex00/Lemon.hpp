/*
** EPITECH PROJECT, 2019
** Lemon.hpp
** File description:
** ex00
*/

#ifndef _LEMON_HPP_
#define _LEMON_HPP_

#include "Fruit.hpp"

class Lemon : public Fruit {
        public:
        Lemon();
        ~Lemon();
        virtual int getVitamins() const ;
        virtual std::string getName() const;
};

#endif