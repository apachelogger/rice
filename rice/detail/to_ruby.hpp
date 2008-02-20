#ifndef Rice__detail__to_ruby__hpp_
#define Rice__detail__to_ruby__hpp_

namespace Rice
{
  namespace detail
  {
    template<typename T>
    struct to_ruby_
    {
      static Rice::Object convert(T const & x);
    };

    template<typename T>
    struct to_ruby_<T *>
    {
      typedef T * Retval_T;

      static T * convert(Rice::Object x);
    };

    template<typename T>
    struct to_ruby_<T const *>
    {
      typedef T const * Retval_T;

      static T const * convert(Rice::Object x);
    };

    template<typename T>
    struct to_ruby_<T &>
    {
      typedef T & Retval_T;

      static T & convert(Rice::Object x);
    };
  } // detail
} // Rice

#endif // Rice__detail__to_ruby__hpp_
