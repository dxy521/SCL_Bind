// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef SCL_BASE_TYPES_HXX
#define SCL_BASE_TYPES_HXX

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 3030000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< char, ncname, type > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::auto_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
namespace SCL
{
  class tBaseElement;
  class tUnNaming;
  class tNaming;
  class tIDNaming;
  class tAnyContentFromOtherNamespace;
  class tText;
  class tPrivate;
  class tHeader;
  class tHitem;
  class tVal;
  class tValueWithUnit;
  class tVoltage;
  class tBitRateInMbPerSec;
  class tDurationInSec;
  class tDurationInMilliSec;
  class History;
  class nameStructure;
}


#include <memory>    // std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "SCL_Enums.hxx"

namespace SCL
{
  class tBaseElement: public ::xml_schema::type
  {
    public:
    // Text
    // 
    typedef ::SCL::tText Text_type;
    typedef ::xsd::cxx::tree::optional< Text_type > Text_optional;
    typedef ::xsd::cxx::tree::traits< Text_type, char > Text_traits;

    const Text_optional&
    Text () const;

    Text_optional&
    Text ();

    void
    Text (const Text_type& x);

    void
    Text (const Text_optional& x);

    void
    Text (::std::auto_ptr< Text_type > p);

    // Private
    // 
    typedef ::SCL::tPrivate Private_type;
    typedef ::xsd::cxx::tree::sequence< Private_type > Private_sequence;
    typedef Private_sequence::iterator Private_iterator;
    typedef Private_sequence::const_iterator Private_const_iterator;
    typedef ::xsd::cxx::tree::traits< Private_type, char > Private_traits;

    const Private_sequence&
    Private () const;

    Private_sequence&
    Private ();

    void
    Private (const Private_sequence& s);

    // Constructors.
    //
    tBaseElement ();

