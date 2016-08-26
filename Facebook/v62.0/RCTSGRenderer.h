/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCTSGRendererDelegate;
#import <Facebook/Facebook-Structs.h>
@class NSMutableDictionary;

@interface RCTSGRenderer : NSObject {

	unsigned _vertexBuffer;
	unsigned _indexBuffer;
	RCTTextureInfo* _backBufferTextureInfo;
	ShaderBindings _defaultShader;
	RCTSGDynamicList _shaderList;
	RCTSGDynamicList _bindingBuffer;
	RCTSGDynamicList _textureInfo;
	NSMutableDictionary* _renderTargets;
	BOOL _upsideDown;
	double _time;
	id<RCTSGRendererDelegate> _delegate;

}

@property (assign,nonatomic) BOOL upsideDown;                                        //@synthesize upsideDown=_upsideDown - In the implementation block
@property (assign,nonatomic) double time;                                            //@synthesize time=_time - In the implementation block
@property (assign,nonatomic,__weak) id<RCTSGRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setUpsideDown:(BOOL)arg1 ;
-(void)drawView:(id)arg1 withWidth:(float)arg2 andHeight:(float)arg3 toFramebuffer:(unsigned)arg4 ;
-(unsigned)compileShader:(const char*)arg1 withType:(unsigned)arg2 ;
-(void)errorReport;
-(void)compileShaders:(ShaderBindings*)arg1 vertexProgram:(const char*)arg2 fragmentProgram:(const char*)arg3 ;
-(void)setupVBOs;
-(id)_createFramebufferWithWidth:(int)arg1 andHeight:(int)arg2 ;
-(void)drawScene:(RCTSGViewCameraItem*)arg1 renderItemsList:(RCTSGDynamicList*)arg2 bindingBuffer:(RCTSGDynamicList*)arg3 ;
-(void)_repareRenderContext:(RCTSGRenderContext*)arg1 withWidth:(float)arg2 andHeight:(float)arg3 ofView:(id)arg4 ;
-(void)drawRenderContext:(RCTSGRenderContext*)arg1 toFramebuffer:(unsigned)arg2 ;
-(void)_tearDownRenderContext:(RCTSGRenderContext*)arg1 ;
-(ShaderBindings*)findShader:(RCTSGViewRenderItem*)arg1 ;
-(const RCTTextureInfo*)textureInfoForSource:(id)arg1 withImageLoader:(id)arg2 ;
-(BOOL)upsideDown;
-(void)setDelegate:(id<RCTSGRendererDelegate>)arg1 ;
-(id)init;
-(id<RCTSGRendererDelegate>)delegate;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)cleanup;
@end
