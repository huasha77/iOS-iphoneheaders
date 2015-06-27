/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTCompetingTeamPlayDetailItem : AceObject <SASTTemplateItem>

@property (assign,nonatomic) char firstEntity; 
@property (nonatomic,retain) SAUIDecoratedText * playDetail; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)competingTeamPlayDetailItem;
+(id)competingTeamPlayDetailItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)firstEntity;
-(void)setFirstEntity:(char)arg1 ;
-(SAUIDecoratedText *)playDetail;
-(void)setPlayDetail:(SAUIDecoratedText *)arg1 ;
@end
