/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCTrimTimeRangeOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, RCTrimAudioFileOperation, NSError, RCComposition, NSURL;

@interface RCTrimCompositionOperation : RCTrimTimeRangeOperation {

	NSObject*<OS_dispatch_queue> _serialQueue;
	double _durationOfFragmentsBeingTrimmed;
	double _subTaskProgressAmounts[2];
	double _lastPostedProgress;
	NSOperationQueue* _subOperationQueue;
	RCTrimAudioFileOperation* _trimAudioFileSubOperation;
	char _success;
	NSError* _error;
	RCComposition* _sourceComposition;
	NSURL* _destinationComposedAVURL;
	double _exportedDuration;

}

@property (nonatomic,copy,readonly) RCComposition * sourceComposition;              //@synthesize sourceComposition=_sourceComposition - In the implementation block
@property (nonatomic,copy,readonly) NSURL * destinationComposedAVURL;               //@synthesize destinationComposedAVURL=_destinationComposedAVURL - In the implementation block
+(id)_intermediateTrimmedAVOutputURLForFragment:(id)arg1 ;
+(id)_intermediateTrimmedWaveformURLForFragment:(id)arg1 ;
-(char)success;
-(void)cancel;
-(double)progress;
-(void)main;
-(id)error;
-(double)exportedDuration;
-(id)initWithSourceComposition:(id)arg1 destinationComposedAVURL:(id)arg2 timeRange:(SCD_Struct_RC4)arg3 trimMode:(int)arg4 ;
-(char)_isSaveToCopyOperation;
-(id)performTrimOnFragmentsWithDestinationComposition:(id)arg1 ;
-(id)performTrimOnComposedAVURLWithDestinationComposition:(id)arg1 ;
-(void)_performSyncOnSerialQueue:(/*^block*/id)arg1 ;
-(RCComposition *)sourceComposition;
-(NSURL *)destinationComposedAVURL;
@end
