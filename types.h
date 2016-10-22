#ifndef _JNIPP_TYPES_H_
#define _JNIPP_TYPES_H_ 1

// Standard Dependencies
#include <exception>
#include <string>

// Forward Declarations
struct JNIEnv_;
struct _jmethodID;
struct _jfieldID;
class  _jobject;
class  _jclass;

namespace jni
{
	// JNI Base Types
	typedef JNIEnv_		JNIEnv;
	typedef _jobject*	jobject;
	typedef _jclass*	jclass;

	/**
		You can save a method via its handle using Class::getMethod() if it is
		going to be used often. This saves Object::call() from having to locate
		the method each time by name.

		Note that these handles are global and do not need to be deleted.
	 */
	typedef _jmethodID* method_t;

	/**
		You can save a field via its handle using Class::getField() if it is
		going to be used often. This saves Object::set() and Object::get() from
		having to locate the field each time by name.

		Note that these handles are global and do not need to be deleted.
	 */
	typedef _jfieldID* field_t;

	/**
		The String type used. Change it to your own string base class, but it
		must be able to be concatenated using `operator+` and have a `c_str()`
		member function that casts to a null-terminated `const char*`.
	*/
	typedef std::string String;

	/**
		Base class for thrown Exceptions. Change it to whatever your chosen
		Exception class, as long as that class has a `const char*` constructor.
	*/
	typedef std::exception Exception;
}

#endif // _JNIPP_TYPES_H_
