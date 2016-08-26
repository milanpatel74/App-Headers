/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:54 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, KFVectorAnimation;

@interface KFVectorGradientEffect : NSObject <NSCopying, NSCoding> {

	NSString* _gradientTypeString;
	KFVectorAnimation* _colorStart;
	KFVectorAnimation* _colorEnd;

}

@property (nonatomic,copy,readonly) NSString * gradientTypeString;               //@synthesize gradientTypeString=_gradientTypeString - In the implementation block
@property (nonatomic,copy,readonly) KFVectorAnimation * colorStart;              //@synthesize colorStart=_colorStart - In the implementation block
@property (nonatomic,copy,readonly) KFVectorAnimation * colorEnd;                //@synthesize colorEnd=_colorEnd - In the implementation block
-(id)initWithGradientTypeString:(id)arg1 colorStart:(id)arg2 colorEnd:(id)arg3 ;
-(NSString *)gradientTypeString;
-(KFVectorAnimation *)colorStart;
-(KFVectorAnimation *)colorEnd;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
