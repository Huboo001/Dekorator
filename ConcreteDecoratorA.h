#pragma once
#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
    /**
     * Decorators may call parent implementation of the operation, instead of
     * calling the wrapped object directly. This approach simplifies extension of
     * decorator classes.
     */
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {
    }
    std::string Operation() const override {
        std::cout << "zmiana Patrycja";
        return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
    }
};
