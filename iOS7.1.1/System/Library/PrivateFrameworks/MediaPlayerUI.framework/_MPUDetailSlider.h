/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UISlider.h>
#import <MediaPlayer/MPDetailedScrubbing.h>
#import <MediaPlayerUI/_MPUSliderScrubForwarding.h>

@class MPDetailScrubController;

@interface _MPUDetailSlider : UISlider <MPDetailedScrubbing, _MPUSliderScrubForwarding> {

	MPDetailScrubController* _scrubController;

}

@property (assign,nonatomic,__weak) MPDetailScrubController * scrubController;              //@synthesize scrubController=_scrubController - In the implementation block
-(CGRect)thumbHitRect;
-(CGRect)thumbViewRect;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void).cxx_destruct;
-(void)setScrubController:(id)arg1 ;
-(id)scrubController;
@end

