/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/ISStoreURLOperationDelegate.h>
#import <iTunesStoreUI/SUWebViewDelegate.h>

@class ISStoreURLOperation, SUWebView, NSString;

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate> {

	ISStoreURLOperation* _loadOperation;
	SUWebView* _webView;

}

@property (nonatomic,readonly) id windowScriptObject; 
@property (nonatomic,readonly) OpaqueJSContextRef globalExecutionContext; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)dealloc;
-(void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(OpaqueJSContextRef)globalExecutionContext;
-(id)windowScriptObject;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)_webView;
-(char)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)evaluateScriptAtURL:(id)arg1 ;
-(void)_cancelLoadOperation;
-(id)_newLoadOperation;
-(void)evaluateScriptWithURLBagKey:(id)arg1 ;
-(id)parentViewControllerForWebView:(id)arg1 ;
@end
