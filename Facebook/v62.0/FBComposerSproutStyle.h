/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBComposerSproutStyle : FBValueObject <NSCopying> {

	double _interiorSpacing;
	double _topBottomPadding;

}

@property (nonatomic,readonly) double interiorSpacing;               //@synthesize interiorSpacing=_interiorSpacing - In the implementation block
@property (nonatomic,readonly) double topBottomPadding;              //@synthesize topBottomPadding=_topBottomPadding - In the implementation block
-(double)topBottomPadding;
-(id)initWithInteriorSpacing:(double)arg1 topBottomPadding:(double)arg2 ;
-(double)interiorSpacing;
@end
