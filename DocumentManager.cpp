#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

void DocumentManager::createDocument(){

	std::cout << " Enter the file name for creating : ";
	std::cin >> m_file_name;

	if (std::find(vec.begin(),vec.end(),m_file_name) != vec.end()){

		std::cout << " The file already exist. " << std::endl;
		return;

	} else {
	
		vec.push_back(m_file_name);	
		std::ofstream w_file;
		w_file.open(m_file_name);
	
		if (!w_file.is_open()){
	
			std::cout << " The file not open !!!" << std::endl;
			return;
		}
		std::cout << " Document " << m_file_name << " created successfully. " << std::endl;
		std::cout << "\n Enter the file contents : " << std::endl;
		std::cout << " NOTE / input -- exit -- in new line for finish typeing. \n" << std::endl;
		while (std::getline(std::cin,m_str_line)){
	
			if (m_str_line == "exit"){
		
				break;
			}
	
			w_file << m_str_line << std::endl;
		}
		std::cout << " Content added to file : " << m_file_name << std::endl;

		m_str_line.clear();
		w_file.close();
	}
}

void DocumentManager::showDocuments()
{

	if (vec.empty()){
	
		std::cout << " There are not the documents. " << std::endl;
		return;
	}
	std::cout << " All documets in .: " << std::endl;
	std::cout << std::endl;

	for (auto it : vec){
	
		std::cout << " " << it << std::endl;
	}
}

void DocumentManager::viewDocument()
{
	std::cout << " Enter the file name for view : ";
	std::cin >> m_file_name;
	auto it = std::find(vec.begin(),vec.end(),m_file_name);
	if (it == vec.end()){

		std::cout << " The file doesn't exist. " << std::endl;
		return;
	
	} else {
	
		std::ifstream r_file;
		r_file.open(*it);
		
		if (!r_file.is_open()){
		
			std::cout << " The file not open. " << std::endl;
			return;
		}
			
		std::cout << " File contents : " << std::endl;
		while (std::getline(r_file,m_str_line)){
		
			std::cout << m_str_line << std::endl;
		}
		m_str_line.clear();
		r_file.close();

	}

}

void DocumentManager::editDocument()
{
	std::cout << " Enter the file name for edit : ";
	std::cin >> m_file_name;
	auto it = std::find(vec.begin(),vec.end(),m_file_name);

	if (it == vec.end()){
	
		std::cout << " The file doesn't exist. " << std::endl;
		return;

	} else {
	
		std::ofstream w_file;
		w_file.open(*it, std::ios_base::app);
		
		if (!w_file.is_open()){
		
			std::cout << " The file not open. " << std::endl;
			return;
		}

		std::cout << " Added the text to the content:  \n";
		std::cout << " NOTE / input -- exit -- in new line for finish typeing. \n " << std::endl;
	
		while (std::getline(std::cin,m_str_line)){
		
			if (m_str_line == "exit"){
			
				break;
			}

			w_file << m_str_line << std::endl;
		}
		m_str_line.clear();
		w_file.close();
	}

}
