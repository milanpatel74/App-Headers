/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface FBVideoProcessorConfig : NSObject <NSCopying> {

	int _inputPixelFormat;
	unsigned long long _scalingMode;
	NSMutableArray* _filterConfigs;
	CGRect _cropRectangle;
	GLKMatrix4 _contentTransform;

}

@property (assign,nonatomic) CGRect cropRectangle;                        //@synthesize cropRectangle=_cropRectangle - In the implementation block
@property (assign,nonatomic) unsigned long long scalingMode;              //@synthesize scalingMode=_scalingMode - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 contentTransform;                //@synthesize contentTransform=_contentTransform - In the implementation block
@property (nonatomic,copy) NSMutableArray * filterConfigs;                //@synthesize filterConfigs=_filterConfigs - In the implementation block
@property (nonatomic,readonly) int inputPixelFormat;                      //@synthesize inputPixelFormat=_inputPixelFormat - In the implementation block
-(id)initWithFilterConfigs:(id)arg1 inputPixelFormat:(int)arg2 ;
-(id)initWithCropRectangle:(CGRect)arg1 scalingMode:(unsigned long long)arg2 contentTransform:(_GLKMatrix4)arg3 filterConfigs:(id)arg4 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(int)inputPixelFormat;
-(_GLKMatrix4)contentTransform;
-(NSMutableArray *)filterConfigs;
-(void)insertFilterConfig:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeFilterConfigAtIndex:(unsigned long long)arg1 ;
-(id)initWithCropRectangle:(CGRect)arg1 scalingMode:(unsigned long long)arg2 contentTransform:(_GLKMatrix4)arg3 filterConfigs:(id)arg4 inputPixelFormat:(int)arg5 ;
-(id)initWithFilterConfigs:(id)arg1 ;
-(unsigned long long)filterConfigsCount;
-(void)setFilterConfigs:(NSMutableArray *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)scalingMode;
-(void)setScalingMode:(unsigned long long)arg1 ;
-(void)setCropRectangle:(CGRect)arg1 ;
-(CGRect)cropRectangle;
@end
