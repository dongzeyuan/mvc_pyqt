#include "TextReader.h"


TextReader::TextReader() {
	// TODO Auto-generated constructor stub

}

TextReader::~TextReader() {
	// TODO Auto-generated destructor stub
}

bool TextReader::Open(const std::string& full_path) {
	in.open(full_path, std::ios::in | std::ios::binary);

	return 0;
}

bool TextReader::Print() {
	if (!in.is_open()) {
		std::cout << "파일을 찾을 수 없습니다!" << std::endl;
	}

	int line_num = 0;


	std::wbuffer_convert<std::codecvt_utf16<wchar_t,
	                           0x10ffff, // note your 2nd parameter was wrong
	                           std::little_endian // or consume_header, not both
	                     >> cvt1(f.rdbuf());
	std::wistream wide_f(&cvt1);
	std::wstring wstr;
	std::getline(wide_f, wstr);

	std::wstring_convert<std::codecvt_utf8<wchar_t>> cvt2;
	std::string u8str = cvt2.to_bytes(wstr);

	std::string line;
	while (std::getline(in, line))
	{
		line_num++;
		std::cout << "line_num[" << line_num << "] : "<< line <<  std::endl;

//		if(line_num < 10 )
//		{
//			std::cout << "line_num : " << line_num << ": "<< line <<  std::endl;
//			continue;
//		}


//		parseline(line);
	}
	return 0;
}


void TextReader::parseline(const std::string line) {
	std::cout << "line : " << line << std::endl;
	std::stringstream iss(line);
	int a, b;
	if (!(iss >> a >> b)) {
		std::cout << "a=" << a << "b=" << b << std::endl;
		std::cout << "break!!" << std::endl;

		return ;
	} // error
	std::cout << "a=" << a << "b=" << b << std::endl;
}
