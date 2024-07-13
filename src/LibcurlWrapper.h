#pragma once

#include <curl/curl.h>
#include <string>

class LibcurlWrapper {
public:
    void wrapper_curl_global_init(int);
    void wrapper_curl_global_cleanup();

    CURL* wrapper_curl_easy_init();
    void wrapper_curl_easy_cleanup();

    void wrapper_curl_easy_setopt(CURL*, CURLoption, const void *);
    void wrapper_curl_easy_setopt(CURL*, CURLoption, void *);
    void wrapper_curl_easy_setopt(CURL*, CURLoption, size_t (*)(void *, size_t, size_t, void*));
    void wrapper_curl_easy_setopt(CURL*, CURLoption, long int);
    CURLcode wrapper_curl_easy_perform(CURL* );
    void wrapper_curl_easy_getinfo(CURL*, CURLINFO, void *);
};