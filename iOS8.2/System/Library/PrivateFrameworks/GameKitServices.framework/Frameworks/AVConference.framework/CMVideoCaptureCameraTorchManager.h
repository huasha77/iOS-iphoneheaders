/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AXCameraTorchManager.h>

@class NSString;

@interface CMVideoCaptureCameraTorchManager : NSObject <AXCameraTorchManager> {

	tagHANDLE* _hCMCapture;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)openTorchDevice;
-(void)closeTorchDevice;
-(void)turnTorchOn;
-(void)turnTorchOff;
-(id)initWithVideoCaptureHandle:(tagHANDLE*)arg1 ;
@end
