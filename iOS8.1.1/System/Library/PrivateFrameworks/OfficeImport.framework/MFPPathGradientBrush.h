/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor, NSArray, OITSDBezierPath;

@interface MFPPathGradientBrush : MFPGradientBrush {

	OITSUColor* mCenterColor;
	CGPoint mCenterPoint;
	NSArray* mSurroundColors;
	OITSDBezierPath* mPath;

}
-(void)dealloc;
-(void)setPath:(id)arg1 ;
-(void)setCenterColor:(id)arg1 ;
-(void)setCenterPoint:(CGPoint)arg1 ;
-(void)setSurroundColors:(id)arg1 ;
-(void)createShading;
-(id)startColor;
-(id)endColor;
@end
