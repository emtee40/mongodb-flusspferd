
#ifndef GUARD_MONGODB_FLUSSPFERD_CURSOR_HPP
#define GUARD_MONGODB_FLUSSPFERD_CURSOR_HPP


#include <flusspferd.hpp>
#include <boost/shared_ptr.hpp>
#include <mongo/client/dbclient.h>

namespace mongodb_flusspferd {


FLUSSPFERD_CLASS_DESCRIPTION(
    cursor,
    (constructible, false)
    (full_name, "MongoDB.Cursor")
    (constructor_name, "Cursor")
    (methods,
      ("next", bind, next)
    )
) {
public:
  cursor(flusspferd::object const &obj, boost::shared_ptr<mongo::DBClientCursor> ptr);

  ~cursor();

  flusspferd::object next();
protected:

  boost::shared_ptr<mongo::DBClientCursor> cursor_;
};

}

#endif

