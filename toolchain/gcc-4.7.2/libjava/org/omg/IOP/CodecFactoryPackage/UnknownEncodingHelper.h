
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_IOP_CodecFactoryPackage_UnknownEncodingHelper__
#define __org_omg_IOP_CodecFactoryPackage_UnknownEncodingHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace IOP
      {
        namespace CodecFactoryPackage
        {
            class UnknownEncoding;
            class UnknownEncodingHelper;
        }
      }
    }
  }
}

class org::omg::IOP::CodecFactoryPackage::UnknownEncodingHelper : public ::java::lang::Object
{

public:
  UnknownEncodingHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::IOP::CodecFactoryPackage::UnknownEncoding *);
  static ::org::omg::IOP::CodecFactoryPackage::UnknownEncoding * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static ::org::omg::IOP::CodecFactoryPackage::UnknownEncoding * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::IOP::CodecFactoryPackage::UnknownEncoding *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_IOP_CodecFactoryPackage_UnknownEncodingHelper__