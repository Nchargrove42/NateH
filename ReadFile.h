#if !defined READ_FILE
#define READ_FILE

#include "Text.h"
// new comment 
#include <fstream>
using namespace std;

class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
	
	public:
		ReadFile* createReadFile(const char* file_name);
		void destroyReadFile(ReadFile* rf);
		String* readLine(ReadFile* rf);
		bool eof(ReadFile* rf);
		void close(ReadFile* rf);
};


#endif
