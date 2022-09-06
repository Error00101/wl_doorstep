/*
 * window.hpp
 *
 *  Created on: 04.09.2022
 *      Author: manuel
 */

#ifndef SOURCE_WINDOW_WINDOW_HPP_
#define SOURCE_WINDOW_WINDOW_HPP_

#include <qapplication.h>
#include <qpushbutton.h>

#include "../LoadResources/config/configs.hpp"

class Greeter {
public:
	Greeter(int argc, char **argv);
	~Greeter();

	int ShowSplashscreen(config configuration);
	int ShowSplashscreen(config configuration, int operation);
	int HideSplashscreen(std::string session, std::string user);
private:
	QApplication* app=NULL;
};


#endif /* SOURCE_WINDOW_WINDOW_HPP_ */
