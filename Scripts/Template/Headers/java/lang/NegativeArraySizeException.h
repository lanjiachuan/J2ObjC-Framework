//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NegativeArraySizeException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangNegativeArraySizeException")
#ifdef RESTRICT_JavaLangNegativeArraySizeException
#define INCLUDE_ALL_JavaLangNegativeArraySizeException 0
#else
#define INCLUDE_ALL_JavaLangNegativeArraySizeException 1
#endif
#undef RESTRICT_JavaLangNegativeArraySizeException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangNegativeArraySizeException_) && (INCLUDE_ALL_JavaLangNegativeArraySizeException || defined(INCLUDE_JavaLangNegativeArraySizeException))
#define JavaLangNegativeArraySizeException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../java/lang/RuntimeException.h"

/*!
 @brief Thrown when an attempt is made to create an array with a size of less than
 zero.
 */
@interface JavaLangNegativeArraySizeException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>NegativeArraySizeException</code> that includes the
 current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>NegativeArraySizeException</code> with the current
 stack trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNegativeArraySizeException)

FOUNDATION_EXPORT void JavaLangNegativeArraySizeException_init(JavaLangNegativeArraySizeException *self);

FOUNDATION_EXPORT JavaLangNegativeArraySizeException *new_JavaLangNegativeArraySizeException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNegativeArraySizeException *create_JavaLangNegativeArraySizeException_init();

FOUNDATION_EXPORT void JavaLangNegativeArraySizeException_initWithNSString_(JavaLangNegativeArraySizeException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangNegativeArraySizeException *new_JavaLangNegativeArraySizeException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNegativeArraySizeException *create_JavaLangNegativeArraySizeException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNegativeArraySizeException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangNegativeArraySizeException")
