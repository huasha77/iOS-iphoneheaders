/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface VTStateManager : NSObject {

	/*^block*/id _callback;

}
+(id)_serviceClient;
+(void)requestVoiceTriggerEnabled:(BOOL)arg1 forReason:(id)arg2 ;
+(void)suggestVoiceTriggerThresholdLevel:(long long)arg1 forReason:(id)arg2 ;
+(void)requestVoiceTriggerEnabledForAlert;
+(BOOL)enabledByAssertion;
+(BOOL)onBattery;
-(id)initWithStateTransitionCallback:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)notify:(BOOL)arg1 ;
@end
