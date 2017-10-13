#include "log.h"

Log::Log(ostream* out){
    _out = out;
}

void Log::WriteMsg(const string msg){
    if (_flags.IsFlag(LOG_PREFIX_TIME)){
       *_out << "Время::" << endl;
    }

    if (_flags.IsFlag(LOG_PREFIX_DATE)){
       *_out << "Дата::" << endl;
    }

    *_out << _prefix << msg << endl;
}

void Log::SetPrefix(const string prefix){
   _prefix = prefix; 
}

void Log::SetFlag(const int flag){
   _flags.SetFlag(flag); 
}

void Log::ResetFlag(const int flag){
   _flags.ResetFlag(flag); 
}
