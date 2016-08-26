/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:54 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FLAnimatedWebPFrameInfo : NSObject <NSCopying> {

	BOOL _disposeToBackground;
	BOOL _blendWithPreviousFrame;
	BOOL _hasAlpha;
	CGRect _frameRect;

}

@property (nonatomic,readonly) CGRect frameRect;                         //@synthesize frameRect=_frameRect - In the implementation block
@property (nonatomic,readonly) BOOL disposeToBackground;                 //@synthesize disposeToBackground=_disposeToBackground - In the implementation block
@property (nonatomic,readonly) BOOL blendWithPreviousFrame;              //@synthesize blendWithPreviousFrame=_blendWithPreviousFrame - In the implementation block
@property (nonatomic,readonly) BOOL hasAlpha;                            //@synthesize hasAlpha=_hasAlpha - In the implementation block
-(id)initWithFrameRect:(CGRect)arg1 disposeToBackground:(BOOL)arg2 blendWithPreviousFrame:(BOOL)arg3 hasAlpha:(BOOL)arg4 ;
-(BOOL)blendWithPreviousFrame;
-(BOOL)disposeToBackground;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAlpha;
-(CGRect)frameRect;
@end
