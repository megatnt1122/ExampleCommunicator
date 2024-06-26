#include "public/Communicator.hpp"
#include "HTTP.hpp"
#include <iostream>
#include <curl/curl.h>

namespace my_examples {

const COMMUNICATOR_TYPE Http::getType() const {
    return COMMUNICATOR_TYPE::HTTP;
}
//Basic Get implementation
std::string Http::get(const std::string& url) const {
    CURL* curl = curl_easy_init();
    std::string response;

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, [](char* ptr, size_t size, size_t nmemb, void* userdata) -> size_t {
            reinterpret_cast<std::string*>(userdata)->append(ptr, size * nmemb);
            return size * nmemb;
        });
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            response = "Error: " + std::string(curl_easy_strerror(res));
        }

        curl_easy_cleanup(curl);
    } else {
        response = "Error: Failed to initialize libcurl.";
    }

    return response;
}

//Post 
std::string Http::post(const std::string& url, const std::string& data) const {
    CURL* curl = curl_easy_init();
    std::string response;

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, data.length());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, [](char* ptr, size_t size, size_t nmemb, void* userdata) -> size_t {
            reinterpret_cast<std::string*>(userdata)->append(ptr, size * nmemb);
            return size * nmemb;
        });
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            response = "Error: " + std::string(curl_easy_strerror(res));
        }

        curl_easy_cleanup(curl);
    } else {
        response = "Error: Failed to initialize libcurl.";
    }

    return response;
}

} // namespace my_examples

