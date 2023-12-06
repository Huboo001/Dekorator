#pragma once
#include "Component.h"

class Decorator : public Component {
    /**
     * @var Component
     */
protected:
    Component* component_;

public:
    Decorator(Component* component) : component_(component) {
    }
    /**
     * The Decorator delegates all work to the wrapped component.
     */
    std::string Operation() const override {
        return this->component_->Operation();
    }
};