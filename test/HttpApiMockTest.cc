#include "../src/HttpAPI.h"
#include "MockLibcurlWrapper.h"

using namespace std;

#if 0
TEST(HttpApiMockTest, libcurlEasyInitTest) {
    LibcurlWrapper libcurl;
    CURL *curl = libcurl.wrapper_curl_easy_init();
    EXPECET_NE(nullptr, curl);
}

TEST(HttpApiMockTest, libcurlListAddTest) {
    LibcurlWrapper libcurl;
    
}
#endif