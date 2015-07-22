/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, SKUIClientContext, SKUIColorScheme, NSMutableArray, UILabel, NSString;

@interface SKUIProductPageFeaturesView : UIView {

	UIView* _bottomBorderView;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	long long _features;
	NSMutableArray* _featureViews;
	unsigned long long _gameCenterFeatures;
	UILabel* _titleLabel;
	UIView* _topBorderView;

}

@property (assign,nonatomic) long long features;                                 //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) unsigned long long gameCenterFeatures;              //@synthesize gameCenterFeatures=_gameCenterFeatures - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                      //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                  //@synthesize clientContext=_clientContext - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(SKUIClientContext *)clientContext;
-(long long)features;
-(void)setFeatures:(long long)arg1 gameCenterFeatures:(unsigned long long)arg2 ;
-(id)_gameCenterStringWithFeatures:(unsigned long long)arg1 ;
-(void)setFeatures:(long long)arg1 ;
-(void)setGameCenterFeatures:(unsigned long long)arg1 ;
-(unsigned long long)gameCenterFeatures;
@end
