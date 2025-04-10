#include <iostream>
#include <memory>
#include <string>


struct Artist{
     private:
          std::string name;
          uint number_of_listens;
     public:

     Artist(std::string name, uint number_of_listens) : name(name), number_of_listens(number_of_listens)
     {
          //this is an exmaple of a initilizer list constructor
     }

     std::string get_name()
     {    
          return name;
     }

     uint get_number_of_listens()
     {
          return number_of_listens;
     }

};

namespace modern{
     //notice how memory management is handled by unique_ptr totally
     struct Song{
          std::unique_ptr<uint> times_played;
          std::unique_ptr<char[20]> id;
          std::unique_ptr<char[]> title;
          std::unique_ptr<Artist> artist; 
     };

};