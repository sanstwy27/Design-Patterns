/*
 * Prototype.hpp
 *
 *  Created on: Mar 30, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP04_PROTOTYPE_HPP_
#define PATTERN_DP04_PROTOTYPE_HPP_

#include <iostream>

using namespace std;

namespace PrototypeSpace {

    class IProto {
    public:
        virtual ~IProto();

        virtual string getVersion() = 0;
        virtual void   setVersion(string version) = 0;
        virtual IProto* clone() = 0;
    };

} /* namespace FactoryMethod */

#endif /* PATTERN_DP04_PROTOTYPE_HPP_ */
