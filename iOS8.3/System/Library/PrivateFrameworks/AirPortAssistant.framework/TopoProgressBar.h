/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:34:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@interface TopoProgressBar : CALayer {

	id _owningView;
	float _progressValue;

}

@property (assign,nonatomic) id owningView; 
@property (assign,nonatomic) float progressValue;              //@synthesize progressValue=_progressValue - In the implementation block
+(long)initImageCache;
+(void)deallocImageCache;
-(void)dealloc;
-(void)layoutSublayers;
-(void)setOwningView:(id)arg1 ;
-(CGSize)preferredFrameSize;
-(id)initWithOwningView:(id)arg1 ;
-(id)owningView;
-(float)progressValue;
-(void)setProgressValue:(float)arg1 ;
-(CGImageRef)composeProgressBar;
@end
