/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPIdentifiedDataRepresentation <NSObject>
@optional
-(void)setFileStateIdentifier:(id)arg1;
-(char)fromExternalReference;
-(void)setRelativeDataPath:(id)arg1;

@required
-(char)setDataRepresentation:(id)arg1 shouldCopy:(char)arg2 error:(id*)arg3;
-(long long)identifier;
-(char)isLoaded;

@end
