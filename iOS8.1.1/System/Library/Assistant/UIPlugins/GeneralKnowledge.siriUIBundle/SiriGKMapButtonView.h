/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class SiriUIContentLabel, UIImageView, SiriUIKeyline, NSString;

@interface SiriGKMapButtonView : SiriGKView {

	SiriUIContentLabel* _titleLabel;
	UIImageView* _chevronImageView;
	SiriUIKeyline* _keyline;
	SCD_Struct_Si0 _coordinate;
	double _mapSpan;
	NSString* _mapSnippetTitleString;

}
-(id)mapViewSnippet;
-(id)initWithCoodinate:(SCD_Struct_Si0)arg1 mapSpan:(double)arg2 mapTitle:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isSelectable;
@end
