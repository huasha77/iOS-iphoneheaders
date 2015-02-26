/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABStyleProviding.h>

@protocol ABPersonTableActionDelegate;
@class NSString, UIButton, UIView;

@interface ABPersonTableAction : NSObject <ABStyleProviding> {

	NSString* _title;
	NSString* _shortTitle;
	BOOL _displaysShortTitle;
	BOOL _indicatesFaceTimeHistory;
	NSString* _detailText;
	NSString* _differentiationSheetTitle;
	BOOL _allowDifferentiationSheet;
	id _target;
	SEL _selector;
	int _style;
	int _property;
	CFArrayRef _properties;
	int _grouping;
	int _ordering;
	UIButton* _button;
	UIButton* _FMFButton;
	UIView* _customContentView;
	<ABPersonTableActionDelegate>* _delegate;

}

@property (assign,nonatomic) <ABPersonTableActionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int grouping;                                          //@synthesize grouping=_grouping - In the implementation block
@property (assign,nonatomic) int ordering;                                          //@synthesize ordering=_ordering - In the implementation block
@property (nonatomic,readonly) UIButton * button; 
@property (nonatomic,readonly) UIButton * existingButton;                           //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * shortTitle;                               //@synthesize shortTitle=_shortTitle - In the implementation block
@property (assign,nonatomic) BOOL displaysShortTitle;                               //@synthesize displaysShortTitle=_displaysShortTitle - In the implementation block
@property (nonatomic,readonly) NSString * detailText;                               //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) int style;                                           //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) id target;                                           //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                        //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) int property;                                        //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) CFArrayRef properties;                                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * differentiationSheetTitle;                    //@synthesize differentiationSheetTitle=_differentiationSheetTitle - In the implementation block
@property (assign,nonatomic) BOOL allowDifferentiationSheet;                        //@synthesize allowDifferentiationSheet=_allowDifferentiationSheet - In the implementation block
@property (assign,nonatomic) BOOL indicatesFaceTimeHistory;                         //@synthesize indicatesFaceTimeHistory=_indicatesFaceTimeHistory - In the implementation block
@property (nonatomic,retain) UIView * actionContentView;                            //@synthesize customContentView=_customContentView - In the implementation block
-(id)styleProvider;
-(void)setFMFActionButton:(id)arg1 ;
-(id)initWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 style:(int)arg3 target:(id)arg4 selector:(SEL)arg5 ;
-(void)setActionContentView:(id)arg1 ;
-(void)buttonClicked:(id)arg1 ;
-(int)ordering;
-(void)setDisplaysShortTitle:(BOOL)arg1 ;
-(void)performWithSender:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 selector:(SEL)arg4 ;
-(id)initWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5 ;
-(int)compareOrderingToAction:(id)arg1 ;
-(void)modifyDetailText:(id)arg1 ;
-(void)setIndicatesFaceTimeHistory:(BOOL)arg1 ;
-(void)prepareButton:(id)arg1 forValueAtIndex:(int)arg2 inPropertyGroup:(id)arg3 ;
-(BOOL)indicatesFaceTimeHistory;
-(id)differentiationSheetTitle;
-(void)setDifferentiationSheetTitle:(id)arg1 ;
-(BOOL)allowDifferentiationSheet;
-(void)setAllowDifferentiationSheet:(BOOL)arg1 ;
-(id)shortTitle;
-(BOOL)displaysShortTitle;
-(id)detailText;
-(id)existingButton;
-(void)setOrdering:(int)arg1 ;
-(id)actionContentView;
-(int)property;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(int)style;
-(id)target;
-(id)title;
-(SEL)selector;
-(CFArrayRef)properties;
-(void)setProperties:(CFArrayRef)arg1 ;
-(int)grouping;
-(void)setGrouping:(int)arg1 ;
-(id)button;
@end
