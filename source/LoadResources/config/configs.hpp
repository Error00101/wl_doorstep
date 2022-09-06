/*
 * configs.hpp
 *
 *  Created on: 04.09.2022
 *      Author: manuel
 */

#ifndef SOURCE_LOADRESOURCES_CONFIGS_HPP_
#define SOURCE_LOADRESOURCES_CONFIGS_HPP_

#include "./user/userconfig.hpp"
#include "./app/appconfig.hpp"
#include "../environment.cpp"

class config {
	config();
	~config();

	userconfig* u_config = NULL;
	environment* e_config = NULL;
	appconfig* a_config = NULL;
};



#endif /* SOURCE_LOADRESOURCES_CONFIGS_HPP_ */
