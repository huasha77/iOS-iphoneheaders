/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {

	int mStyle;
	OITSUColor* mColor;
	unsigned char mWidth;
	unsigned char mSpace;
	char mShadow;
	char mFrame;

}
-(void)dealloc;
-(id)init;
-(void)setFrame:(char)arg1 ;
-(char)frame;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(unsigned char)width;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setWidth:(unsigned char)arg1 ;
-(char)shadow;
-(void)setShadow:(char)arg1 ;
-(void)setSpace:(unsigned char)arg1 ;
-(unsigned char)space;
-(char)isEqualToBorder:(id)arg1 ;
-(void)setSingleBlackBorder;
-(void)setNullBorder;
-(void)setBorder:(id)arg1 ;
@end
