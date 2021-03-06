//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/auth/DestroyFailedException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSecurityAuthDestroyFailedException")
#ifdef RESTRICT_JavaxSecurityAuthDestroyFailedException
#define INCLUDE_ALL_JavaxSecurityAuthDestroyFailedException 0
#else
#define INCLUDE_ALL_JavaxSecurityAuthDestroyFailedException 1
#endif
#undef RESTRICT_JavaxSecurityAuthDestroyFailedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxSecurityAuthDestroyFailedException_) && (INCLUDE_ALL_JavaxSecurityAuthDestroyFailedException || defined(INCLUDE_JavaxSecurityAuthDestroyFailedException))
#define JavaxSecurityAuthDestroyFailedException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../../java/lang/Exception.h"

/*!
 @brief Signals that the <code>Destroyable.destroy()</code> method failed.
 */
@interface JavaxSecurityAuthDestroyFailedException : JavaLangException

#pragma mark Public

/*!
 @brief Creates an exception of type <code>DestroyFailedException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates an exception of type <code>DestroyFailedException</code>.
 @param message
 A detail message that describes the reason for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityAuthDestroyFailedException)

FOUNDATION_EXPORT void JavaxSecurityAuthDestroyFailedException_init(JavaxSecurityAuthDestroyFailedException *self);

FOUNDATION_EXPORT JavaxSecurityAuthDestroyFailedException *new_JavaxSecurityAuthDestroyFailedException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityAuthDestroyFailedException *create_JavaxSecurityAuthDestroyFailedException_init();

FOUNDATION_EXPORT void JavaxSecurityAuthDestroyFailedException_initWithNSString_(JavaxSecurityAuthDestroyFailedException *self, NSString *message);

FOUNDATION_EXPORT JavaxSecurityAuthDestroyFailedException *new_JavaxSecurityAuthDestroyFailedException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityAuthDestroyFailedException *create_JavaxSecurityAuthDestroyFailedException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityAuthDestroyFailedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityAuthDestroyFailedException")
