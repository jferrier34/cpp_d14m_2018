/*
** EPITECH PROJECT, 2019
** FruitBox.hpp
** File description:
** ex00
*/

#ifndef _FRUITBOX_HPP_
#define _FRUITBOX_HPP_

#include "Fruit.hpp"
#include "FruitNode.hpp"
#include "Banana.hpp"
#include "Lemon.hpp"

class FruitBox {
        private:
                int _size;
                int _nbFruit;
                FruitNode *_basket;
        public:
                FruitBox();
                FruitBox(int size);
                int nbFruits() const;
                bool putFruit(Fruit *f);
                Fruit *pickFruit();
                FruitNode *head() const;
};

#endif
