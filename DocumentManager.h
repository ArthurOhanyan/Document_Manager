#include <vector>

class DocumentManager
{
	public:


		enum Menu { CREATE = 1, SHOW, VIEW, EDIT, EXIT };

		void createDocument();
		void showDocuments();
		void viewDocument();
		void editDocument();

	private:
		std::string m_file_name;
		std::string m_file_content;
		std::string m_str_line;
		std::vector<std::string> vec;

		};

#include "DocumentManager.cpp"
