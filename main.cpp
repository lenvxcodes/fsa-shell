#include <iostream>
#include <string>
#include <filesystem>

void logo() {

	std::string logo = R"(
  _____                               .__           .__  .__   
_/ ____\___________              _____|  |__   ____ |  | |  |  
\   __\/  ___/\__  \    ______  /  ___/  |  \_/ __ \|  | |  |  
 |  |  \___ \  / __ \_ /_____/  \___ \|   Y  \  ___/|  |_|  |__
 |__| /____  >(____  /         /____  >___|  /\___  >____/____/
           \/      \/               \/     \/     \/ \      
)";

	std::cout << "\033[1;31m" << logo << "\n\033[1;30mproudly written in c++\033[0m";

}

int chk() {

	if (std::filesystem::exists("fsa-shell") && std::filesystem::is_directory("fsa-shell")) {

		if (std::filesystem::exists("data/user.txt") && std::filesystem::is_regular_file("data/user.txt")) {

			if (std::filesystem::exists("data/pass.txt") && std::filesystem::is_regular_file("data/pass.txt")) {

				return 0;

			}
			else {

				return 1;
			}
		}
		else {

			return 1;
		}
	}
	else {

		return 1;

	}
}

int main() {
	
	logo();
	
	std::cout << "\nchk";

	if (chk() == 0) {
	
		std::cout << "\nchk passed.";

	}

	else {
	
		std::cout << "\ndid not pass chk";

	}
	return 0;

}
