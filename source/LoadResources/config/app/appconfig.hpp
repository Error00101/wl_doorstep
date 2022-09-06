/*
 * appconfig.hpp
 *
 *  Created on: 05.09.2022
 *      Author: manuel
 */

#ifndef SOURCE_LOADRESOURCES_CONFIG_APP_APPCONFIG_HPP_
#define SOURCE_LOADRESOURCES_CONFIG_APP_APPCONFIG_HPP_

#include <string>

class appconfig{
	appconfig();
	~appconfig();
	std::string getlastUser();
	std::string getlastSession();
	int setlastUser(std::string);
	int setlastSession(std::string);
private:
	std::string lastUser="";
	std::string lastSession="";
};



#endif /* SOURCE_LOADRESOURCES_CONFIG_APP_APPCONFIG_HPP_ */
