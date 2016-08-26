/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGLFilter.h>

@interface LUXFilter : FBGLFilter {

	int uniformLuxSaturationMultiplier;
	int uniformLuxNumHistogramBuckets;

}
-(id)prepareDerivedContext:(id)arg1 withFilterer:(id)arg2 ;
-(id)prepareInputsWithImageData:(unsigned*)arg1 width:(long long)arg2 height:(long long)arg3 derivedContext:(id)arg4 ;
-(id)getHSVFromColorAtIndex:(long long)arg1 inImageData:(unsigned*)arg2 ;
-(double)calculateHueVarianceForImage:(unsigned*)arg1 width:(long long)arg2 height:(long long)arg3 ;
-(id)shaderFunctionIncludes;
-(void)activateWithFilterer:(id)arg1 derivedContext:(id)arg2 ;
-(void)drawWithContext:(id)arg1 ;
-(id)init;
@end
