/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLImageCache, PLImageLoadingQueue, NSMutableDictionary;

@interface PLLibraryImageDataProvider : NSObject {

	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	NSMutableDictionary* _imageSources;

}
-(void)dealloc;
-(id)init;
-(id)_imageSourceForFormat:(int)arg1 ;
-(id)loadImageSynchronously:(BOOL)arg1 forAsset:(id)arg2 format:(int)arg3 priority:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelLoadForAsset:(id)arg1 ;
-(void)cancelLoadForAsset:(id)arg1 format:(int)arg2 ;
-(void)invalidateCachedImagesForAsset:(id)arg1 ;
-(void)invalidateCachedImagesForAsset:(id)arg1 format:(int)arg2 ;
-(void)pauseLoading;
-(void)resumeLoading;
@end
