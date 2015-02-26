/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;

}

@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) BOOL browsing; 
@property (readonly) NSArray * devices; 
-(BOOL)isBrowsing;
-(void)dealloc;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(id)init;
-(id<ICDeviceBrowserDelegate>)delegate;
-(int)start;
-(void)stop;
-(NSArray *)devices;
-(id)internalDevices;
-(void)finalize;
@end
