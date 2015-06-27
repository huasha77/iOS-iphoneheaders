/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>
#import <ChatKit/CKAudioBalloonView.h>

@protocol CKAudioBalloonView <NSObject>
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) double duration; 
@property (assign,getter=isPlaying,nonatomic) char playing; 
@property (assign,getter=isPlayed,nonatomic) char played; 
@property (assign,nonatomic) int waveformContentMode; 
@required
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setTime:(double)arg1;
-(double)time;
-(void)setWaveform:(id)arg1;
-(void)setPlayed:(char)arg1;
-(void)setWaveformContentMode:(int)arg1;
-(char)isPlayed;
-(int)waveformContentMode;
-(char)isPlaying;
-(void)setPlaying:(char)arg1;

@end


@class NSString, UILabel, CKAudioProgressView, CKWaveformProgressView;

@interface CKAudioBalloonView : CKColoredBalloonView <CKAudioBalloonView> {

	char _playing;
	char _played;
	NSString* _timeFormat;
	UILabel* _timeLabel;
	CKAudioProgressView* _progressView;
	CKWaveformProgressView* _waveformProgressView;
	double _time;
	double _duration;

}

@property (assign,nonatomic) double time;                                                //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isPlaying,nonatomic) char playing;                              //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPlayed,nonatomic) char played;                                //@synthesize played=_played - In the implementation block
@property (assign,nonatomic) int waveformContentMode; 
@property (assign,getter=isControlHidden,nonatomic) char controlHidden; 
@property (nonatomic,copy) NSString * timeFormat;                                        //@synthesize timeFormat=_timeFormat - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                        //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) CKAudioProgressView * progressView;                         //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) CKWaveformProgressView * waveformProgressView;              //@synthesize waveformProgressView=_waveformProgressView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)setProgressView:(CKAudioProgressView *)arg1 ;
-(CKAudioProgressView *)progressView;
-(void)prepareForDisplay;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(char)arg3 ;
-(void)setWaveform:(id)arg1 ;
-(void)setPlayed:(char)arg1 ;
-(void)setControlHidden:(char)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setWaveformContentMode:(int)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(char)isPlayed;
-(int)waveformContentMode;
-(void)updateTimeString;
-(void)updateProgress;
-(void)setTimeFormat:(NSString *)arg1 ;
-(NSString *)timeFormat;
-(void)setWaveformProgressView:(CKWaveformProgressView *)arg1 ;
-(CKWaveformProgressView *)waveformProgressView;
-(char)isControlHidden;
-(char)isPlaying;
-(void)setPlaying:(char)arg1 ;
@end
