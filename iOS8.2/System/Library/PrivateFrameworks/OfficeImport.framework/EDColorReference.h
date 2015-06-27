/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {

	EDResources* mResources;
	int mSystemColorID;
	unsigned mColorIndex;
	unsigned mThemeIndex;
	double mTint;

}
+(id)colorReferenceWithResources:(id)arg1 ;
+(id)colorReferenceWithColor:(id)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithThemeIndex:(unsigned)arg1 tint:(double)arg2 resources:(id)arg3 ;
+(id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithColorIndex:(unsigned)arg1 resources:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color;
-(int)systemColorID;
-(id)initWithResources:(id)arg1 ;
-(id)initWithColor:(id)arg1 resources:(id)arg2 ;
-(char)isEqualToColorReference:(id)arg1 ;
-(unsigned)themeIndex;
-(double)tint;
-(unsigned)colorIndex;
@end
