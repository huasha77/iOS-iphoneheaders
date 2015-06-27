/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:43:27 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol APSOutgoingMessageQueueDelegate;
@class APSEnvironment, NSMutableArray, NSTimer;

@interface APSOutgoingMessageQueue : NSObject {

	id<APSOutgoingMessageQueueDelegate> _delegate;
	APSEnvironment* _environment;
	NSMutableArray* _queue;
	NSTimer* _timer;
	double _criticalMessageTimeout;
	NSTimer* _criticalMessageKeepAliveTimer;
	double _criticalMessageKeepAliveTimerDuration;
	unsigned _criticalMessageFlushCount;
	unsigned _numberOfCriticalMessageFlushesBeforeDisconnecting;
	unsigned _criticalMessageFlushSize;
	double _forcedShortTimeoutDuration;
	double _lastReceivedAckOrReconnect;
	void* _powerAssertion;

}

@property (nonatomic,readonly) char hasPendingMessages; 
@property (nonatomic,readonly) char hasEagerMessages; 
-(id)initWithDelegate:(id)arg1 environment:(id)arg2 ;
-(void)enqueueOutgoingMessage:(id)arg1 forOriginator:(id)arg2 ;
-(void)cancelOutgoingMessageWithID:(unsigned)arg1 ;
-(char)hasEagerMessages;
-(void)handleConnectionClosedOnInterface:(int)arg1 ;
-(void)setNumberOfCriticalMessageFlushesBeforeDisconnecting:(id)arg1 ;
-(void)setCriticalMessageKeepAliveTimerDuration:(id)arg1 ;
-(void)setCriticalMessageTimeout:(id)arg1 ;
-(void)setForcedShortTimeoutInterval:(id)arg1 ;
-(char)hasPendingMessages;
-(void)handleConnectionOpened;
-(void)handleSentOutgoingMessage:(id)arg1 onInterface:(int)arg2 ;
-(void)handleErrorSendingOutgoingMessage:(id)arg1 error:(id)arg2 ;
-(id)nextOutgoingMessageToSendForTokenState:(id)arg1 ;
-(void)handleAcknowledgmentForOutgoingMessageWithResult:(id)arg1 relevantInterfaceMonitor:(id)arg2 dualChannelState:(unsigned)arg3 onInterface:(int)arg4 ;
-(void)_clearCriticalMessageKeepAliveTimer;
-(void)_queueChanged;
-(void)_deliverResult:(id)arg1 forMessage:(id)arg2 ;
-(void)_clearCriticalMessageKeepAliveTimerIfAppropriate;
-(void)_recalculateTimer;
-(void)_recalculatePowerAssertion;
-(void)_recalculateDisableFastDormancy;
-(char)_outgoingMessageIsLateCriticalMessage:(id)arg1 ;
-(void)_startCriticalMessageFlushTimerSendingFlush;
-(void)_criticalMessageKeepAliveTimerFired;
-(void)_timerFired:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
@end
