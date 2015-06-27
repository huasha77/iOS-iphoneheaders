/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber, SASStartSpeech;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) char clearContext; 
@property (assign,nonatomic) char eyesFree; 
@property (assign,nonatomic) char handsFree; 
@property (nonatomic,copy) NSString * hardwareBuild; 
@property (nonatomic,copy) NSNumber * isCarryDevice; 
@property (nonatomic,copy) NSString * motionActivity; 
@property (nonatomic,copy) NSNumber * motionConfidence; 
@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,retain) SASStartSpeech * sourceSpeechRequest; 
@property (assign,nonatomic) char talkOnly; 
@property (nonatomic,copy) NSString * utterance; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)startRequest;
+(id)startRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(char)_ad_isRetryableCommand;
-(id)groupIdentifier;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(id)encodedClassName;
-(char)clearContext;
-(void)setClearContext:(char)arg1 ;
-(NSNumber *)isCarryDevice;
-(void)setIsCarryDevice:(NSNumber *)arg1 ;
-(NSString *)motionActivity;
-(void)setMotionActivity:(NSString *)arg1 ;
-(NSNumber *)motionConfidence;
-(void)setMotionConfidence:(NSNumber *)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(char)eyesFree;
-(void)setEyesFree:(char)arg1 ;
-(char)handsFree;
-(void)setHandsFree:(char)arg1 ;
-(char)talkOnly;
-(void)setTalkOnly:(char)arg1 ;
-(NSString *)hardwareBuild;
-(void)setHardwareBuild:(NSString *)arg1 ;
-(SASStartSpeech *)sourceSpeechRequest;
-(void)setSourceSpeechRequest:(SASStartSpeech *)arg1 ;
@end
