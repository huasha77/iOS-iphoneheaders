/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:27:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

@interface DDCallAction : DDTelephoneNumberAction
+(char)isAvailable;
-(id)localizedName;
-(void)perform;
-(int)interactionType;
-(id)_UIDsAndLabelsMatchingPhoneNumber:(id)arg1 inAddressBook:(void*)arg2 ;
-(id)_nameForPerson:(void*)arg1 ;
-(BOOL)_retrieveNameForDestinationNumber:(id*)arg1 label:(id*)arg2 ;
-(char)_titleFitsInActionSheet:(id)arg1 ;
@end
