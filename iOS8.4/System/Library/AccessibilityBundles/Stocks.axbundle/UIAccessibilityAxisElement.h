/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/Stocks.axbundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAxisElement : UIAccessibilityElement {

	NSArray* _axisLabels;
	long long _chartInterval;
	BOOL _isAxisX;
	BOOL _isDetailMode;

}

@property (nonatomic,retain) NSArray * axisLabels;                 //@synthesize axisLabels=_axisLabels - In the implementation block
@property (assign,nonatomic) long long chartInterval;              //@synthesize chartInterval=_chartInterval - In the implementation block
@property (assign,nonatomic) BOOL isAxisX;                         //@synthesize isAxisX=_isAxisX - In the implementation block
@property (assign,nonatomic) BOOL isDetailMode;                    //@synthesize isDetailMode=_isDetailMode - In the implementation block
-(void)setIsDetailMode:(BOOL)arg1 ;
-(void)setAxisLabels:(NSArray *)arg1 ;
-(void)setIsAxisX:(BOOL)arg1 ;
-(BOOL)isAxisX;
-(BOOL)isDetailMode;
-(void)dealloc;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(NSArray *)axisLabels;
-(long long)chartInterval;
-(void)setChartInterval:(long long)arg1 ;
@end
