/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBXPCConnectionDelegate.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@class BBServerConnection, NSSet;

@interface BBSystemStateProvider : NSObject <BBXPCConnectionDelegate, XPCProxyTarget> {

	BBServerConnection* _connection;
	unsigned _currentState;
	NSSet* _sectionIDs;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)connection:(id)arg1 connectionStateDidChange:(BOOL)arg2 ;
-(void)noteChangeOfState:(unsigned)arg1 newValue:(BOOL)arg2 ;
-(void)noteOccurrenceOfEvent:(unsigned)arg1 ;
-(void)noteRestrictedSectionIDsDidChange:(id)arg1 ;
-(void)_sendState:(unsigned)arg1 value:(BOOL)arg2 ;
@end
