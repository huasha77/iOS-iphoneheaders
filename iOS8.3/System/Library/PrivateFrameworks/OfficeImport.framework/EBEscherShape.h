/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/ESDObject.h>

@class NSData, NSMutableArray, CHDChart;

@interface EBEscherShape : ESDObject {

	NSData* mChartData;
	NSMutableArray* mChartColorLocators;
	char mShowLegend;
	CHDChart* mChart;

}
-(void)dealloc;
-(void)setChart:(id)arg1 ;
-(id)chart;
-(id)chartData;
-(void)setChartData:(id)arg1 ;
-(id)chartColorLocators;
-(void)setChartColorLocators:(id)arg1 ;
-(char)showLegend;
-(void)setShowLegend:(char)arg1 ;
@end
