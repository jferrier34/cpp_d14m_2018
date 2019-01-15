/*
** EPITECH PROJECT, 2019
** Fruit.cpp
** File description:
** ex00
*/

#include "Fruit.hpp"

Fruit::Fruit()
{
}

Fruit::~Fruit()
{
}

int Fruit::getVitamins() const
{
        return (this->_vitamins);
}

std::string Fruit::getName() const
{
        return (this->_name);
}