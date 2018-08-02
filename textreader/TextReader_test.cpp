#include "gtest/gtest.h"

#include "TextReader.h"

namespace {


TEST(TextReader, open) {

	TextReader tr;
	tr.Open("/home/dm8/project/tsto/logo/HRD-443_170405_v1.00/gui/pti_new_gui/osg_source/language/lang_data/english.txt");
	tr.Print();
}




}  // namespace
