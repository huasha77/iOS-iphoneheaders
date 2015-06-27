/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:29:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROServerDelegate;
#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@class NSLock;

@interface SCROServer : NSObject {

	NSLock* _contentLock;
	id<SCROServerDelegate> _delegate;
	CFRunLoopSourceRef _serverSource;
	CFRunLoopSourceRef _deathSource;
	CFRunLoopTimerRef _deathTimer;
	unsigned _serverPort;
	unsigned _deathPort;
	long _clientCount;
	char _isRegisteredWithMach;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedServer;
-(id)retain;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFRunLoopSourceRef)serverSource;
-(void)unregisterWithMach;
-(long)_clientCount;
-(long)_incrementClientCount;
-(void)_setClientCount:(long)arg1 ;
-(CFRunLoopTimerRef)_deathTimer;
-(int)_registerForNotificationOnDeathPort:(unsigned)arg1 ;
-(char)isRegisteredWithMach;
-(char)registerWithMach;
-(oneway void)release;
@end
