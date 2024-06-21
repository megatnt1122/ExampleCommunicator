#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE Communicator_Factory
#include <boost/test/unit_test.hpp>

#include "public/Communicator_Factory.hpp"
#include "public/Communicator.hpp"

using namespace my_examples;

BOOST_AUTO_TEST_SUITE(CommunicatorFactoryTest)
	
	BOOST_AUTO_TEST_CASE(testing_factory_creation) 
	{

  		CommunicatorFactory communicator_factory;

  		std::unique_ptr<Communicator> communicator_http = communicator_factory.create(COMMUNICATOR_TYPE::HTTP);

  		BOOST_CHECK(communicator_http->getType() == COMMUNICATOR_TYPE::HTTP);
	}


BOOST_AUTO_TEST_SUITE_END()


