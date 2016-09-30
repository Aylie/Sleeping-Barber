/*
 * File: "$Id: $"
 *
 * Description: solve sleeping barber problem
 *
 * BUGS:
 *
 * NOTE:
 * There are three barbers and ten chairs in the shop.
 * Come to have a nice haircut !
 *
 * First Created on 2016/09/30 by Andrew Wei & Aylie Chou
 * Last Modified on "$Date:$" by $Author$
 *
 * Copyright (c) Openfind Information Technology INC.
 * All rights reserved.
 */

#include <stdio.h>
#include <sys/type.h>
#include <signal.h>
#include <unisted.h>

void
SigHandlerCustomer(int nSigNum)
{
	// add customer code here
}

void
SigHandlerClose(int nSigNum)
{
	// add close shop code here
}

int
main(void)
{
	struct sigaction stSigActCustomer;
	struct sigaction stSigActClose;
	
	// initialize signal action
	memset(&stSigActCustomer, 0, sizeof(stSigActCustomer));
	memset(&stSigActClose, 0, sizeof(stSigActClose));
	// assign signal handler
	stSigActCustomer.sa_handler = &SigHandlerCustomer;
	stSigActClose,sa_handler = &SigHandlerClose;

	// fork shop process
	if (0 == fork()) {
		// child process
		if (0 != fork()) {
			// leave it to init
			exit(0);
		}
		else {
			// add barber process here
		}
	}
	else {
		// parent process
		sigaction(SIGUSR1, &stSigActCustomer,NULL);
		sigaction(SIGUSR2, &stSigActClose, NULL);
	
	}
}

