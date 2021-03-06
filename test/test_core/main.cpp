﻿#include <iostream>
#include <aris_core.h>

#include "test_core_object.h"
#include "test_core_socket.h"
#include "test_core_command.h"
#include "test_core_msg.h"
#include "test_core_pipe.h"

int main(int argc, char *argv[])
{
	test_object();
	test_core_msg();
	test_core_socket();
	test_core_pipe();
	test_command();

	std::cout << "test_core finished, press any key to continue" << std::endl;
	std::cin.get();

	return 0;
}