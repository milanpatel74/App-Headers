/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/IGFilter.h>

@class IGContext, NSBundle;

@interface IGGLFilter : IGFilter {

	IGContext* _context;
	NSBundle* _assetBundle;

}

@property (nonatomic,retain) NSBundle * assetBundle;              //@synthesize assetBundle=_assetBundle - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(id)shaderConstsForSplineSamplers;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)textureWithContentsOfData:(id)arg1 ;
-(id)programForContext:(id)arg1 ;
-(NSBundle *)assetBundle;
-(void)setAssetBundle:(NSBundle *)arg1 ;
-(id)init;
-(id)textureNamed:(id)arg1 ;
-(id)samplers;
@end
