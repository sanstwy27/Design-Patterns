/*
 * ConcreteCommandInactive.hpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP14_CONCRETECOMMANDA_HPP_
#define PATTERN_DP14_CONCRETECOMMANDA_HPP_

#include "./ICommand.hpp"
#include "./Receiver.hpp"

namespace CommandSpace {

    class ConcreteCmdInactive : public ICommand {
    public:
        ConcreteCmdInactive(Receiver* receiver);

        void execute();
        void undo();
        void redo();

    protected:
        Receiver* mReceiver;
    };

} /* namespace CommandSpace */

#endif /* PATTERN_DP14_CONCRETECOMMANDA_HPP_ */
