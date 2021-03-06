/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, PKPrintSettings, NSDate, NSData;

@interface PKJob : NSObject {

	int number;
	int mediaProgress;
	int mediaSheets;
	int mediaSheetsCompleted;
	NSString* printerDisplayName;
	int printerKind;
	NSString* printerLocation;
	PKPrintSettings* settings;
	int state;
	NSDate* timeAtCompleted;
	NSDate* timeAtCreation;
	NSDate* timeAtProcessing;
	NSData* thumbnailImage;

}

@property (assign,nonatomic) int number; 
@property (assign,nonatomic) int mediaProgress; 
@property (assign,nonatomic) int mediaSheets; 
@property (assign,nonatomic) int mediaSheetsCompleted; 
@property (nonatomic,retain) NSString * printerDisplayName; 
@property (assign,nonatomic) int printerKind; 
@property (nonatomic,retain) NSString * printerLocation; 
@property (nonatomic,retain) PKPrintSettings * settings; 
@property (assign,nonatomic) int state; 
@property (nonatomic,retain) NSDate * timeAtCompleted; 
@property (nonatomic,retain) NSDate * timeAtCreation; 
@property (nonatomic,retain) NSDate * timeAtProcessing; 
@property (nonatomic,retain) NSData * thumbnailImage; 
+(id)jobs;
+(id)currentJob;
-(BOOL)isEqual:(id)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)cancel;
-(int)update;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(id)printerDisplayName;
-(id)printerLocation;
-(int)printerKind;
-(id)timeAtCreation;
-(id)timeAtProcessing;
-(id)timeAtCompleted;
-(int)mediaSheets;
-(int)mediaSheetsCompleted;
-(int)number;
-(id)thumbnailImage;
-(void)setNumber:(int)arg1 ;
-(void)setThumbnailImage:(id)arg1 ;
-(void)setMediaProgress:(int)arg1 ;
-(void)setMediaSheets:(int)arg1 ;
-(void)setMediaSheetsCompleted:(int)arg1 ;
-(void)setPrinterDisplayName:(id)arg1 ;
-(void)setPrinterKind:(int)arg1 ;
-(void)setPrinterLocation:(id)arg1 ;
-(void)setTimeAtCompleted:(id)arg1 ;
-(void)setTimeAtCreation:(id)arg1 ;
-(void)setTimeAtProcessing:(id)arg1 ;
-(int)mediaProgress;
@end

