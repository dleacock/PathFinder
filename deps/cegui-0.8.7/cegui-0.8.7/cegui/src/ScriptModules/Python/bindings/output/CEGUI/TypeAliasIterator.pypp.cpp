// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "TypeAliasIterator.pypp.hpp"

namespace bp = boost::python;

struct ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_greater___greater___greater___greater__wrapper : CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >, bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > > > {

    ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_greater___greater___greater___greater__wrapper(CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > > const & arg )
    : CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >( arg )
      , bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > > >(){
        // copy constructor
        
    }

    ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_greater___greater___greater___greater__wrapper( )
    : CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >( )
      , bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > > >(){
        // null constructor
    
    }

    virtual ::CEGUI::WindowFactoryManager::AliasTargetStack getCurrentValue(  ) const  {
        if( bp::override func_getCurrentValue = this->get_override( "getCurrentValue" ) )
            return func_getCurrentValue(  );
        else{
            return this->CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >::getCurrentValue(  );
        }
    }
    
    ::CEGUI::WindowFactoryManager::AliasTargetStack default_getCurrentValue(  ) const  {
        return CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >::getCurrentValue( );
    }

};

void Iterator_next(::CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >& t)
{
    t++;
}

void Iterator_previous(::CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >& t)
{
    t--;
}

void register_TypeAliasIterator_class(){

    { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >
        typedef bp::class_< ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_greater___greater___greater___greater__wrapper, bp::bases< CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > >, CEGUI::WindowFactoryManager::AliasTargetStack > > > TypeAliasIterator_exposer_t;
        TypeAliasIterator_exposer_t TypeAliasIterator_exposer = TypeAliasIterator_exposer_t( "TypeAliasIterator", bp::no_init );
        bp::scope TypeAliasIterator_scope( TypeAliasIterator_exposer );
        TypeAliasIterator_exposer.def( bp::init< >("*************************************************************************\n\
           No default construction available\n\
        *************************************************************************\n") );
        { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >::getCurrentKey
        
            typedef CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > > exported_class_t;
            typedef ::CEGUI::String ( exported_class_t::*getCurrentKey_function_type )(  ) const;
            
            TypeAliasIterator_exposer.def( 
                "getCurrentKey"
                , getCurrentKey_function_type( &::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >::getCurrentKey )
                , "*!\n\
            \n\
                Return the key for the item at the current iterator position.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >::getCurrentValue
        
            typedef CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > > exported_class_t;
            typedef ::CEGUI::WindowFactoryManager::AliasTargetStack ( exported_class_t::*getCurrentValue_function_type )(  ) const;
            typedef ::CEGUI::WindowFactoryManager::AliasTargetStack ( ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_greater___greater___greater___greater__wrapper::*default_getCurrentValue_function_type )(  ) const;
            
            TypeAliasIterator_exposer.def( 
                "getCurrentValue"
                , getCurrentValue_function_type(&::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::WindowFactoryManager::AliasTargetStack, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactoryManager::AliasTargetStack> > > >::getCurrentValue)
                , default_getCurrentValue_function_type(&ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_WindowFactoryManager_scope_AliasTargetStack_greater___greater___greater___greater__wrapper::default_getCurrentValue) );
        
        }
        TypeAliasIterator_exposer.def("next", &::Iterator_next);
        TypeAliasIterator_exposer.def("previous", &::Iterator_previous);
    }

}