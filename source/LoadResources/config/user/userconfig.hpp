/*
 * userconfig.hpp
 *
 *  Created on: 05.09.2022
 *      Author: manuel
 */

#ifndef SOURCE_LOADRESOURCES_CONFIG_USER_USERCONFIG_HPP_
#define SOURCE_LOADRESOURCES_CONFIG_USER_USERCONFIG_HPP_

#include <string>
#include <vector>

class userconfig {
public:
	userconfig();
	~userconfig();
	// General
	std::string getHaltCommand();
	std::string getRebootCommand();
	unsigned char getNumlock();
	std::string getInputMethod(); // TODO implement different input methods -> only Keyboard at the moment
	std::vector<std::string> getNamespaces(); // TODO implement namespaces

	// Theme
	std::string getThemeDir();
	std::string getCurrent();
	std::string getFacesDir();
	std::string getCursorTheme();
	std::string getFont();
	bool getEnableAvatars();

	// Wayland
	std::string getSessionDir();
	std::string getSessionCommand();
	std::string getSessionLogFile();
	bool getEnableHiDPI();

	// Users
	std::vector<std::string> getDefaultPath();
	uint64_t getMinimumUid();
	uint64_t getMaximumUid();
	std::vector<std::string> getHideUsers();
	std::vector<std::string> getHideShells(); //TODO implement different shells
	bool getRememberLastUser();
	bool getRememberLastSession();

	//Autologin
	std::string getUser();
	std::string getSession();
	bool getRelogin();

private:
	// General
	std::string HaltCommand = "/usr/bin/systemctl poweroff";
	std::string RebootCommand = "/usr/bin/systemctl reboot";
	unsigned char Numlock = 2;
	std::string InputMethod = "";
	std::vector<std::string> Namespaces = {};

	// Theme
	std::string ThemeDir = "/usr/share/sddm/themes";
	std::string Current = "";
	std::string FacesDir = "/usr/share/sddm/faces";
	std::string CursorTheme = "";
	std::string Font = "";
	bool EnableAvatars = true;

	// Wayland
	std::string SessionDir = "/usr/share/wayland-sessions";
	std::string SessionCommand = "/usr/share/sddm/scripts/wayland-session";
	std::string SessionLogFile = ".local/share/sddm/wayland-session.log";
	bool EnableHiDPI = false;

	// Users
	std::vector<std::string> DefaultPath = {"/usr/local/bin","/usr/bin:/bin"};
	uint64_t MinimumUid = 1000;
	uint64_t MaximumUid = 60513;
	std::vector<std::string> HideUsers = {};
	std::vector<std::string> HideShells = {};
	bool RememberLastUser = true;
	bool RememberLastSession = true;

	//Autologin
	std::string User = "";
	std::string Session = "";
	bool Relogin = false;
};



#endif /* SOURCE_LOADRESOURCES_CONFIG_USER_USERCONFIG_HPP_ */
