#ifndef SINGLETON_H
#define SINGLETON_H

class Logger 
{
public:
    static Logger& Instance();
private:
    Logger& operator= (const Logger&){}
    Logger (const Logger&){}

    static Logger m_instance;
    Logger();
    ~Logger();
};
#endif
