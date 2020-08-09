/*
 * Command.hpp
 *
 *  Created on: Apr 2, 2020
 *      Author: sanstwy27
 */

#ifndef PATTERN_DP14_ICOMMAND_HPP_
#define PATTERN_DP14_ICOMMAND_HPP_

namespace CommandSpace {

    class ICommand {
    public:
        virtual ~ICommand();

        virtual void execute() = 0;
        virtual void undo() = 0;
        virtual void redo() = 0;
    };

} /* namespace CommandSpace */

#endif /* PATTERN_DP14_ICOMMAND_HPP_ */
