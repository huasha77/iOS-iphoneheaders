/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:59:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface MFComposeSMIMELockButton : UIButton {

	UIImageView* _lockedImageView;
	UIImageView* _unlockedImageView;
	char _wantsEncryption;
	char _canEncrypt;
	UIEdgeInsets touchInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchInsets; 
@property (assign,nonatomic) char wantsEncryption;                  //@synthesize wantsEncryption=_wantsEncryption - In the implementation block
@property (assign,nonatomic) char canEncrypt;                       //@synthesize canEncrypt=_canEncrypt - In the implementation block
-(void)setWantsEncryption:(char)arg1 canEncrypt:(char)arg2 animated:(char)arg3 ;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(void)_updateButtonAppearance;
-(void)_updateButtonAppearanceAnimated:(char)arg1 ;
-(char)wantsEncryption;
-(char)canEncrypt;
-(void)_closeLock;
-(void)_openLock;
-(UIEdgeInsets)touchInsets;
-(void)setWantsEncryption:(char)arg1 ;
-(void)setCanEncrypt:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(void)setEnabled:(char)arg1 animated:(char)arg2 ;
@end
