//============================================================================
// Name        : Design Patterns
// Author      : sanstwy27
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>

#include "AbstractFactoryClient.hpp"
#include "BuilderClient.hpp"
#include "FactoryMethodClient.hpp"
#include "PrototypeClient.hpp"
#include "SingletonClient.hpp"
#include "AdapterClient.hpp"
#include "BridgeClient.hpp"
#include "CompositeClient.hpp"
#include "DecoratorClient.hpp"
#include "FacadeClient.hpp"
#include "FlyweightClient.hpp"
#include "ProxyClient.hpp"
#include "ChainOfResponsibilityClient.hpp"
#include "CommandClient.hpp"
#include "InterpreterClient.hpp"
#include "IteratorClient.hpp"
#include "MediatorClient.hpp"
#include "MementoClient.hpp"
#include "ObserverClient.hpp"
#include "StateClient.hpp"
#include "StrategyClient.hpp"
#include "TemplateMethodClient.hpp"
#include "VisitorClient.hpp"

using namespace std;

int main() {
    cout << ">>> Design Patterns <<<" << endl;

    //==== dp01: AbstractFactory Test ====
    /*
    cout << "AbstractFactory Test... Start" << endl;
    AbstractFactoryClient().AbstractFactoryTest();
    cout << "AbstractFactory Test... End" << endl;
    */

    //==== dp02: AbstractFactory Test ====
    /*
    cout << "BuilderTest Test... Start" << endl;
    BuilderClient().BuilderTest();
    cout << "BuilderTest Test... End" << endl;
     */

    //==== dp03: FactoryMethod Test ====
    /*
    cout << "FactoryMethod Test... Start" << endl;
    FactoryMethodClient::FactoryMethodTest();
    cout << "FactoryMethod Test... End" << endl;
    */

    //==== dp04: Prototype Test ====
    /*
    cout << "Prototype Test... Start" << endl;
    PrototypeClient::PrototypeTest();
    cout << "Prototype Test... End" << endl;
    */

    //==== dp05: Singleton Test ====
    /*
    cout << "Singleton Test... Start" << endl;
    SingletonClient::SingletonTest();
    cout << "Singleton Test... End" << endl;
    */

    //==== dp06: Adapter Test ====
    /*
    cout << "Adapter Test... Start" << endl;
    AdapterClient::AdapterTest();
    cout << "Adapter Test... End" << endl;
    */

    //==== dp07: Bridge Test ====
    /*
    cout << "Bridge Test... Start" << endl;
    BridgeClient::BridgeTest();
    cout << "Bridge Test... End" << endl;
    */

    //==== dp08: Composite Test ====
    /*
    cout << "Composite Test... Start" << endl;
    CompositeClient::CompositeTest();
    cout << "Composite Test... End" << endl;
    */

    //==== dp09: Decorator Test ====
    /*
    cout << "Decorator Test... Start" << endl;
    DecoratorClient::DecoratorTest();
    cout << endl;
    cout << "Decorator Test... End" << endl;
    */

    //==== dp10: Facade Test ====
    /*
    cout << "Facade Test... Start" << endl;
    FacadeClient::FacadeTest();
    cout << "Facade Test... End" << endl;
    */

    //==== dp11: Flyweight Test ====
    /*
    cout << "Flyweight Test... Start" << endl;
    FlyweightClient::FlyweightTest();
    cout << "Flyweight Test... End" << endl;
    */

    //==== dp12: Proxy Test ====
    /*
    cout << "Proxy Test... Start" << endl;
    ProxyClient::ProxyTest();
    cout << "Proxy Test... End" << endl;
    */

    //==== dp13: Chain Of Responsibility Test ====
    /*
    cout << "Chain Of Responsibility Test... Start" << endl;
    ChainOfResponsibilityClient::ChainOfResponsibilityTest();
    cout << "Chain Of Responsibility Test... End" << endl;
    */

    //==== dp14: Command Test ====
    /*
    cout << "Command... Start" << endl;
    CommandClient::CommandClientTest();
    cout << "Command... End" << endl;
    */

    //==== dp15: Interpret Test ====
    /*
    cout << "Interpret... Start" << endl;
    InterpreterClient::InterpreterTest();
    cout << "Interpret... End" << endl;
    */

    //==== dp16: Iterator Test ====
    /*
    cout << "Iterator... Start" << endl;
    IteratorClient::IteratorTest();
    cout << "Iterator... End" << endl;
    */

    //==== dp17: Mediator Test ====
    // [Decoupling]
    // Facade: unidirectional
    // Mediator: bidirectional
    /*
    cout << "Mediator... Start" << endl;
    MediatorClient::MediatorTest();
    cout << "Mediator... End" << endl;
    */

    //==== dp18: Memento Test ====
    /*
    cout << "Memento... Start" << endl;
    MementoClient::MementoTest();
    cout << "Memento... End" << endl;
    */

    //==== dp19: Observer Test ====
    /*
    cout << "Observer... Start" << endl;
    ObserverClient::ObserverTest();
    cout << "Observer... End" << endl;
    */

    //==== dp20: State Test ====
    /*
    cout << "State... Start" << endl;
    StateClient::StateTest();
    cout << "State... End" << endl;
    */

    //==== dp21: Strategy Test ====
    /*
    cout << "Strategy... Start" << endl;
    StrategyClient::StrategyTest();
    cout << "Strategy... End" << endl;
    */

    //==== dp22: TemplateMethod Test ====
    /*
    cout << "TemplateMethod... Start" << endl;
    TemplateMethodClient::TemplateMethodTest();
    cout << "TemplateMethod... End" << endl;
    */

    //==== dp23: Visitor Test ====
    cout << "Visitor... Start" << endl;
    VisitorClient::VisitorTest();
    cout << "Visitor... End" << endl;







    return 0;
}
