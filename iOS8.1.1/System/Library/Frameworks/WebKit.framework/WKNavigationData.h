/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSString, NSURLRequest, NSURL, NSURLResponse;

@interface WKNavigationData : NSObject <WKObject> {

	ObjectStorage<API::NavigationData> _data;

}

@property (readonly) NSString * title; 
@property (readonly) NSURLRequest * originalRequest; 
@property (readonly) NSURL * destinationURL; 
@property (readonly) NSURLResponse * response; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(NSURL *)destinationURL;
-(void)dealloc;
-(NSString *)title;
-(NSURLResponse *)response;
-(Object*)_apiObject;
-(NSURLRequest *)originalRequest;
@end
