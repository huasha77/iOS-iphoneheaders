/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/NSCoding.h>

@class UITraitCollection, NSSet;

@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding> {

	UITraitCollection* _traitCollection;
	NSSet* _addedObjects;
	NSSet* _removedObjects;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) NSSet * addedObjects;                             //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSSet * removedObjects;                           //@synthesize removedObjects=_removedObjects - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UITraitCollection *)traitCollection;
-(id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
-(NSSet *)addedObjects;
-(NSSet *)removedObjects;
@end
