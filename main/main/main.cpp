#include <iostream>
#include <Windows.h>

void serials() {


	std::cout << "------------DiskDrive Serialnumber------------\n";

	system("wmic diskdrive get serialnumber");

	std::cout << "------------DiskDrive Model------------\n";

	system("wmic diskdrive get model");

	std::cout << "------------Ram------------\n";

	system("wmic memorychip get serialnumber");

	std::cout << "------------MotherBoard------------\n";

	system("wmic baseboard get serialnumber");

	std::cout << "------------Smbios------------\n";

	system("wmic csproduct get uuid");

	std::cout << "------------Bios------------\n";

	system("wmic bios get serialnumber");

	std::cout << "------------Cpu------------\n";

	system("wmic cpu get processorid");


	std::cout << "[+] process is completed, press any key to close the program\n";

	system("pause");


}

int main() {
	serials();
}
