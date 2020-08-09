/*
 * FlyweightFactory.hpp
 *
 *  Created on: Apr 1, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP11_FLYWEIGHTFACTORY_HPP_
#define PATTERN_DP11_FLYWEIGHTFACTORY_HPP_

#include <map>
#include "./IFlyweight.hpp"

using namespace std;

namespace FlyweightSpace {

    class FlyweightFactory {
    public:
        virtual ~FlyweightFactory();

        IFlyweight *getFlyweight(const int key);

    private:
      map<int, IFlyweight*> mSharedComponent;
    };

} /* namespace FlyweightSpace */

#endif /* PATTERN_DP11_FLYWEIGHTFACTORY_HPP_ */
