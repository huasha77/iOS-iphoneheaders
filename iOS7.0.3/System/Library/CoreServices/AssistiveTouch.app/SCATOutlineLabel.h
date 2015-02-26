/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UILabel.h>

@class UIColor;

@interface SCATOutlineLabel : UILabel {

	UIColor* _outlineColor;
	float _outlineThickness;

}

@property (nonatomic,retain) UIColor * outlineColor;              //@synthesize outlineColor=_outlineColor - In the implementation block
@property (assign,nonatomic) float outlineThickness;              //@synthesize outlineThickness=_outlineThickness - In the implementation block
-(float)outlineThickness;
-(void)setOutlineThickness:(float)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(id)outlineColor;
-(void)setOutlineColor:(id)arg1 ;
@end
