/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:59:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKGGLDebugTileData : NSObject {

	unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> >* _namedLineMesh;
	unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> >* _unnamedLineMesh;
	unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> >* _polygonLineMesh;
	unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> >* _coastLineMesh;
	unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> >* _poiPointsMesh;
	unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> >* _verticesPointsMesh;
	unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> >* _junctionsPointsMesh;
	unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> >* _overpassPointsMesh;
	unsigned _namedLineCount;
	unsigned _namedLineVertCount;
	unsigned _unnamedLineCount;
	unsigned _unnamedLineVertCount;
	unsigned _polygonCount;
	unsigned _polygonVertCount;
	unsigned _poiCount;
	unsigned _vertexCount;
	unsigned _junctionCount;
	unsigned _overpassCount;
	unsigned _coastLineCount;
	unsigned _coastLineVertCount;

}

@property (nonatomic,readonly) BaseMesh* namedLineMesh; 
@property (nonatomic,readonly) BaseMesh* unnamedLineMesh; 
@property (nonatomic,readonly) BaseMesh* polygonLineMesh; 
@property (nonatomic,readonly) BaseMesh* coastLineMesh; 
@property (nonatomic,readonly) BaseMesh* poiPointsMesh; 
@property (nonatomic,readonly) BaseMesh* verticesPointsMesh; 
@property (nonatomic,readonly) BaseMesh* junctionsPointsMesh; 
@property (nonatomic,readonly) BaseMesh* overpassPointsMesh; 
@property (nonatomic,readonly) unsigned namedLineCount;                    //@synthesize namedLineCount=_namedLineCount - In the implementation block
@property (nonatomic,readonly) unsigned namedLineVertCount;                //@synthesize namedLineVertCount=_namedLineVertCount - In the implementation block
@property (nonatomic,readonly) unsigned unnamedLineCount;                  //@synthesize unnamedLineCount=_unnamedLineCount - In the implementation block
@property (nonatomic,readonly) unsigned unnamedLineVertCount;              //@synthesize unnamedLineVertCount=_unnamedLineVertCount - In the implementation block
@property (nonatomic,readonly) unsigned polygonCount;                      //@synthesize polygonCount=_polygonCount - In the implementation block
@property (nonatomic,readonly) unsigned polygonVertCount;                  //@synthesize polygonVertCount=_polygonVertCount - In the implementation block
@property (nonatomic,readonly) unsigned poiCount;                          //@synthesize poiCount=_poiCount - In the implementation block
@property (nonatomic,readonly) unsigned vertexCount;                       //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) unsigned junctionCount;                     //@synthesize junctionCount=_junctionCount - In the implementation block
@property (nonatomic,readonly) unsigned overpassCount;                     //@synthesize overpassCount=_overpassCount - In the implementation block
@property (nonatomic,readonly) unsigned coastLineCount;                    //@synthesize coastLineCount=_coastLineCount - In the implementation block
@property (nonatomic,readonly) unsigned coastLineVertCount;                //@synthesize coastLineVertCount=_coastLineVertCount - In the implementation block
-(id)initWithTile:(id)arg1 ;
-(void)_fillInDebugData:(id)arg1 ;
-(BaseMesh*)namedLineMesh;
-(BaseMesh*)unnamedLineMesh;
-(BaseMesh*)verticesPointsMesh;
-(BaseMesh*)poiPointsMesh;
-(BaseMesh*)polygonLineMesh;
-(BaseMesh*)junctionsPointsMesh;
-(BaseMesh*)overpassPointsMesh;
-(BaseMesh*)coastLineMesh;
-(unsigned)namedLineCount;
-(unsigned)namedLineVertCount;
-(unsigned)unnamedLineCount;
-(unsigned)unnamedLineVertCount;
-(unsigned)polygonCount;
-(unsigned)polygonVertCount;
-(unsigned)poiCount;
-(unsigned)vertexCount;
-(unsigned)junctionCount;
-(unsigned)overpassCount;
-(unsigned)coastLineCount;
-(unsigned)coastLineVertCount;
@end
