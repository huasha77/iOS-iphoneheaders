/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, _HKEntitlements, NSString;

@interface HDClient : NSObject {

	NSXPCConnection* _connection;
	_HKEntitlements* _entitlements;
	NSString* _name;
	NSString* _bundleIdentifier;

}

@property (readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (readonly) _HKEntitlements * entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
@property (readonly) int processIdentifier; 
@property (readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(NSXPCConnection *)connection;
-(int)processIdentifier;
-(id)valueForEntitlement:(id)arg1 ;
-(_HKEntitlements *)entitlements;
-(id)initWithConnection:(id)arg1 entitlements:(id)arg2 ;
-(id)_initWithConnection:(id)arg1 entitlements:(id)arg2 ;
-(id)initWithEntitlements:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 withError:(id*)arg2 ;
-(id)initWithConnection:(id)arg1 ;
@end
