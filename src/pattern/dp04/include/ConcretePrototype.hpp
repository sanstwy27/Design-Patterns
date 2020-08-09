/*
 * ConcretePrototype.h
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP04_CONCRETEPROTOTYPE_HPP_
#define PATTERN_DP04_CONCRETEPROTOTYPE_HPP_

#include "./Prototype.hpp"

namespace PrototypeSpace {

    class ConcretePrototype: public IProto {
    public:
        ConcretePrototype();
        ConcretePrototype(string version);
        ~ConcretePrototype();

        string getVersion();
        void   setVersion(string version);
        IProto* clone();

    private:
        string mVersion;
    };

} /* namespace Prototype */

#endif /* PATTERN_DP04_CONCRETEPROTOTYPE_HPP_ */
