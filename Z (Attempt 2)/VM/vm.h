#pragma once

#include "..\utils.h"
#include "opcode.h"

namespace vm {
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// Flags
	const int FLAG_DEBUG = 1;
	const int FLAG_PROFILE = 2;

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// Types
	namespace types {
		// 32-bit word: addresses, integers
		typedef int32_t word_t;
		// 8-bit byte: register IDs, opcode IDs, chars
		typedef int8_t byte_t;
		// 16-bit short: address offsets
		typedef int16_t short_t;

		union Value {
			word_t word;
			byte_t byte;
			short_t short_;
		};

		static_assert(sizeof(std::intptr_t) == sizeof(word_t), "No workaround for non-word-size (32-bit) pointers");
	}

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// Opcodes: Included in separate header file


	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// Assembler
	

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// Executor
	
}