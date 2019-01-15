/*
** EPITECH PROJECT, 2019
** Lemon.cpp
** File description:
** ex00
*/

#include "Lemon.hpp"

Lemon::Lemon() : Fruit()
{
        _vitamins = 3;
        _name = "lemon";
}

Lemon::~Lemon()
{
}

int Lemon::getVitamins() const
{
        return (this->_vitamins);
}

std::string Lemon::getName() const
{
        return (this->_name);
}


