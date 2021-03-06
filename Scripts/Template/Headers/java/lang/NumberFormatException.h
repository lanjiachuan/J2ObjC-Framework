//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NumberFormatException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangNumberFormatException")
#ifdef RESTRICT_JavaLangNumberFormatException
#define INCLUDE_ALL_JavaLangNumberFormatException 0
#else
#define INCLUDE_ALL_JavaLangNumberFormatException 1
#endif
#undef RESTRICT_JavaLangNumberFormatException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangNumberFormatException_) && (INCLUDE_ALL_JavaLangNumberFormatException || defined(INCLUDE_JavaLangNumberFormatException))
#define JavaLangNumberFormatException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "../../java/lang/IllegalArgumentException.h"

/*!
 @brief Thrown when an invalid value is passed to a string-to-number conversion
 method.
 */
@interface JavaLangNumberFormatException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs a new <code>NumberFormatException</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>NumberFormatException</code> with the current stack
 trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNumberFormatException)

FOUNDATION_EXPORT void JavaLangNumberFormatException_init(JavaLangNumberFormatException *self);

FOUNDATION_EXPORT JavaLangNumberFormatException *new_JavaLangNumberFormatException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNumberFormatException *create_JavaLangNumberFormatException_init();

FOUNDATION_EXPORT void JavaLangNumberFormatException_initWithNSString_(JavaLangNumberFormatException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangNumberFormatException *new_JavaLangNumberFormatException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNumberFormatException *create_JavaLangNumberFormatException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNumberFormatException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangNumberFormatException")
