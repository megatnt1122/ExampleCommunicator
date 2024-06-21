#ifndef COMMUNICATOR_HPP
#define COMMUNICATOR_HPP
#pragma once

namespace my_examples
{
  //IDK if this is needed
  enum class COMMUNICATOR_TYPE
  {
    HTTP
  };

  class Communicator
  {
    public:
      //Put the stuff here
      virtual ~Communicator() = default;
      virtual const COMMUNICATOR_TYPE getType() const = 0; 
      //Dont know what other functions to put cuz i need to look more into the communicator factory
  };
}
#endif // COMMUNICATOR_HPP
