// Local Dependencies
#include "../jnipp.h"

int main()
{
	jni::Vm vm("C:\\Program Files\\Java\\jre1.8.0_25\\bin\\server\\jvm.dll");

	jni::Class Integer = jni::Class("java/lang/Integer");
	jni::Object obj = Integer.newInstance(1337);

	jni::String str = obj.call<jni::String>("toString");

	return 0;
}

