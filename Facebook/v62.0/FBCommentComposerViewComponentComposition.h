/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaAttachmentProtocol;
@class NSString, NSArray;

@interface FBCommentComposerViewComponentComposition : NSObject {

	NSString* _text;
	id<FBMediaAttachmentProtocol> _mediaAttachment;
	NSArray* _mentions;

}

@property (nonatomic,copy,readonly) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) id<FBMediaAttachmentProtocol> mediaAttachment;              //@synthesize mediaAttachment=_mediaAttachment - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mentions;                                    //@synthesize mentions=_mentions - In the implementation block
+(id)compositionWithText:(id)arg1 mediaAttachment:(id)arg2 mentions:(id)arg3 ;
-(id<FBMediaAttachmentProtocol>)mediaAttachment;
-(NSString *)text;
-(NSArray *)mentions;
@end
