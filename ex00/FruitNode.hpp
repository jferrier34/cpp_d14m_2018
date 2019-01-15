/*
** EPITECH PROJECT, 2019
** FruitNode.hpp
** File description:
** ex00
*/

#ifndef _FRUITNODE_HPP_
#define _FRUITNODE_HPP_

#include "Fruit.hpp"
#include "FruitBox.hpp"

struct FruitNode {
        Fruit *fruit;
        struct FruitNode *next;
        struct FruitNode *begin;
};

#endif
