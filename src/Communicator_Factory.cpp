#include "public/Communicator_Factory.hpp"
#include "public/Communicator.hpp"
#include "communicators/HTTP.hpp" //still need to create this
#include <memory>

namespace my_examples
{
  std::unique_ptr<Communicator> CommunicatorFactory::create(const COMMUNICATOR_TYPE communicator_type) const
  {
    if(communicator_type == COMMUNICATOR_TYPE::HTTP)
    {
      return std::make_unique<Http>();
    
    }
  return nullptr;
  }
}
