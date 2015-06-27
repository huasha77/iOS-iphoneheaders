/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSString, ABUIPerson;

@interface ABActionsController : NSObject {

	int _property;
	int _multiValueIdentifier;
	id _value;
	NSString* _stringValue;
	void* _context;
	int _lastPropertyForActions;
	CFArrayRef _actionsForProperty;
	ABUIPerson* _person;

}

@property (nonatomic,retain) ABUIPerson * person;              //@synthesize person=_person - In the implementation block
+(int)defaultActionForProperty:(int)arg1 ;
+(id)newActionsControllerForProperty:(int)arg1 ;
-(CFArrayRef)_actionsForProperty:(int)arg1 ;
-(int)_actionAtIndex:(int)arg1 forProperty:(int)arg2 ;
-(id)titleForAction:(int)arg1 ;
-(void)_performAction:(int)arg1 forProperty:(int)arg2 ;
-(void)performAction:(int)arg1 ;
-(id)urlForAction:(int)arg1 forProperty:(int)arg2 ;
-(int)actionsCountForProperty:(int)arg1 ;
-(id)titleAtIndex:(int)arg1 forProperty:(int)arg2 ;
-(void)resetPrimaryPropertyActions;
-(void)performDefaultAction;
-(void)performActionAtIndex:(int)arg1 forProperty:(int)arg2 ;
-(void)setMultiValueIdentifier:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setValue:(id)arg1 ;
-(void*)context;
-(id)value;
-(void)setContext:(void*)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(ABUIPerson *)person;
-(void)setPerson:(ABUIPerson *)arg1 ;
-(int)defaultAction;
-(id)initWithProperty:(int)arg1 ;
@end
