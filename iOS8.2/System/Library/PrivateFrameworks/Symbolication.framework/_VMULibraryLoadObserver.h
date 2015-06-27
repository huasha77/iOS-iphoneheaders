/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VMULibraryLoadDelegate, OS_dispatch_queue;
#import <Symbolication/Symbolication-Structs.h>
@class NSObject;

@interface _VMULibraryLoadObserver : NSObject {

	id<VMULibraryLoadDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialNotificationsQueue;
	CSTypeRef _symbolicator;

}
-(void)dealloc;
-(void)stopObserving;
-(id)initWithTask:(unsigned)arg1 delegate:(id)arg2 ;
@end
