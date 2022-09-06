/*
 * geter.cpp
 *
 *  Created on: 05.09.2022
 *      Author: manuel
 */

#include "./userconfig.hpp"

// General
std::string userconfig::getHaltCommand(){
	return this->HaltCommand;
}
std::string userconfig::getRebootCommand(){
	return this->RebootCommand;
}
unsigned char userconfig::getNumlock(){
	return this->Numlock;
}
std::string userconfig::getInputMethod(){
	return this->InputMethod;// TODO implement different input methods -> only Keyboard at the moment
}
std::vector<std::string> userconfig::getNamespaces(){
	return this->Namespaces;// TODO implement namespaces
}

// Theme
std::string userconfig::getThemeDir(){
	return this->ThemeDir;
}
std::string userconfig::getCurrent(){
	return this->Current;
}
std::string userconfig::getFacesDir(){
	return this->FacesDir;
}
std::string userconfig::getCursorTheme(){
	return this->CursorTheme;
}
std::string userconfig::getFont(){
	return this->Font;
}
bool userconfig::getEnableAvatars(){
	return this->EnableAvatars;
}

// Wayland
std::string userconfig::getSessionDir(){
	return this->SessionDir;
}
std::string userconfig::getSessionCommand(){
	return this->SessionCommand;
}
std::string userconfig::getSessionLogFile(){
	return this->SessionLogFile;
}
bool userconfig::getEnableHiDPI(){
	return this->EnableHiDPI;
}

// Users
std::vector<std::string> userconfig::getDefaultPath(){
	return this->DefaultPath;
}
uint64_t userconfig::getMinimumUid(){
	return this->MinimumUid;
}
uint64_t userconfig::getMaximumUid(){
	return this->MaximumUid;
}
std::vector<std::string> userconfig::getHideUsers(){
	return this->HideUsers;
}
std::vector<std::string> userconfig::getHideShells(){
	return this->HideShells;//TODO implement different shells
}
bool userconfig::getRememberLastUser(){
	return this->RememberLastUser;
}
bool userconfig::getRememberLastSession(){
	return this->RememberLastSession;
}

//Autologin
std::string userconfig::getUser(){
	return this->User;
}
std::string userconfig::getSession(){
	return this->Session;
}
bool userconfig::getRelogin(){
	return this->Relogin;
}

