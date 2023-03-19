//  Weather update server in C++
//  Binds PUB socket to tcp://*:5556
//  Publishes random weather updates
//
//  Olivier Chamoux <olivier.chamoux@fr.thalesgroup.com>
//
#include <zmq.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#if (defined (WIN32))
//#include <zhelpers.hpp>
//#endif


int main () {

    //  Prepare our context and publisher
    zmq::context_t context (1);
    zmq::socket_t publisher (context, ZMQ_PUB);
    publisher.bind("tcp://*:5556");
    //  publisher.bind("ipc://weather.ipc");                // Not usable on Windows.

    //  Initialize random number generator
    srand ((unsigned) time (NULL));
    while (1) {

        int zipcode;
        std::string text;

        //  Get values that will fool the boss
        // zipcode     = within (100000);
        zipcode = 10001;
        text = "[1,2,3,4,5]";


        //  Send message to all subscribers
        zmq::message_t message(20);
        snprintf ((char *) message.data(), 20 ,
                  "%05d %s", zipcode, &text);
        publisher.send(message);

    }
    return 0;
}
