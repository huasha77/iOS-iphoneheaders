/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, TRDeviceSetupPeripheralDelegate;
@class _TRUserNotfication, NSString, NSData, NSObject;

@interface TRDeviceSetupPeripheral : NSObject {

	_TRUserNotfication* _activeUserNotification;
	NSString* _authenticationAppleID;
	unsigned long long _authenticationAttemptCount;
	NSData* _dataToSend;
	NSObject*<OS_dispatch_semaphore> _dataToSendSemaphore;
	NSString* _deviceGUID;
	BOOL _performingSetup;
	BOOL _preparingForSetup;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _userAgent;
	id<TRDeviceSetupPeripheralDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TRDeviceSetupPeripheralDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_didReceiveData:(id)arg1 ;
-(void)setDelegate:(id<TRDeviceSetupPeripheralDelegate>)arg1 ;
-(id)init;
-(id<TRDeviceSetupPeripheralDelegate>)delegate;
-(id)_didTap;
-(void)_didDisconnect;
-(BOOL)_canPerformSetupReturningHasWiFiNetwork:(BOOL*)arg1 ;
-(void)_showUserNotificationForErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_setupDidFailWithError:(id)arg1 ;
-(void)_authenticateWithParameters:(id)arg1 ;
-(void)_setupDidComplete;
-(void)_startAuthentication;
-(BOOL)_showUserNotificationForAppleID:(id)arg1 returningAppleID:(id*)arg2 password:(id*)arg3 ;
-(BOOL)_showUserNotificationForRememberPasswordForAppleID:(id)arg1 ;
-(BOOL)_showUserNotificationForDiagnosticSubmission;
-(void)_sendSetupDataWithAuthInfo:(id)arg1 diagnosticSubmissionEnabled:(BOOL)arg2 rememberPasswordEnabled:(BOOL)arg3 ;
-(void)_showUserNotificationForAuthenticationFailure:(id)arg1 ;
-(BOOL)performSetup;
-(void)cancelPreparingForSetup;
-(void)cancelSetupForStateChange;
-(void)cancelSetupForTimeout;
@end
