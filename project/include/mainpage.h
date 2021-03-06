/*! \mainpage CSCI 3081 Delivery Simulation project
* 
* 
* This Doxygen page includes all relavent info about classes and structure to
* the CSCI 3081w drone simulation project.
* 
* How to run: 
*
*   -The files needed for compilation can be obtained from https://github.umn.edu/umn-csci-3081-s21/repo-brow4339/tree/master/project.
*
*   -Once installed the simulation must be run from within the UMN CSCI 3081 docker.
*
*   -Once in docker change directory to within the "project" directory wherever it was installed.
*
*   -Execute the "make" command to generate files for execution.
*
*   -To then run the simulation execute the command "./bin/run.sh" still from within the "project" directory.
*
*   -After that open a web browser and navigate to the link "http://127.0.0.1:8081/".
*
*   -Once there the simulation will connect and can be seen executing.
*
*   -Important: Please kill the simulation once done before closing. 
*
* Final UML design:
*
* Discussion of composite factory pattern:
* 
* The composite factory pattern was implemented in the simulation to handle the creation of IEntity instances. This currently includes
* Drones, Customers, and Packages but more IEntity's are planned to be implemented later with things like trucks. The composite factory
* pattern allows for a more streamlined creation process for the IEntity's. It allows for easy additions to be made to the code like the trucks.
* This is because it allows us to create another factory class that will handle the creation for that new object, rather than continuing to add onto
* an long undesired switch or if statement. A downside to this form of implementation is it can makes the design overly general. If it was desired to 
* add something that did not fit the IEntity type, there may be issues or take longer to smoothly implement.
*
* Discussion of concrete vs. abstract vs. composite:
*
* The concrete factory pattern is useful when there will not be other objects to create later on. For example in the simulation if only drones, packages and customers
* were to be implemented then concrete would be a fine choice. However, because trucks and other IEntity's are planned for the future this factory pattern 
* was avoided. The concrete method also appears as the most staightforward and intuitive of the factories. There is simply one factory doing all the work
* to create all types of the factory. In the example UML for this implementation within this project there would be one IEntityFactory that creates Drones,
* Customers and Packages. 
* \image html /ConcreteFctory.png "Concrete Factory Pattern" width = 900 cm
* 
* An abstract factory pattern pushing creation of the entities to subclasses. This can create a facade for creation code that is not necessary to see in 
* the client code. Abstract factory patterns suffer from the same disadvantage as composite. It is difficult to extend abstract factories to support
* new additions to the code. Here now in the abstract example we can see that there are three factories for creating Drones, Customers and Packages.
* This allows for easier addition of trucks but still not as easy as it is with the composite factory. This is because we still would need to have
* an if statement to determine which factory to call based on the type. However in the composite method this is not necessary.
* \image html /AbstractFactory.png "Abstract Factory Pattern" width = 900 cm
*
* Composite factories utilize inheritance to create the factories in the composite class and pushes the instantiation of the class to the specific 
* subclass factory. This allows for decreased coupling between the code as classes are separated but only connected through the composite factory class.
* Again, this would create issues when refactoring code to include something that does not fall within the generalized type specified for the factory pattern.
* For example in our factory pattern if we wanted to add a truck it would be easy because it fits the IEntity descripton. But if we wanted to add a drone controller
* or air traffic controller it would be difficult. These wouldn't be delivering or moving but instead a scheduling type of interaction would occur. Implementing
* something like this is not as clear and obvious as it would be for a truck.
* \image html /CompositeFactoryUML.png "Composite Factory Pattern" width = 900 cm
*
* @author Conor Brown, brow4339
*/