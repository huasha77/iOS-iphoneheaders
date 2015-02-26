/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIButton.h>

@interface CAMFlipButton : UIButton {

	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;              //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(id)flipButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_flipImage;
-(void)_commonCAMFlipButtonInitialization;
-(UIEdgeInsets)tappableEdgeInsets;
@end
