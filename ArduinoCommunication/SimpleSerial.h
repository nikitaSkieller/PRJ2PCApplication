//hentet 05-05-2022 fra https://github.com/dmicha16/simple_serial_port
//af David Michalik og Daquer, sidste commit til siden 28-08-2011

#pragma once

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <string.h>
#include <chrono>
#include <thread>
#include <time.h>
#include <fstream>

using namespace std;

class SimpleSerial
{

private:
	HANDLE io_handler_;
	COMSTAT status_;
	DWORD errors_;

	string syntax_name_;
	char front_delimiter_;
	char end_delimiter_;

	void CustomSyntax(string syntax_type);

public:
	SimpleSerial(const char* com_port, DWORD COM_BAUD_RATE);	//tilføjet const

	string ReadSerialPort(int reply_wait_time, string syntax_type);
	bool WriteSerialPort(const char* data_sent);	//tilføjet const
	bool CloseSerialPort();
	~SimpleSerial();
	bool connected_;
};