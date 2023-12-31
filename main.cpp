#include <iostream>
#include <string>
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

void ClientCode(Component* component) {
    // ...
    std::cout << "RESULT: " << component->Operation();
    // ...
}

int main() {
    /**
     * This way the client code can support both simple components...
     */
    Component* simple = new ConcreteComponent;
    std::cout << "Testy zmian\n";
    ClientCode(simple);
    std::cout << "\n\n";
    /**
     * ...as well as decorated ones.
     *
     * Note how decorators can wrap not only simple components but the other
     * decorators as well.
     */
    Component* decorator1 = new ConcreteDecoratorA(simple);
    Component* decorator2 = new ConcreteDecoratorB(decorator1);
    std::cout << "Ciekawe czy dziala\n";
    ClientCode(decorator2);
    std::cout << "\n";

    delete simple;
    delete decorator1;
    delete decorator2;

    return 0;
}