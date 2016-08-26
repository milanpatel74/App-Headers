/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryBlock.h>

@class NSArray, NSString;

@interface FBRichStoryTextBlock : FBRichStoryBlock {

	NSArray* _attributedEntities;
	NSArray* _attributedInlineStyles;
	long long _type;
	long long _alignment;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * attributedEntities;                  //@synthesize attributedEntities=_attributedEntities - In the implementation block
@property (nonatomic,copy) NSArray * attributedInlineStyles;              //@synthesize attributedInlineStyles=_attributedInlineStyles - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long alignment;                       //@synthesize alignment=_alignment - In the implementation block
+(id)sponsoredBlockWithID:(id)arg1 ;
-(NSArray *)attributedEntities;
-(NSArray *)attributedInlineStyles;
-(id)initWithType:(long long)arg1 text:(id)arg2 alignment:(long long)arg3 attributedEntities:(id)arg4 attributedInlineStyles:(id)arg5 blockID:(id)arg6 annotations:(id)arg7 ;
-(id)copyWithType:(long long)arg1 ;
-(void)setAttributedEntities:(NSArray *)arg1 ;
-(void)setAttributedInlineStyles:(NSArray *)arg1 ;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)alignment;
@end
