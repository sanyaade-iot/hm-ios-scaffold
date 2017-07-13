// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSCoder;

SWIFT_CLASS("_TtC5HMKit11Certificate")
@interface Certificate : NSObject <NSCoding>
/// Bytes making up the certificate; <code>nil</code> by default (subclasses override this to provide a value).
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nullable certificateData;
/// Signature of the certificate; must be <em>64 bytes</em>.
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable signature;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC5HMKit17AccessCertificate")
@interface AccessCertificate : Certificate
/// Serial number of the device gaining access.
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull gainingSerial;
/// Public key of the device gaining access.
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull gainingPublicKey;
/// Serial number of the device providing access to itself.
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull providingSerial;
/// Start time of the certificate.
@property (nonatomic, readonly, copy) NSDate * _Nonnull startDate;
/// End time of the certificate.
@property (nonatomic, readonly, copy) NSDate * _Nonnull endDate;
/// If the certificate is expired by now.
@property (nonatomic, readonly) BOOL isExpired;
/// Permissions in the certificate; can be up to <em>16 bytes</em>.
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable permissions;
/// Signature of the certificate; must be <em>64 bytes</em>.
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable signature;
/// Bytes making up the certificate; without the signature.
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nullable certificateData;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


@interface AccessCertificate (SWIFT_EXTENSION(HMKit))
@end


@class DeviceCertificate;

SWIFT_CLASS("_TtC5HMKit6Device")
@interface Device : NSObject
/// Enable encryption of commands; defaults to <code>true</code>.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isEncryptionEnabled;)
+ (BOOL)isEncryptionEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsEncryptionEnabled:(BOOL)value;
/// <code>DeviceCertificate</code> of the device.
@property (nonatomic, readonly, strong) DeviceCertificate * _Nullable certificate;
/// Name of the device.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Device Certificate is used to recognize a valid device.
/// Certificate binary format
/// <ul>
///   <li>
///     Bytes[0 to 4]: Issuer (4 bytes)
///   </li>
/// </ul>
/// <ul>
///   <li>
///     Bytes[4 to 16]: App ID (12 bytes)
///   </li>
/// </ul>
/// <ul>
///   <li>
///     Bytes[16 to 25]: Device serial (9 bytes)
///   </li>
/// </ul>
/// <ul>
///   <li>
///     Bytes[25 to 89]: Device Public Key ( 64 bytes)
///   </li>
/// </ul>
/// <ul>
///   <li>
///     Bytes[89 to 153]: CA Signature ( 64 bytes)
///   </li>
/// </ul>
SWIFT_CLASS("_TtC5HMKit17DeviceCertificate")
@interface DeviceCertificate : Certificate
/// Issuer’s identifier.
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull issuer;
/// Application’s identifier.
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull appIdentifier;
/// Serial number of the device this certificate is for.
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull serial;
/// Public key of the device this certificate is for.
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull publicKey;
/// Signature of the certificate; must be <em>64 bytes</em>.
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable signature;
/// Bytes making up the certificate; without the signature.
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nullable certificateData;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


SWIFT_CLASS("_TtC5HMKit11LocalDevice")
@interface LocalDevice : Device
/// Singleton access for the <code>LocalDevice</code>, read-only.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) LocalDevice * _Nonnull sharedDevice;)
+ (LocalDevice * _Nonnull)sharedDevice SWIFT_WARN_UNUSED_RESULT;
/// <code>AccessCertificates</code> registered with the <code>LocalDevice</code>, read-only.
@property (nonatomic, readonly, copy) NSArray<AccessCertificate *> * _Nonnull registeredCertificates;
/// <code>AccessCertificates</code> stored with the <code>LocalDevice</code>, read-only.
@property (nonatomic, readonly, copy) NSArray<AccessCertificate *> * _Nonnull storedCertificates;
/// Enable for <em>safety-critical</em> connections, that need to track the <em>connection state</em> (bluetooth’s own connection state changes are designed to be power-efficient, but lazy); defaults to <code>false</code>.
@property (nonatomic) BOOL isAlivePingActive;
/// If the broadcasting filter has been set, read-only.
/// seealso:
///
/// <ul>
///   <li>
///     <code>clearBroadcastingFilter()</code>
///   </li>
///   <li>
///     <code>setBroadcastingFilter(:)</code>
///   </li>
/// </ul>
@property (nonatomic, readonly) BOOL isBroadcastingFilterActive;
/// Initialise the <code>LocalDevice</code> with essential values before using any other functionality.
/// Inputs are a <code>Base64String</code>
/// \param deviceCertificate Data for <code>DeviceCertificate</code> in a <code>Base64String</code> format.
///
/// \param devicePrivateKey Private key (elliptic curve p256v1) for this device; must be <em>32 bytes</em> and match the public key in <code>DeviceCertificate</code>.
///
/// \param issuerPublicKey Public key of the Issuer; must be <em>64 bytes</em>.
///
///
/// throws:
/// <code>.internalError</code> when the <code>DeviceCertificate</code> could not be created from the input; or the keys are not the correct length.
- (BOOL)initialiseWithDeviceCertificate:(NSString * _Nonnull)deviceCertificate devicePrivateKey:(NSString * _Nonnull)devicePrivateKey issuerPublicKey:(NSString * _Nonnull)issuerPublicKey error:(NSError * _Nullable * _Nullable)error;
/// Start broadcasting the <code>LocalDevice</code> via BLE advertising.
///
/// throws:
/// A <code>LinkError</code> relating to bluetooth problems.
- (BOOL)startBroadcastingAndReturnError:(NSError * _Nullable * _Nullable)error;
/// Stop broadcasting the <code>LocalDevice</code>.
- (void)stopBroadcasting;
/// Stops broadcasting, removes the services (thus disconnecting from centrals) and clears the links.
- (void)disconnectAll;
/// Registers an <code>AccessCertificate</code> with the <code>LocalDevice</code>.
/// \param certificate Certificate that will be used to <em>authenticate</em> with connecting devices.
///
///
/// throws:
/// <code>.internalError</code> when <code>DeviceCertificate</code> is not set or the providing serial does not match the <code>DeviceCertificate</code> one.
- (BOOL)registerCertificate:(AccessCertificate * _Nonnull)certificate error:(NSError * _Nullable * _Nullable)error;
/// Stores an <code>AccessCertificate</code> with the <code>LocalDevice</code>; this certificate is usually read by other devices.
/// \param certificate Certificate that will be stored.
///
- (void)storeCertificate:(AccessCertificate * _Nonnull)certificate;
/// Resets the <code>LocalDevice</code>’s <code>AccessCertificate</code>-s database and stops broadcasting.
- (void)reset;
/// Resets the <code>LocalDevice</code>’s <code>AccessCertificate</code>-s database.
- (void)resetStorage;
/// Clears the bluetooth advertisment filter.
/// When the device is already broadcasting, it needs to be stopped and started again to see the effect.
/// seealso:
///
/// <ul>
///   <li>
///     <code>isBroadcastingFilterActive</code>
///   </li>
///   <li>
///     <code>setBroadcastingFilter(vehicleSerial:)</code>
///   </li>
/// </ul>
- (void)clearBroadcastingFilter;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface NSURLSession (SWIFT_EXTENSION(HMKit))
@end

#pragma clang diagnostic pop
