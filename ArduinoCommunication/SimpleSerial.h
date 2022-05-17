//visited 05-05-2022 from https://github.com/dmicha16/simple_serial_port
//by David Michalik og Daquer, last commit to page Copyright 2018 David Michalik

//all comments and changes by Nikita Barrett Skieller

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
	SimpleSerial(const char* com_port, DWORD COM_BAUD_RATE);	//added const

	string ReadSerialPort(int reply_wait_time, string syntax_type);
	bool WriteSerialPort(const char* data_sent);	//added const
	bool CloseSerialPort();
	~SimpleSerial();
	bool connected_;
};