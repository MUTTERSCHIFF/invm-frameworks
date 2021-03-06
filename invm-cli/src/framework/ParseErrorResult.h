/*
 * Copyright (c) 2015 2016, Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of Intel Corporation nor the names of its contributors
 *     may be used to endorse or promote products derived from this software
 *     without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * When the parser isn't able to find a valid transition after a give token.
 */

#ifndef _CLI_FRAMEWORK_PARSEERRORRESULT_H_
#define _CLI_FRAMEWORK_PARSEERRORRESULT_H_

#include "SyntaxErrorResult.h"

namespace cli {
namespace framework {

/*!
 * When the parser isn't able to find a valid transition after a given token.
 */
class INVM_CLI_API ParseErrorResult : public SyntaxErrorResult
{
public:
	/*!
	 * Invalid command. Usually when there isn't enough input to match to a specific command.
	 */
	ParseErrorResult();

	/*!
	 * Result for when the parser isn't able to parse input or match the input to a defined command spec.
	 * @param invalidToken
	 * 		The token that is invalid. Indicates error with the input at or around this token.
	 */
	ParseErrorResult(Token invalidToken);

	ParseErrorResult(std::string lexeme, TokenType type);

private:
	void setInvalidTokenResult(cli::framework::Token &invalidToken);
};

} /* namespace framework */
} /* namespace cli */
#endif /* PARSEERRORRESULT_H_ */
