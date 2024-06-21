#ifndef COMMUNICATOR_FACTORY_HPP
#define COMMUNICATOR_FACTORY_HPP
#pragma once

#include "Communicator.hpp"
#include <memory>
namespace my_examples {
  class CommunicatorFactory 
  {
    public:
      std::unique_ptr<Communicator> create(const COMMUNICATOR_TYPE) const;
  };
}
#endif // COMMUNICATOR_FACTORY_HPP
