/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/XPCServices/com.apple.voicetrigger.voicetriggerservice.xpc/com.apple.voicetrigger.voicetriggerservice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface VTXFeedbackHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _eventTimes;

}
+(id)sharedFeedback;
-(void)_removeItemsBefore:(double)arg1 ;
-(double)_timeForEvent:(unsigned char)arg1 ;
-(void)_log:(unsigned char)arg1 time:(double)arg2 ;
-(double)_timeDiff:(double)arg1 forEvent:(unsigned char)arg2 ;
-(void)handleFeedback:(unsigned char)arg1 atTime:(double)arg2 ;
@end
