/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantUI/AVAudioPlayerDelegate.h>

@protocol AFUIVoicemailPlayerDelegate;
@class SAPhonePlayVoiceMail, AVAudioPlayer, VMVoicemail, NSString;

@interface AFUIVoicemailPlayer : NSObject <AVAudioPlayerDelegate> {

	id<AFUIVoicemailPlayerDelegate> _delegate;
	SAPhonePlayVoiceMail* _voicemail;
	AVAudioPlayer* _player;
	VMVoicemail* _voicemailObject;

}

@property (assign,nonatomic,__weak) id<AFUIVoicemailPlayerDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SAPhonePlayVoiceMail * voicemail;                                                               //@synthesize voicemail=_voicemail - In the implementation block
@property (setter=_setPlayer:,getter=_player,nonatomic,retain) AVAudioPlayer * player;                                       //@synthesize player=_player - In the implementation block
@property (setter=_setVoicemailObject:,getter=_voicemailObject,nonatomic,retain) VMVoicemail * voicemailObject;              //@synthesize voicemailObject=_voicemailObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopPlaying;
-(id)_player;
-(void)setDelegate:(id<AFUIVoicemailPlayerDelegate>)arg1 ;
-(id<AFUIVoicemailPlayerDelegate>)delegate;
-(void)_setVoicemailObject:(id)arg1 ;
-(id)_voicemailURL;
-(void)_setPlayer:(id)arg1 ;
-(SAPhonePlayVoiceMail *)voicemail;
-(long long)_voicemailID;
-(id)_voicemailObject;
-(void)_updateVoicemailPlayedState:(id)arg1 finished:(BOOL)arg2 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)startPlaying;
-(void)setVoicemail:(SAPhonePlayVoiceMail *)arg1 ;
@end
