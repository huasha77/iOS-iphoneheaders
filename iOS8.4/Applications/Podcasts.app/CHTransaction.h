/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CHRequest, CHResponse;

@interface CHTransaction : NSObject {

	CHRequest* _request;
	CHResponse* _response;

}

@property (nonatomic,retain) CHRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) CHResponse * response;              //@synthesize response=_response - In the implementation block
-(CHRequest *)request;
-(CHResponse *)response;
-(void)setResponse:(CHResponse *)arg1 ;
-(void)setRequest:(CHRequest *)arg1 ;
@end