    tBaseElement (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    tBaseElement (const tBaseElement& x,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    virtual tBaseElement*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tBaseElement ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    Text_optional Text_;
    Private_sequence Private_;
  };

  class tUnNaming: public ::SCL::tBaseElement
  {
    public:
    // desc
    // 
    typedef ::xml_schema::normalized_string desc_type;
    typedef ::xsd::cxx::tree::optional< desc_type > desc_optional;
    typedef ::xsd::cxx::tree::traits< desc_type, char > desc_traits;

    const desc_optional&
    desc () const;

    desc_optional&
    desc ();

    void
    desc (const desc_type& x);

    void
    desc (const desc_optional& x);

    void
    desc (::std::auto_ptr< desc_type > p);

    // Constructors.
    //
    tUnNaming ();

    tUnNaming (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    tUnNaming (const tUnNaming& x,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    virtual tUnNaming*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tUnNaming ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    desc_optional desc_;
  };

  class tNaming: public ::SCL::tBaseElement
  {
    public:
    // name
    // 
    typedef ::SCL::tName name_type;
    typedef ::xsd::cxx::tree::traits< name_type, char > name_traits;

    const name_type&
    name () const;

    name_type&
    name ();

    void
    name (const name_type& x);

    void
    name (::std::auto_ptr< name_type > p);

    // desc
    // 
    typedef ::xml_schema::normalized_string desc_type;
    typedef ::xsd::cxx::tree::optional< desc_type > desc_optional;
    typedef ::xsd::cxx::tree::traits< desc_type, char > desc_traits;

    const desc_optional&
    desc () const;

    desc_optional&
    desc ();

    void
    desc (const desc_type& x);

    void
    desc (const desc_optional& x);

    void
    desc (::std::auto_ptr< desc_type > p);

    // Constructors.
    //
    tNaming (const name_type&);

    tNaming (const ::xercesc::DOMElement& e,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    tNaming (const tNaming& x,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    virtual tNaming*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tNaming ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< name_type > name_;
    desc_optional desc_;
  };

  class tIDNaming: public ::SCL::tBaseElement
  {
    public:
    // id
    // 
    typedef ::SCL::tName id_type;
    typedef ::xsd::cxx::tree::traits< id_type, char > id_traits;

    const id_type&
    id () const;

    id_type&
    id ();

    void
    id (const id_type& x);

    void
    id (::std::auto_ptr< id_type > p);

    // desc
    // 
    typedef ::xml_schema::normalized_string desc_type;
    typedef ::xsd::cxx::tree::optional< desc_type > desc_optional;
    typedef ::xsd::cxx::tree::traits< desc_type, char > desc_traits;

    const desc_optional&
    desc () const;

    desc_optional&
    desc ();

    void
    desc (const desc_type& x);

    void
    desc (const desc_optional& x);

    void
    desc (::std::auto_ptr< desc_type > p);

    // Constructors.
    //
    tIDNaming (const id_type&);

    tIDNaming (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    tIDNaming (const tIDNaming& x,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    virtual tIDNaming*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tIDNaming ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< id_type > id_;
    desc_optional desc_;
  };

  class tAnyContentFromOtherNamespace: public ::xml_schema::type
  {
    public:
    // Constructors.
    //
    tAnyContentFromOtherNamespace ();

    tAnyContentFromOtherNamespace (const ::xercesc::DOMElement& e,
                                   ::xml_schema::flags f = 0,
                                   ::xml_schema::container* c = 0);

    tAnyContentFromOtherNamespace (const tAnyContentFromOtherNamespace& x,
                                   ::xml_schema::flags f = 0,
                                   ::xml_schema::container* c = 0);

    virtual tAnyContentFromOtherNamespace*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tAnyContentFromOtherNamespace ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
  };

  class tText: public ::SCL::tAnyContentFromOtherNamespace
  {
    public:
    // source
    // 
    typedef ::xml_schema::uri source_type;
    typedef ::xsd::cxx::tree::optional< source_type > source_optional;
    typedef ::xsd::cxx::tree::traits< source_type, char > source_traits;

    const source_optional&
    source () const;

    source_optional&
    source ();

    void
    source (const source_type& x);

    void
    source (const source_optional& x);

    void
    source (::std::auto_ptr< source_type > p);

    // Constructors.
    //
    tText ();

    tText (const ::xercesc::DOMElement& e,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    tText (const tText& x,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    virtual tText*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tText ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    source_optional source_;
  };

  class tPrivate: public ::SCL::tAnyContentFromOtherNamespace
  {
    public:
    // type
    // 
    typedef ::xml_schema::normalized_string type_type;
    typedef ::xsd::cxx::tree::optional< type_type > type_optional;
    typedef ::xsd::cxx::tree::traits< type_type, char > type_traits;

    const type_optional&
    type () const;

    type_optional&
    type ();

    void
    type (const type_type& x);

    void
    type (const type_optional& x);

    void
    type (::std::auto_ptr< type_type > p);

    // source
    // 
    typedef ::xml_schema::uri source_type;
    typedef ::xsd::cxx::tree::optional< source_type > source_optional;
    typedef ::xsd::cxx::tree::traits< source_type, char > source_traits;

    const source_optional&
    source () const;

    source_optional&
    source ();

    void
    source (const source_type& x);

    void
    source (const source_optional& x);

    void
    source (::std::auto_ptr< source_type > p);

    // Constructors.
    //
    tPrivate ();

    tPrivate (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    tPrivate (const tPrivate& x,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    virtual tPrivate*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tPrivate ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    type_optional type_;
    source_optional source_;
  };

  class tHeader: public ::xml_schema::type
  {
    public:
    // Text
    // 
    typedef ::SCL::tText Text_type;
    typedef ::xsd::cxx::tree::optional< Text_type > Text_optional;
    typedef ::xsd::cxx::tree::traits< Text_type, char > Text_traits;

    const Text_optional&
    Text () const;

    Text_optional&
    Text ();

    void
    Text (const Text_type& x);

    void
    Text (const Text_optional& x);

    void
    Text (::std::auto_ptr< Text_type > p);

    // History
    // 
    typedef ::SCL::History History_type;
    typedef ::xsd::cxx::tree::optional< History_type > History_optional;
    typedef ::xsd::cxx::tree::traits< History_type, char > History_traits;

    const History_optional&
    History () const;

    History_optional&
    History ();

    void
    History (const History_type& x);

    void
    History (const History_optional& x);

    void
    History (::std::auto_ptr< History_type > p);

    // id
    // 
    typedef ::xml_schema::normalized_string id_type;
    typedef ::xsd::cxx::tree::traits< id_type, char > id_traits;

    const id_type&
    id () const;

    id_type&
    id ();

    void
    id (const id_type& x);

    void
    id (::std::auto_ptr< id_type > p);

    // version
    // 
    typedef ::xml_schema::normalized_string version_type;
    typedef ::xsd::cxx::tree::optional< version_type > version_optional;
    typedef ::xsd::cxx::tree::traits< version_type, char > version_traits;

    const version_optional&
    version () const;

    version_optional&
    version ();

    void
    version (const version_type& x);

    void
    version (const version_optional& x);

    void
    version (::std::auto_ptr< version_type > p);

    // revision
    // 
    typedef ::xml_schema::normalized_string revision_type;
    typedef ::xsd::cxx::tree::traits< revision_type, char > revision_traits;

    const revision_type&
    revision () const;

    revision_type&
    revision ();

    void
    revision (const revision_type& x);

    void
    revision (::std::auto_ptr< revision_type > p);

    static const revision_type&
    revision_default_value ();

    // toolID
    // 
    typedef ::xml_schema::normalized_string toolID_type;
    typedef ::xsd::cxx::tree::optional< toolID_type > toolID_optional;
    typedef ::xsd::cxx::tree::traits< toolID_type, char > toolID_traits;

    const toolID_optional&
    toolID () const;

    toolID_optional&
    toolID ();

    void
    toolID (const toolID_type& x);

    void
    toolID (const toolID_optional& x);

    void
    toolID (::std::auto_ptr< toolID_type > p);

    // nameStructure
    // 
    typedef ::SCL::nameStructure nameStructure_type;
    typedef ::xsd::cxx::tree::traits< nameStructure_type, char > nameStructure_traits;

    const nameStructure_type&
    nameStructure () const;

    nameStructure_type&
    nameStructure ();

    void
    nameStructure (const nameStructure_type& x);

    void
    nameStructure (::std::auto_ptr< nameStructure_type > p);

    static const nameStructure_type&
    nameStructure_default_value ();

    // Constructors.
    //
    tHeader (const id_type&);

    tHeader (const ::xercesc::DOMElement& e,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    tHeader (const tHeader& x,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    virtual tHeader*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tHeader ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    Text_optional Text_;
    History_optional History_;
    ::xsd::cxx::tree::one< id_type > id_;
    version_optional version_;
    ::xsd::cxx::tree::one< revision_type > revision_;
    static const revision_type revision_default_value_;
    toolID_optional toolID_;
    ::xsd::cxx::tree::one< nameStructure_type > nameStructure_;
    static const nameStructure_type nameStructure_default_value_;
  };

  class tHitem: public ::SCL::tAnyContentFromOtherNamespace
  {
    public:
    // version
    // 
    typedef ::xml_schema::normalized_string version_type;
    typedef ::xsd::cxx::tree::traits< version_type, char > version_traits;

    const version_type&
    version () const;

    version_type&
    version ();

    void
    version (const version_type& x);

    void
    version (::std::auto_ptr< version_type > p);

    // revision
    // 
    typedef ::xml_schema::normalized_string revision_type;
    typedef ::xsd::cxx::tree::traits< revision_type, char > revision_traits;

    const revision_type&
    revision () const;

    revision_type&
    revision ();

    void
    revision (const revision_type& x);

    void
    revision (::std::auto_ptr< revision_type > p);

    // when
    // 
    typedef ::xml_schema::normalized_string when_type;
    typedef ::xsd::cxx::tree::traits< when_type, char > when_traits;

    const when_type&
    when () const;

    when_type&
    when ();

    void
    when (const when_type& x);

    void
    when (::std::auto_ptr< when_type > p);

    // who
    // 
    typedef ::xml_schema::normalized_string who_type;
    typedef ::xsd::cxx::tree::optional< who_type > who_optional;
    typedef ::xsd::cxx::tree::traits< who_type, char > who_traits;

    const who_optional&
    who () const;

    who_optional&
    who ();

    void
    who (const who_type& x);

    void
    who (const who_optional& x);

    void
    who (::std::auto_ptr< who_type > p);

    // what
    // 
    typedef ::xml_schema::normalized_string what_type;
    typedef ::xsd::cxx::tree::optional< what_type > what_optional;
    typedef ::xsd::cxx::tree::traits< what_type, char > what_traits;

    const what_optional&
    what () const;

    what_optional&
    what ();

    void
    what (const what_type& x);

    void
    what (const what_optional& x);

    void
    what (::std::auto_ptr< what_type > p);

    // why
    // 
    typedef ::xml_schema::normalized_string why_type;
    typedef ::xsd::cxx::tree::optional< why_type > why_optional;
    typedef ::xsd::cxx::tree::traits< why_type, char > why_traits;

    const why_optional&
    why () const;

    why_optional&
    why ();

    void
    why (const why_type& x);

    void
    why (const why_optional& x);

    void
    why (::std::auto_ptr< why_type > p);

    // Constructors.
    //
    tHitem (const version_type&,
            const revision_type&,
            const when_type&);

    tHitem (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

    tHitem (const tHitem& x,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

    virtual tHitem*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tHitem ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< version_type > version_;
    ::xsd::cxx::tree::one< revision_type > revision_;
    ::xsd::cxx::tree::one< when_type > when_;
    who_optional who_;
    what_optional what_;
    why_optional why_;
  };

  class tVal: public ::xml_schema::normalized_string
  {
    public:
    // sGroup
    // 
    typedef ::xml_schema::unsigned_int sGroup_type;
    typedef ::xsd::cxx::tree::optional< sGroup_type > sGroup_optional;
    typedef ::xsd::cxx::tree::traits< sGroup_type, char > sGroup_traits;

    const sGroup_optional&
    sGroup () const;

    sGroup_optional&
    sGroup ();

    void
    sGroup (const sGroup_type& x);

    void
    sGroup (const sGroup_optional& x);

    // Constructors.
    //
    tVal ();

    tVal (const char*);

    tVal (const ::std::string&);

    tVal (const ::xml_schema::normalized_string&);

    tVal (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    tVal (const tVal& x,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    virtual tVal*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tVal ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    sGroup_optional sGroup_;
  };

  class tValueWithUnit: public ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal >
  {
    public:
    // unit
    // 
    typedef ::SCL::tSIUnitEnum unit_type;
    typedef ::xsd::cxx::tree::traits< unit_type, char > unit_traits;

    const unit_type&
    unit () const;

    unit_type&
    unit ();

    void
    unit (const unit_type& x);

    void
    unit (::std::auto_ptr< unit_type > p);

    // multiplier
    // 
    typedef ::SCL::tUnitMultiplierEnum multiplier_type;
    typedef ::xsd::cxx::tree::traits< multiplier_type, char > multiplier_traits;

    const multiplier_type&
    multiplier () const;

    multiplier_type&
    multiplier ();

    void
    multiplier (const multiplier_type& x);

    void
    multiplier (::std::auto_ptr< multiplier_type > p);

    static const multiplier_type&
    multiplier_default_value ();

    // Constructors.
    //
    tValueWithUnit (const ::xml_schema::decimal&,
                    const unit_type&);

    tValueWithUnit (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

    tValueWithUnit (const tValueWithUnit& x,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

    virtual tValueWithUnit*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tValueWithUnit ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< unit_type > unit_;
    ::xsd::cxx::tree::one< multiplier_type > multiplier_;
    static const multiplier_type multiplier_default_value_;
  };

  class tVoltage: public ::SCL::tValueWithUnit
  {
    public:
    // Constructors.
    //
    tVoltage (const ::xml_schema::decimal&,
              const unit_type&);

    tVoltage (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    tVoltage (const tVoltage& x,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    virtual tVoltage*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tVoltage ();
  };

  class tBitRateInMbPerSec: public ::SCL::tValueWithUnit
  {
    public:
    // Constructors.
    //
    tBitRateInMbPerSec (const ::xml_schema::decimal&,
                        const unit_type&);

    tBitRateInMbPerSec (const ::xercesc::DOMElement& e,
                        ::xml_schema::flags f = 0,
                        ::xml_schema::container* c = 0);

    tBitRateInMbPerSec (const tBitRateInMbPerSec& x,
                        ::xml_schema::flags f = 0,
                        ::xml_schema::container* c = 0);

    virtual tBitRateInMbPerSec*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tBitRateInMbPerSec ();
  };

  class tDurationInSec: public ::SCL::tValueWithUnit
  {
    public:
    // Constructors.
    //
    tDurationInSec (const ::xml_schema::decimal&,
                    const unit_type&);

    tDurationInSec (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

    tDurationInSec (const tDurationInSec& x,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

    virtual tDurationInSec*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tDurationInSec ();
  };

  class tDurationInMilliSec: public ::SCL::tValueWithUnit
  {
    public:
    // Constructors.
    //
    tDurationInMilliSec (const ::xml_schema::decimal&,
                         const unit_type&);

    tDurationInMilliSec (const ::xercesc::DOMElement& e,
                         ::xml_schema::flags f = 0,
                         ::xml_schema::container* c = 0);

    tDurationInMilliSec (const tDurationInMilliSec& x,
                         ::xml_schema::flags f = 0,
                         ::xml_schema::container* c = 0);

    virtual tDurationInMilliSec*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tDurationInMilliSec ();
  };

  class History: public ::xml_schema::type
  {
    public:
    // Hitem
    // 
    typedef ::SCL::tHitem Hitem_type;
    typedef ::xsd::cxx::tree::sequence< Hitem_type > Hitem_sequence;
    typedef Hitem_sequence::iterator Hitem_iterator;
    typedef Hitem_sequence::const_iterator Hitem_const_iterator;
    typedef ::xsd::cxx::tree::traits< Hitem_type, char > Hitem_traits;

    const Hitem_sequence&
    Hitem () const;

    Hitem_sequence&
    Hitem ();

    void
    Hitem (const Hitem_sequence& s);

    // Constructors.
    //
    History ();

    History (const ::xercesc::DOMElement& e,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    History (const History& x,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    virtual History*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~History ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    Hitem_sequence Hitem_;
  };

  class nameStructure: public ::xml_schema::name
  {
    public:
    enum value
    {
      IEDName
    };

    nameStructure (value v);

    nameStructure (const char* v);

    nameStructure (const ::std::string& v);

    nameStructure (const ::xml_schema::name& v);

    nameStructure (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

    nameStructure (const ::xercesc::DOMAttr& a,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

    nameStructure (const ::std::string& s,
                   const ::xercesc::DOMElement* e,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

    nameStructure (const nameStructure& x,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

    virtual nameStructure*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    nameStructure&
    operator= (value v);

    virtual
    operator value () const
    {
      return _xsd_nameStructure_convert ();
    }

    protected:
    value
    _xsd_nameStructure_convert () const;

    public:
    static const char* const _xsd_nameStructure_literals_[1];
    static const value _xsd_nameStructure_indexes_[1];
  };
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace SCL
{
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SCL_BASE_TYPES_HXX
