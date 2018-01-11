var cmakeConfig = ""
	+ '\n'
	+ 'if (CMAKE_VERSION VERSION_LESS 2.8.3)\n'
	+ '    message(FATAL_ERROR "@TITLE@ requires at least CMake version 2.8.3")\n'
	+ 'endif()\n'
	+ '\n'
	+ 'get_filename_component(_@TARGET_NAMESPACE@_@TARGET_NAME@_install_prefix "@INSTALL_ROOT@" ABSOLUTE)\n'
	+ '\n'
	+ '# For backwards compatibility only. Use @TARGET_NAME@_VERSION instead.\n'
	+ 'set(@TARGET_NAME@_VERSION_STRING "@VERSION@")\n'
	+ '\n'
	+ 'set(@TARGET_NAME@_LIBRARIES @TARGET_NAMESPACE@::@TARGET_NAME@)\n'
	+ '\n'
	+ 'macro(_@TARGET_NAMESPACE@_@TARGET_NAME@_check_file_exists file)\n'
	+ '    if(NOT EXISTS "${file}" )\n'
	+ '        message(FATAL_ERROR "The imported target \\"@TARGET_NAMESPACE@::@TARGET_NAME@\\" references the file\n'
	+ '   \\"${file}\\"\n'
	+ 'but this file does not exist.  Possible reasons include:\n'
	+ '* The file was deleted, renamed, or moved to another location.\n'
	+ '* An install or uninstall procedure did not complete successfully.\n'
	+ '* The installation package was faulty and contained\n'
	+ '   \\"${CMAKE_CURRENT_LIST_FILE}\\"\n'
	+ 'but not all the files it references.\n'
	+ '")\n'
	+ '    endif()\n'
	+ 'endmacro()\n'
	+ '\n'
	+ 'macro(_populate_target_properties Configuration LIB_LOCATION IMPLIB_LOCATION)\n'
	+ '    set_property(TARGET @TARGET_NAMESPACE@::@TARGET_NAME@ APPEND PROPERTY IMPORTED_CONFIGURATIONS ${Configuration})\n'
	+ '\n'
	+ '    set(imported_location "${_@TARGET_NAMESPACE@_@TARGET_NAME@_install_prefix}/@LIB_DIR@")\n'
	+ '    _@TARGET_NAMESPACE@_@TARGET_NAME@_check_file_exists(${imported_location})\n'
	+ '    set_target_properties(@TARGET_NAMESPACE@::@TARGET_NAME@ PROPERTIES\n'
	+ '        "INTERFACE_LINK_LIBRARIES" "${_@TARGET_NAME@_LIB_DEPENDENCIES}"\n'
	+ '        "IMPORTED_LOCATION_${Configuration}" ${imported_location}\n'
	+ '        "IMPORTED_SONAME_${Configuration}" "@SONAME@"\n'
	+ '        # For backward compatibility with CMake < 2.8.12\n'
	+ '        "IMPORTED_LINK_INTERFACE_LIBRARIES_${Configuration}" "${_@TARGET_NAME@_LIB_DEPENDENCIES}"\n'
	+ '    )\n'
	+ 'endmacro()\n'
	+ '\n'
	+ 'include(CMakeFindDependencyMacro)\n'
	+ '@FIND_DEPENDENCIES@\n'
	+ '\n'
	+ 'if (NOT TARGET @TARGET_NAMESPACE@::@TARGET_NAME@)\n'
	+ '    set(_@TARGET_NAME@_OWN_INCLUDE_DIRS "${_@TARGET_NAMESPACE@_@TARGET_NAME@_install_prefix}/@ROOT_INCLUDE_DIR@" "${_@TARGET_NAMESPACE@_@TARGET_NAME@_install_prefix}/@INCLUDE_DIR@")\n'
	+ '    set(@TARGET_NAME@_PRIVATE_INCLUDE_DIRS\n'
	+ '        "${_@TARGET_NAMESPACE@_@TARGET_NAME@_install_prefix}/@INCLUDE_DIR@/@VERSION@"\n'
	+ '        "${_@TARGET_NAMESPACE@_@TARGET_NAME@_install_prefix}/@INCLUDE_DIR@/@VERSION@/@TARGET_NAME@")\n'
	+ '\n'
	+ '    foreach(_dir ${_@TARGET_NAME@_OWN_INCLUDE_DIRS})\n'
	+ '        _@TARGET_NAMESPACE@_@TARGET_NAME@_check_file_exists(${_dir})\n'
	+ '    endforeach()\n'
	+ '\n'
	+ '    # Only check existence of private includes if the Private component is\n'
	+ '    # specified.\n'
	+ '    list(FIND @TARGET_NAME@_FIND_COMPONENTS Private _check_private)\n'
	+ '    if (NOT _check_private STREQUAL -1)\n'
	+ '        foreach(_dir ${@TARGET_NAME@_PRIVATE_INCLUDE_DIRS})\n'
	+ '            _@TARGET_NAMESPACE@_@TARGET_NAME@_check_file_exists(${_dir})\n'
	+ '        endforeach()\n'
	+ '    endif()\n'
	+ '\n'
	+ '    set(@TARGET_NAME@_INCLUDE_DIRS ${_@TARGET_NAME@_OWN_INCLUDE_DIRS})\n'
	+ '    set(@TARGET_NAME@_OWN_PRIVATE_INCLUDE_DIRS ${@TARGET_NAME@_PRIVATE_INCLUDE_DIRS})\n'
	+ '    set(@TARGET_NAME@_DEFINITIONS "")\n'
	+ '    set(@TARGET_NAME@_COMPILE_DEFINITIONS "")\n'
	+ '    set(@TARGET_NAME@_EXECUTABLE_COMPILE_FLAGS "")\n'
	+ '\n'
	+ '    add_library(@TARGET_NAMESPACE@::@TARGET_NAME@ SHARED IMPORTED)\n'
	+ '\n'
	+ '    set_property(TARGET @TARGET_NAMESPACE@::@TARGET_NAME@ PROPERTY\n'
	+ '      INTERFACE_INCLUDE_DIRECTORIES ${_@TARGET_NAME@_OWN_INCLUDE_DIRS})\n'
	+ '    set_property(TARGET @TARGET_NAMESPACE@::@TARGET_NAME@ PROPERTY\n'
	+ '      INTERFACE_LINK_LIBRARIES "@LINK_LIBRARIES@")\n'
	+ '\n'
	+ '    set(_@TARGET_NAME@_PRIVATE_DIRS_EXIST TRUE)\n'
	+ '    foreach (_@TARGET_NAME@_PRIVATE_DIR ${@TARGET_NAME@_OWN_PRIVATE_INCLUDE_DIRS})\n'
	+ '        if (NOT EXISTS ${_@TARGET_NAME@_PRIVATE_DIR})\n'
	+ '            set(_@TARGET_NAME@_PRIVATE_DIRS_EXIST FALSE)\n'
	+ '        endif()\n'
	+ '    endforeach()\n'
	+ '\n'
	+ '    if (_@TARGET_NAME@_PRIVATE_DIRS_EXIST)\n'
	+ '        add_library(@TARGET_NAMESPACE@::@TARGET_NAME@Private INTERFACE IMPORTED)\n'
	+ '        set_property(TARGET @TARGET_NAMESPACE@::@TARGET_NAME@Private PROPERTY\n'
	+ '            INTERFACE_INCLUDE_DIRECTORIES ${@TARGET_NAME@_OWN_PRIVATE_INCLUDE_DIRS}\n'
	+ '        )\n'
	+ '        set(_@TARGET_NAME@_PRIVATEDEPS)\n'
	+ '        foreach(dep ${_@TARGET_NAME@_LIB_DEPENDENCIES})\n'
	+ '            if (TARGET ${dep}Private)\n'
	+ '                list(APPEND _@TARGET_NAME@_PRIVATEDEPS ${dep}Private)\n'
	+ '            endif()\n'
	+ '        endforeach()\n'
	+ '        set_property(TARGET @TARGET_NAMESPACE@::@TARGET_NAME@Private PROPERTY\n'
	+ '            INTERFACE_LINK_LIBRARIES @TARGET_NAMESPACE@::@TARGET_NAME@ ${_@TARGET_NAME@_PRIVATEDEPS}\n'
	+ '        )\n'
	+ '    endif()\n'
	+ '\n'
	+ '    _populate_target_properties(DEBUG "@SONAME@" "" )\n'
	+ '\n'
	+ '    _@TARGET_NAMESPACE@_@TARGET_NAME@_check_file_exists("${CMAKE_CURRENT_LIST_DIR}/@TARGET_NAME@ConfigVersion.cmake")\n'
	+ 'endif()\n'
;