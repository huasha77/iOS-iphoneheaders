/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:47 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSString;

@interface OITSUDurationFormatter : NSFormatter {

	NSString* mFormat;
	int mCompactStyleStartUnit;

}

@property (nonatomic,copy) NSString * format; 
@property (assign,nonatomic) int compactStyleStartUnit; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)p_commonInit;
-(int)compactStyleStartUnit;
-(void)setCompactStyleStartUnit:(int)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
@end
