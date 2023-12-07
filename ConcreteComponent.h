#pragma once
#include "Component.h"

class ConcreteComponent : public Component {
public:
    std::string Operation() const override {
        return "ConcreteComponent\nZmiana wprowadzona przez Huebrta\n";
    }
};
