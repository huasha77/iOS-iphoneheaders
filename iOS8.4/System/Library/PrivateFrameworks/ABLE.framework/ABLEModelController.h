/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ABLE/ABLEEvents.h>

@class NSDate, NSDictionary;

@interface ABLEModelController : NSObject <ABLEEvents> {

	BOOL valid;
	unsigned long long _priority;

}

@property (readonly) BOOL expires; 
@property (readonly) NSDate * expiryDate; 
@property (assign) BOOL valid; 
@property (readonly) NSDictionary * currentState; 
@property (assign) unsigned long long priority;                //@synthesize priority=_priority - In the implementation block
@property (readonly) BOOL enabled; 
-(void)resetModel;
-(BOOL)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2 ;
-(void)updateConfiguration:(id)arg1 ;
-(void)significantEventAtDate:(id)arg1 ;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(BOOL)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(BOOL)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1 ;
-(void)expireImmediately;
-(id)init;
-(NSDictionary *)currentState;
-(BOOL)enabled;
-(void)setPriority:(unsigned long long)arg1 ;
-(BOOL)valid;
-(unsigned long long)priority;
-(void)setValid:(BOOL)arg1 ;
-(NSDate *)expiryDate;
-(BOOL)expires;
@end
