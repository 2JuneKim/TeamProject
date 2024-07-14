#pragma once

#include <curl/curl.h>
#include <string>

class LibcurlWrapper {
public:
    virtual void wrapper_curl_global_init(int);
    virtual void wrapper_curl_global_cleanup();

    virtual CURL* wrapper_curl_easy_init();
    virtual void wrapper_curl_easy_cleanup();

    virtual void wrapper_curl_easy_setopt(CURL*, CURLoption, const void *);
    virtual void wrapper_curl_easy_setopt(CURL*, CURLoption, void *);
    virtual void wrapper_curl_easy_setopt(CURL*, CURLoption, size_t (*)(void *, size_t, size_t, void*));
    virtual void wrapper_curl_easy_setopt(CURL*, CURLoption, long int);
    virtual CURLcode wrapper_curl_easy_perform(CURL* );
    virtual void wrapper_curl_easy_getinfo(CURL*, CURLINFO, void *);
};