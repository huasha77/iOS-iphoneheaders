/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SpringBoard/SBStarkNowPlayingServiceDelegate.h>

@class _UIAsyncInvocation, SBStarkNowPlayingService, NSMutableArray, SBSUICarDisplayNowPlayingStateContext, NSString;

@interface SBStarkNowPlayingController : UIViewController <SBStarkNowPlayingServiceDelegate> {

	_UIAsyncInvocation* _cancelRequest;
	SBStarkNowPlayingService* _service;
	unsigned long long _reactivateAttempt;
	double _lastReactivationAttempt;
	NSMutableArray* _notifyBlocks;
	SBSUICarDisplayNowPlayingStateContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nowPlayingService:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)_notifyActive:(BOOL)arg1 ;
-(void)_notifyTimedOut:(/*^block*/id)arg1 ;
-(void)_switchToService:(id)arg1 ;
-(void)_noteServiceFailure;
-(void)notifyWhenActive:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(void)dealloc;
-(BOOL)isActive;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)_reconnect;
-(void)switchToState:(id)arg1 ;
@end
