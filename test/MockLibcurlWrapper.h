#pragma once

#include "../src/LibcurlWrapper.h"
#include <gmock/gmock.h>

class MockLibcurlWrapper : public LibcurlWrapper {
public:
    MOCK_METHOD(void, wrapper_curl_global_init, (int), (override));
    MOCK_METHOD(void, wrapper_curl_global_cleanup, void, (override));
    MOCK_METHOD(CURL*, wrapper_curl_easy_init, void, (override));
    MOCK_METHOD(void, wrapper_curl_easy_cleanup, void, (override));
    MOCK_METHOD(void, wrapper_curl_easy_setopt, (CURL*, CURLoption, const void *), (override));
    MOCK_METHOD(void, wrapper_curl_easy_setopt, (CURL*, CURLoption, void *), (override));
    MOCK_METHOD(void, wrapper_curl_easy_setopt, (CURL*, CURLoption, size_t (*)(void *, size_t, size_t, void*)), (override));
    MOCK_METHOD(void, wrapper_curl_easy_setopt, (CURL*, CURLoption, long int), (override));
    MOCK_METHOD(CURLcode, wrapper_curl_easy_perform, (CURL*), (override));
    MOCK_METHOD(CURLcode, wrapper_curl_easy_getinfo, (CURL*, CURLINFO, void*), (override));
};
