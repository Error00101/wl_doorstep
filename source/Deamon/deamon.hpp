/*
 * deamon.hpp
 *
 *  Created on: 06.09.2022
 *      Author: manuel
 */

#ifndef SOURCE_DEAMON_DEAMON_HPP_
#define SOURCE_DEAMON_DEAMON_HPP_

#include "../LoadResources/config/configs.hpp"
#include "./hooks.hpp"
#include "./wayland.hpp"

class daemon {
public:
	daemon();
	~daemon();
	int baseSetup();
	int setupLockingWatchdog(void* function, int Param);
	int setupSignoutWatchdog(void* function, int Param);
	int setupShutdownWatchdog(void* function, int Param);
	int setupStandbyWatchdog(void* function, int Param);
	int setupSleepWatchdog(void* function, int Param);
private:
	void* Lockfunction=NULL;
	void* Signoutfunction=NULL;
	void* Shutdownfunction=NULL;
	void* Standbyfunction=NULL;
	void* Sleepfunction=NULL;
};



#endif /* SOURCE_DEAMON_DEAMON_HPP_ */
