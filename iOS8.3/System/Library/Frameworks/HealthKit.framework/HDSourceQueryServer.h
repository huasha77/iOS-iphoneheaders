/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>
#import <healthd/HDDataObserver.h>

@class NSMutableSet, NSString;

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver> {

	char _deliversUpdates;
	NSMutableSet* _sources;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sourcesForObjectsOfType:(id)arg1 filter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_sourceAdded:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)_queue_start;
-(char)_shouldListenForUpdates;
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
@end
