/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSWorkspaceSceneUpdateResponse;

@interface FBSWorkspaceSceneUpdateResponseEvent : FBSWorkspaceSceneEvent {

	FBSWorkspaceSceneUpdateResponse* _response;

}

@property (nonatomic,retain) FBSWorkspaceSceneUpdateResponse * response;              //@synthesize response=_response - In the implementation block
-(void)dealloc;
-(FBSWorkspaceSceneUpdateResponse *)response;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setResponse:(FBSWorkspaceSceneUpdateResponse *)arg1 ;
@end
