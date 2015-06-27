/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface SFCircleProgressLayer : CALayer {

	float _progressLineWidth;
	float _oneFullRotation;
	char _showProgressTray;
	int _progressStartPoint;
	UIColor* _progressColor;
	UIColor* _progressBackgroundColor;

}

@property (assign,nonatomic) int progressStartPoint;                         //@synthesize progressStartPoint=_progressStartPoint - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                        //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * progressBackgroundColor;              //@synthesize progressBackgroundColor=_progressBackgroundColor - In the implementation block
@property (assign,nonatomic) float progressLineWidth;                        //@synthesize progressLineWidth=_progressLineWidth - In the implementation block
@property (assign,nonatomic) char showProgressTray;                          //@synthesize showProgressTray=_showProgressTray - In the implementation block
@property (assign,nonatomic) float progress; 
+(char)needsDisplayForKey:(id)arg1 ;
-(id)init;
-(id)initWithLayer:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(float)progressLineWidth;
-(void)setProgressLineWidth:(float)arg1 ;
-(void)setProgressStartPoint:(int)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(void)setShowProgressTray:(char)arg1 ;
-(int)progressStartPoint;
-(UIColor *)progressColor;
-(UIColor *)progressBackgroundColor;
-(char)showProgressTray;
@end
