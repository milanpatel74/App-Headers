/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBElementDescriptor.h>

@interface FBBoundingElementDescriptor : FBElementDescriptor {

	CGSize _boundingSize;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) UIEdgeInsets margins;              //@synthesize margins=_margins - In the implementation block
@property (assign,nonatomic) CGSize boundingSize;               //@synthesize boundingSize=_boundingSize - In the implementation block
+(id)boundingElementWithMargins:(UIEdgeInsets)arg1 boundingSize:(CGSize)arg2 ;
+(id)elementDescriptorForDescription:(id)arg1 ;
-(void)setBoundingSize:(CGSize)arg1 ;
-(double)insetForKey:(id)arg1 forElementOfSize:(CGSize)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)boundingSize;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(id)id;
@end
