#include <iostream>
#include "singleton.h"

using namespace std;

Logger Logger::m_instance=Logger();

Logger::Logger()
{
    cout<<"Creation"<<endl;
}

Logger::~Logger()
{
    cout<<"Destruction"<<endl;
}

Logger& Logger::Instance()
{
    return m_instance;
}

int main(void)
{
    //1er appel de Instance: on alloue le pointeur Logger::m_instance
    Logger& ptr1=Logger::Instance();
    
    //2eme appel:on se contente de renvoyer le pointeur déjà allouer.
    Logger& ptr2=Logger::Instance();
  
    //ptr1 et ptr2 pointe sur la même adresse mémoire.
    //On voit donc qu'il ny a bien qu'un seul objet.
    cout<<&ptr1<<"|"<<&ptr2<<endl;

    return 0;
}
