#define BOOST_TEST_MODULE HttpTests
#include <boost/test/unit_test.hpp>
#include "communicators/HTTP.hpp"

BOOST_AUTO_TEST_SUITE(HttpTests)

BOOST_AUTO_TEST_CASE(TestHttpGet) {
    // Example URL for testing
    std::string getUrl = "https://jsonplaceholder.typicode.com/posts/1";

    // Create an instance of Http
    my_examples::Http http;

    // Perform HTTP GET request
    std::string response = http.get(getUrl);

    // Check if response is not empty (basic validation)
    BOOST_REQUIRE(!response.empty());

    // Print the response (optional)
    BOOST_TEST_MESSAGE("GET Response:\n" << response);
}

BOOST_AUTO_TEST_CASE(TestHttpPost) {
    // Example URL for testing
    std::string postUrl = "https://jsonplaceholder.typicode.com/posts";

    // Example data for POST request
    std::string postData = R"({"title":"foo","body":"bar","userId":1})";

    // Create an instance of Http
    my_examples::Http http;

    // Perform HTTP POST request
    std::string response = http.post(postUrl, postData);

    // Check if response is not empty (basic validation)
    BOOST_REQUIRE(!response.empty());

    // Print the response (optional)
    BOOST_TEST_MESSAGE("POST Response:\n" << response);
}

BOOST_AUTO_TEST_SUITE_END()

