/*
** EPITECH PROJECT, 2019
** Banana.hpp
** File description:
** ex00
*/

#include "Banana.hpp"


Banana::Banana() : Fruit()
{
        _vitamins = 5;
        _name = "banana";
}

Banana::~Banana()
{
}

int Banana::getVitamins() const
{
        return (this->_vitamins);
}

std::string Banana::getName() const
{
        return (this->_name);
}

