#include "public/Communicator.hpp"
#include "HTTP.hpp"
#include <iostream>

namespace my_examples
{
  const COMMUNICATOR_TYPE Http::getType() const
  {
    return COMMUNICATOR_TYPE::HTTP;
  }

}
