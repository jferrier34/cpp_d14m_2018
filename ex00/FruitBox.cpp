/*
** EPITECH PROJECT, 2019
** FruitBox.hpp
** File description:
** ex00
*/

#include "FruitBox.hpp"
#include "Fruit.hpp"
#include "FruitNode.hpp"

FruitBox::FruitBox()
{
}

FruitBox::FruitBox(int size)
{
        this->_size = size;
        this->_nbFruit = 0;
        this->_basket = NULL;
}

int FruitBox::nbFruits() const
{
        return (this->_nbFruit);
}

bool FruitBox::putFruit(Fruit *f)
{
        if (_nbFruit == _size || !f) {
                return (false);
                FruitNode *tmp = this->_basket->begin;
                for (; this->_basket->next; this->_basket->begin = this->_basket->next)
                        if (this->_basket->fruit == f) {
                                return (false);
                        }
                this->_basket->next = new FruitNode();
                this->_basket->next->fruit = f;
                this->_nbFruit = _nbFruit + 1;
                return (true);
        }
        else {
                return (false);
        }
}

Fruit *FruitBox::pickFruit()
{
        FruitNode *tmp;

        if (_basket != NULL) {
                tmp = _basket;
                _basket = _basket->next;
                _nbFruit = _nbFruit - 1;
                return (tmp->fruit);
        }
        return (NULL);
}

FruitNode *FruitBox::head() const 
{
        return (_basket);
}

