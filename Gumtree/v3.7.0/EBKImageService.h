/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class CIContext, CIImage;

@interface EBKImageService : NSObject {

	CIContext* _contextCI;
	CIImage* _fullScreenCIImage;

}

@property (nonatomic,retain) CIContext * contextCI;                    //@synthesize contextCI=_contextCI - In the implementation block
@property (nonatomic,retain) CIImage * fullScreenCIImage;              //@synthesize fullScreenCIImage=_fullScreenCIImage - In the implementation block
+(id)rotationFilterForImageOrientation:(long long)arg1 size:(CGSize)arg2 ;
+(id)rotationFilterWithNumberOf90DegreeRotations:(double)arg1 clockwise:(BOOL)arg2 ;
+(id)filterChainForImage:(id)arg1 withFilters:(id)arg2 ;
+(id)scaleFilterWithScale:(double)arg1 ;
-(void)processAsset:(id)arg1 withMaxLength:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)processImage:(id)arg1 byScalingAndCroppingForSize:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)processImage:(id)arg1 withCropRect:(CGRect)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)processImage:(id)arg1 withNumberOf90DegreeCWRotations:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CIContext *)contextCI;
-(void)processImage:(id)arg1 withMaxLength:(double)arg2 imageOrientation:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setContextCI:(CIContext *)arg1 ;
-(CIImage *)fullScreenCIImage;
-(void)setFullScreenCIImage:(CIImage *)arg1 ;
-(id)init;
@end
