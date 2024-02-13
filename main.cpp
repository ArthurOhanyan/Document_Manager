#include <iostream>
#include "DocumentManager.h"

int main ()
{

	int input = 0;
	DocumentManager obj;
	std::cout << "  Welcome To Simple Document Manager " << std::endl;
	
	do {
		std::cout << " \n Options : " << std::endl;
		std::cout << " 1. Create Document " << std::endl;
		std::cout << " 2. Show Documents " << std::endl;
		std::cout << " 3. View Document " << std::endl;
		std::cout << " 4. Edit Document " << std::endl;
		std::cout << " 5. Exit " << std::endl;
		
		std::cout << " Your input : ";
		std::cin >> input;

		switch (input){
		
			case obj.CREATE :

				obj.createDocument();
				break;

			case obj.SHOW :
				
				obj.showDocuments();
				break;

			case obj.VIEW :

				obj.viewDocument();
				break;

			case obj.EDIT :

				obj.editDocument();
				break;

			case obj.EXIT :

				continue;

			default : 

				std::cout << " Please use options " << std::endl;	
		}	
	}
	while (input != obj.EXIT);
	std::cout << " Exiting.... " << std::endl;
	std::cout << "\n Thank you for choosing Simple Document Manager.\n We hope our service and work  made your life just a little easier." << std::endl;

}

