#ifndef HTTP_HPP
#define HTTP_HPP
#pragma once

#include "public/Communicator.hpp"

namespace my_examples 
{
//This talks to the
  class Http : public Communicator 
  {
    public:
      const COMMUNICATOR_TYPE getType() const override;
      
      // Function to perform an HTTP GET request
      std::string get(const std::string& url) const;

      // Function to perform an HTTP POST request
      std::string post(const std::string& url, const std::string& data) const;

  };
}
#endif // HTTP_HPP
