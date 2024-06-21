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

  };
}
#endif // HTTP_HPP
